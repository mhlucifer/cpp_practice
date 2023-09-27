#include"speechmanager.h"

//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ������������
	this->Initspeech();

	//����12��ѡ��
	this->creatSpeaker();

	//���������¼
	void loadRecord();
}

//չʾ�˵�
void SpeechManager::ShowManager()
{
	cout << "*******************************************" << endl;
	cout << "************ ��ӭ�μ��ݽ����� *************" << endl;
	cout << "************* 1����ʼ�ݽ����� *************" << endl;
	cout << "************* 2���鿴�����¼ *************" << endl;
	cout << "************* 3����ձ�����¼ *************" << endl;
	cout << "************* 0���˳��������� *************" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//��ʼ������������
void SpeechManager::Initspeech()
{
	//�����ƿ�
	this->v1.clear();
	this->v2.clear();
	this->vv.clear();
	this->m_Speaker.clear();

	//��ʼ����������
	this->m_Index = 1;

	//��ʼ����¼����
	this->m_Record.clear();
}

//����12��ѡ��
void SpeechManager::creatSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		//��������ѡ��
		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}

		//����ѡ�ֵı��
		this->v1.push_back(i + 10001);

		//ѡ�ֵı�Ŷ�Ӧ�ı��  map
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}

}

//��ʼ����  �����������̵Ŀ��ƺ���
void SpeechManager::Startspeech()
{
	//��һ�ֿ�ʼ����

	//1����ǩ
	this->speechDraw();
	//2������
	this->speechContest();
	//3����ʾ���
	this->showScore();
	//�ڶ��ֱ���
	this->m_Index++;
	//1����ǩ
	this->speechDraw();
	//2������
	this->speechContest();
	//3�����ս����
	this->showScore();
	//4������������ļ���
	this->saveRecord();
	cout << "����������" << endl;
	system("pause");
	system("cls");
}

//��ǩ
void SpeechManager::speechDraw()
{
	cout << "��<<" << this->m_Index << ">>�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "��������������������������������������������" << endl;
	cout << "��ǩ���ݽ�˳�����£�" << endl;
	if (this->m_Index == 1)
	{
		//��һ�ֱ���
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
		cout << "��������������������������������������������" << endl;
		system("pause");
	}
	else
	{
		//�ڶ��ֱ���
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
		cout << "��������������������������������������������" << endl;
		system("pause");
	}
}

//����
void SpeechManager::speechContest()
{
	cout << "��<<" << this->m_Index << ">>�ֱ�����ʽ��ʼ��" << endl;

	//׼����ʱ�������С��ɼ�
	multimap<double, int, greater<double>>groupScore;
	int num = 0;//ͳ����Ա����  6��һ��

	vector<int>v_Src;//������Ա������
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}
	//���������
	srand((unsigned int)time(NULL));
	//��������ѡ��
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		//��ί���
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end(), greater<double>());//����
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0);
		double avg = sum / (double)d.size();//ƽ����

		//��ӡƽ����
		//cout << "��ţ�" << *it << " ������" << this->m_Speaker[*it].m_Name << " ƽ���֣�" << avg << endl;

		//��ƽ���ַŵ�map������
		this->m_Speaker[*it].m_Score[m_Index - 1] = avg;

		//����ֵ����ݷ��뵽��ʱС���������
		groupScore.insert(make_pair(avg, *it));//key�ǵ÷�  value�Ǳ��

		//ÿ6��ȡǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С��ı������Σ�" << endl;
			for (multimap<double, int, greater<double>>::iterator mit = groupScore.begin(); mit != groupScore.end(); mit++)
			{
				cout << "��ţ�" << (*mit).second << " ������" << this->m_Speaker[(*mit).second].m_Name << " �ɼ���" << (*mit).first << endl;
			}

			//ȡ��ǰ����
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
	cout << "��" << this->m_Index << "�ֱ�����ϡ�" << endl;
	system("pause");

}

//��ʾ�÷�
void SpeechManager::showScore()
{
	cout << "��<<" << this->m_Index << ">>����ѡ����Ϣ���£���" << endl;

	//�жϵڼ���
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
		cout << "ѡ�ֱ�ţ�" << *it << " ������" << this->m_Speaker[*it].m_Name << " �ɼ���" << this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->ShowManager();
}

//�����¼
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//��׷�ӵķ�ʽд�ļ�

	//��ÿ���˵�����д�뵽�ļ���
	for (vector<int>::iterator it = vv.begin(); it != vv.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Name << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	//�ر�
	ofs.close();
	cout << "��¼�Ѿ�����" << endl;

}

//��ȡ��¼
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//���ļ�
	if (!ifs.is_open())
	{
		this->fileIsempty = true;
		//cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	//�ļ����
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;
		this->fileIsempty = true;
		ifs.close();
		return;
	}
	//�ļ���Ϊ��
	this->fileIsempty = false;
	//�������ȡ�ĵ����ַ��Ż���
	ifs.putback(ch);
	string data;
	int index = 0;
	while (ifs >> data)
	{

		//cout << data << endl;
		vector<string>v;//��Ž���ַ���

		int pos = -1;//�鵽 �� λ�õı���
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//û���ҵ�
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
	//����
	/*for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	{
		cout << (*it).first << "�ھ��ı�ţ�" << (*it).second[0] << " ������" << (*it).second[1] << endl;
	}*/
}

//��ʾ��¼
void SpeechManager::sowRecord()
{
	/*for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "��" << i + 1 << "��" << "�ھ���ţ�" << this->m_Record[i][0] << " �ھ�������" << this->m_Record[i][1] << " �ھ��ɼ���" << this->m_Record[i][2] << endl;
		cout << "��" << i + 1 << "��" << "�Ǿ���ţ�" << this->m_Record[i][3] << " �Ǿ�������" << this->m_Record[i][4] << " �Ǿ��ɼ���" << this->m_Record[i][5] << endl;
		cout << "��" << i + 1 << "��" << "������ţ�" << this->m_Record[i][6] << " ����������" << this->m_Record[i][7] << " �����ɼ���" << this->m_Record[i][8] << endl;
		cout << endl;

	}*/
	if (this->fileIsempty)
	{
		cout << "�ļ�Ϊ�ջ����ļ�������" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
		{
			cout << "��" << (*it).first << "��" << " �ھ��ı�ţ�" << (*it).second[0] << " �ھ�������" << (*it).second[1] << " �ھ��ɼ���" << (*it).second[2] << endl;
			cout << "��" << (*it).first << "��" << " �Ǿ��ı�ţ�" << (*it).second[3] << " �Ǿ�������" << (*it).second[4] << " �Ǿ��ɼ���" << (*it).second[5] << endl;
			cout << "��" << (*it).first << "��" << " �����ı�ţ�" << (*it).second[6] << " ����������" << (*it).second[7] << " �����ɼ���" << (*it).second[8] << endl;
		}
		system("pause");
		system("cls");
	}
}

//����ļ�
void SpeechManager::clearRecord()
{
	cout << "�Ƿ�ȷ������ļ�" << endl;
	cout << "1������" << endl;
	cout << "2������" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//ȷ�����
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		//��ʼ������������
		this->Initspeech();

		//����12��ѡ��
		this->creatSpeaker();

		//���������¼
		void loadRecord();

		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//��������
SpeechManager::~SpeechManager()
{

}