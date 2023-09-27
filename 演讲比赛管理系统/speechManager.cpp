#include"speechmanager.h"

//构造函数
SpeechManager::SpeechManager()
{
	//初始化容器和属性
	this->Initspeech();

	//创建12名选手
	this->creatSpeaker();

	//加载往届记录
	void loadRecord();
}

//展示菜单
void SpeechManager::ShowManager()
{
	cout << "*******************************************" << endl;
	cout << "************ 欢迎参加演讲比赛 *************" << endl;
	cout << "************* 1、开始演讲比赛 *************" << endl;
	cout << "************* 2、查看往届记录 *************" << endl;
	cout << "************* 3、清空比赛记录 *************" << endl;
	cout << "************* 0、退出比赛程序 *************" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
}

//退出系统
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//初始化容器和属性
void SpeechManager::Initspeech()
{
	//容器制空
	this->v1.clear();
	this->v2.clear();
	this->vv.clear();
	this->m_Speaker.clear();

	//初始化比赛论述
	this->m_Index = 1;

	//初始化记录容器
	this->m_Record.clear();
}

//创建12名选手
void SpeechManager::creatSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];
		//创建具体选手
		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}

		//创建选手的编号
		this->v1.push_back(i + 10001);

		//选手的编号对应的编号  map
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}

}

//开始比赛  比赛整个流程的控制函数
void SpeechManager::Startspeech()
{
	//第一轮开始比赛

	//1、抽签
	this->speechDraw();
	//2、比赛
	this->speechContest();
	//3、显示结果
	this->showScore();
	//第二轮比赛
	this->m_Index++;
	//1、抽签
	this->speechDraw();
	//2、比赛
	this->speechContest();
	//3、最终结果、
	this->showScore();
	//4、保存分数到文件中
	this->saveRecord();
	cout << "本届比赛完毕" << endl;
	system("pause");
	system("cls");
}

//抽签
void SpeechManager::speechDraw()
{
	cout << "第<<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;
	cout << "——————————————————————" << endl;
	cout << "抽签后演讲顺序如下：" << endl;
	if (this->m_Index == 1)
	{
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
		cout << "——————————————————————" << endl;
		system("pause");
	}
	else
	{
		//第二轮比赛
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
		cout << "——————————————————————" << endl;
		system("pause");
	}
}

//比赛
void SpeechManager::speechContest()
{
	cout << "第<<" << this->m_Index << ">>轮比赛正式开始。" << endl;

	//准备临时容器存放小组成绩
	multimap<double, int, greater<double>>groupScore;
	int num = 0;//统计人员个数  6人一组

	vector<int>v_Src;//比赛人员的容器
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}
	//随机数种子
	srand((unsigned int)time(NULL));
	//遍历所有选手
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		//评委打分
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end(), greater<double>());//排序
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0);
		double avg = sum / (double)d.size();//平均分

		//打印平均分
		//cout << "编号：" << *it << " 姓名：" << this->m_Speaker[*it].m_Name << " 平均分：" << avg << endl;

		//将平均分放到map容器里
		this->m_Speaker[*it].m_Score[m_Index - 1] = avg;

		//将打分的数据放入到临时小组的容器中
		groupScore.insert(make_pair(avg, *it));//key是得分  value是编号

		//每6人取前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组的比赛名次：" << endl;
			for (multimap<double, int, greater<double>>::iterator mit = groupScore.begin(); mit != groupScore.end(); mit++)
			{
				cout << "编号：" << (*mit).second << " 姓名：" << this->m_Speaker[(*mit).second].m_Name << " 成绩：" << (*mit).first << endl;
			}

			//取走前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator mmit = groupScore.begin(); mmit != groupScore.end() && count < 3; mmit++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*mmit).second);
				}
				else
				{
					vv.push_back((*mmit).second);
				}
			}

			groupScore.clear();
		}
	}
	cout << endl;
	cout << "第" << this->m_Index << "轮比赛完毕。" << endl;
	system("pause");

}

//显示得分
void SpeechManager::showScore()
{
	cout << "第<<" << this->m_Index << ">>晋级选手信息如下：。" << endl;

	//判断第几轮
	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vv;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手编号：" << *it << " 姓名：" << this->m_Speaker[*it].m_Name << " 成绩：" << this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->ShowManager();
}

//保存记录
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//用追加的方式写文件

	//将每个人的数据写入到文件中
	for (vector<int>::iterator it = vv.begin(); it != vv.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Name << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	//关闭
	ofs.close();
	cout << "记录已经保存" << endl;

}

//读取记录
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//读文件
	if (!ifs.is_open())
	{
		this->fileIsempty = true;
		//cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	//文件清空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;
		this->fileIsempty = true;
		ifs.close();
		return;
	}
	//文件不为空
	this->fileIsempty = false;
	//将上面读取的单个字符放回来
	ifs.putback(ch);
	string data;
	int index = 0;
	while (ifs >> data)
	{

		//cout << data << endl;
		vector<string>v;//存放结果字符串

		int pos = -1;//查到 ， 位置的变量
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//没有找到
				break;
			}
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);

			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index + 1, v));
		index++;
	}
	ifs.close();
	//测试
	/*for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	{
		cout << (*it).first << "冠军的编号：" << (*it).second[0] << " 分数：" << (*it).second[1] << endl;
	}*/
}

//显示记录
void SpeechManager::sowRecord()
{
	/*for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "第" << i + 1 << "届" << "冠军编号：" << this->m_Record[i][0] << " 冠军姓名：" << this->m_Record[i][1] << " 冠军成绩：" << this->m_Record[i][2] << endl;
		cout << "第" << i + 1 << "届" << "亚军编号：" << this->m_Record[i][3] << " 亚军姓名：" << this->m_Record[i][4] << " 亚军成绩：" << this->m_Record[i][5] << endl;
		cout << "第" << i + 1 << "届" << "季军编号：" << this->m_Record[i][6] << " 季军姓名：" << this->m_Record[i][7] << " 季军成绩：" << this->m_Record[i][8] << endl;
		cout << endl;

	}*/
	if (this->fileIsempty)
	{
		cout << "文件为空或者文件不存在" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
		{
			cout << "第" << (*it).first << "届" << " 冠军的编号：" << (*it).second[0] << " 冠军姓名：" << (*it).second[1] << " 冠军成绩：" << (*it).second[2] << endl;
			cout << "第" << (*it).first << "届" << " 亚军的编号：" << (*it).second[3] << " 亚军姓名：" << (*it).second[4] << " 亚军成绩：" << (*it).second[5] << endl;
			cout << "第" << (*it).first << "届" << " 季军的编号：" << (*it).second[6] << " 季军姓名：" << (*it).second[7] << " 季军成绩：" << (*it).second[8] << endl;
		}
		system("pause");
		system("cls");
	}
}

//清空文件
void SpeechManager::clearRecord()
{
	cout << "是否确认清空文件" << endl;
	cout << "1——是" << endl;
	cout << "2——否" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//确认清空
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		//初始化容器和属性
		this->Initspeech();

		//创建12名选手
		this->creatSpeaker();

		//加载往届记录
		void loadRecord();

		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");
}

//析构函数
SpeechManager::~SpeechManager()
{

}