#pragma once //防止多次编译

#include <iostream>
#include <fstream>
#include <string>
#include "worker.h"

#define FILENAME "empFile.txt"

using namespace std;

class WorkerManager
{
public:
    //构造函数
    WorkerManager();

    //统计人数
    int GetEmpNum();

    //初始化员工
    void InitEmp();

    //保存文件
    void save();

    //展示菜单函数
    void ShowMenu();

    //程序退出函数
    void ExitSystem();
    //增加职工
    void AddEmp();
    //显示职工
    void ShowEmp();
    //按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
    int IsExist(int id);
    //删除职工
    void DelEmp();
    //修改职工
    void ModEmp();
    //查找职工
    void FindEmp();
    //排序职工
    void SortEmp();
    //清空文件
    void CleanFile();

    //析构函数
    ~WorkerManager();

    //记录文件中的人数个数
    int m_EmpNum;
    //员工数组的指针
    Worker **m_EmpArray;
    //标志文件是否为空
    bool m_FileIsEmpty;
};