#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

using namespace std;

// void test()
// {
//     Worker *worker = NULL;
//     worker = new Employee(1, "张三", 1);
//     worker->showInfo();
//     delete worker;

//     worker = new Manager(2, "李四", 2);
//     worker->showInfo();
//     delete worker;

//     worker = new Boss(3, "王五", 3);
//     worker->showInfo();
//     delete worker;

//     system("pause");
// }
int main()
{
    //实例化管理者对象
    WorkerManager wm;
    //test();

    int choice;
    while (true)
    {
        //调用展示菜单成员函数
        wm.ShowMenu();
        cout << "请输入您的选择:" << endl;
        cin >> choice; //接受用户选择

        switch (choice)
        {
        case 0: //退出系统
            wm.ExitSystem();
            break;
        case 1: //添加职工
            wm.AddEmp();
            break;
        case 2: //显示职工
            wm.ShowEmp();
            break;
        case 3: //删除职工
            wm.DelEmp();
            break;
        case 4: //修改职工
            wm.ModEmp();
            break;
        case 5: //查找职工
            wm.FindEmp();
            break;
        case 6: //排序职工
            wm.SortEmp();
            break;
        case 7: //清空文件
            wm.CleanFile();
            break;
        default:
            system("cls");
            break;
        }
    }

    system("pause");
    return 0;
}
