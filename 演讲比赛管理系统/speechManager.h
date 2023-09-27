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

//演讲管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();

	//展示菜单
	void ShowManager();

	//退出系统
	void exitSystem();

	//析构函数
	~SpeechManager();

	//初始化容器和属性
	void Initspeech();

	//创建12名选手
	void creatSpeaker();

	//开始比赛  比赛整个流程的控制函数
	void Startspeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示得分
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();

	//判断文件是否为空
	bool fileIsempty;

	//存放往届记录的容器
	map<int, vector<string>>m_Record;

	//显示记录
	void sowRecord();

	//清空文件
	void clearRecord();

	//成员属性
	//保存第一轮比赛选手编号容器
	vector<int>v1;
	//第一轮晋级选手编号容器
	vector<int>v2;
	//胜出前三名选手编号容器
	vector<int>vv;
	//存放编号以及对应选手的容器
	map<int, Speaker>m_Speaker;
	//比赛轮数的变量
	int m_Index;

};