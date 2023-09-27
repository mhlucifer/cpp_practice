#include<iostream>
using namespace std;
#include"speechmanager.h"
#include<string>



int main()
{
	//创建管理类对象
	SpeechManager sm;

	//测试12名选手的代码
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "选手的编号：" << (*it).first << " 姓名：" << (*it).second.m_Name << " 分数：" << (*it).second.m_Score[0] << endl;
	 }*/

	int choice = 0;//存储用户输入

	while (true)
	{
		sm.ShowManager();
		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1://开始比赛
			sm.Startspeech();
			break;
		case 2://查看往届比赛记录
			sm.loadRecord();
			sm.sowRecord();
			break;
		case 3://清空比赛记录
			sm.clearRecord();
			break;
		case 0://退出比赛程序
			sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}