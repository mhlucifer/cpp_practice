#include<iostream>
using namespace std;
#include"speechmanager.h"
#include<string>



int main()
{
	//�������������
	SpeechManager sm;

	//����12��ѡ�ֵĴ���
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "ѡ�ֵı�ţ�" << (*it).first << " ������" << (*it).second.m_Name << " ������" << (*it).second.m_Score[0] << endl;
	 }*/

	int choice = 0;//�洢�û�����

	while (true)
	{
		sm.ShowManager();
		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1://��ʼ����
			sm.Startspeech();
			break;
		case 2://�鿴���������¼
			sm.loadRecord();
			sm.sowRecord();
			break;
		case 3://��ձ�����¼
			sm.clearRecord();
			break;
		case 0://�˳���������
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