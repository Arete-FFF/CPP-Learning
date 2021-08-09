#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>
#include <deque>
#include <numeric>
#include <fstream>
#include "speaker.h"

using namespace std;

class SpeechManager
{
public:
    //构造函数
    SpeechManager();
    //展示菜单
    void ShowMenu();
    //初始化属性
    void InitSpeech();
    //初始化创建12名选手
    void CreateSpeaker();

    //开始比赛 - 比赛流程控制
    void StartSpeech();
    //抽签
    void SpeechDraw();
    //比赛
    void SpeechContest();
    //显示比赛结果
    void ShowScore();
    //保存记录
    void SaveRecord();

    //读取记录
    void LoadRecord();
    //显示往届得分
    void ShowRecord();

    //清空记录
    void ClearRecord();

    //退出程序
    void ExitSystem();
    //析构函数
    ~SpeechManager();

public:
    //记录比赛轮次
    int m_Index;
    //比赛选手 容器  12人
    vector<int> v1;

    //第一轮晋级容器  6人
    vector<int> v2;

    //胜利前三名容器  3人
    vector<int> vVictory;

    //存放编号 以及对应的 具体选手 容器
    map<int, Speaker> m_Speaker;

    //文件为空的标志
    bool fileIsEmpty;

    //往届记录
    map<int, vector<string>> m_Record;
};