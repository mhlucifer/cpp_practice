#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<string>
#include<fstream>
#include<ctime>

//�ݽ�������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	//չʾ�˵�
	void ShowManager();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//��ʼ������������
	void Initspeech();

	//����12��ѡ��
	void creatSpeaker();

	//��ʼ����  �����������̵Ŀ��ƺ���
	void Startspeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�÷�
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsempty;

	//��������¼������
	map<int, vector<string>>m_Record;

	//��ʾ��¼
	void sowRecord();

	//����ļ�
	void clearRecord();

	//��Ա����
	//�����һ�ֱ���ѡ�ֱ������
	vector<int>v1;
	//��һ�ֽ���ѡ�ֱ������
	vector<int>v2;
	//ʤ��ǰ����ѡ�ֱ������
	vector<int>vv;
	//��ű���Լ���Ӧѡ�ֵ�����
	map<int, Speaker>m_Speaker;
	//���������ı���
	int m_Index;

};