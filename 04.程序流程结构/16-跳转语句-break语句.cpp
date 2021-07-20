#include <iostream>
using namespace std;

int main()
{
    /*
    用于跳出选择结构或者循环结构
    出现在switch条件语句中，作用是终止case并跳出switch
    出现在循环语句中，作用是跳出当前的循环语句
    出现在嵌套循环中，跳出最近的内层循环语句
    */

    //1、在switch 语句中使用break
    cout << "请选择您挑战副本的难度：" << endl;
    cout << "1、普通" << endl;
    cout << "2、中等" << endl;
    cout << "3、困难" << endl;

    int num = 0;

    cin >> num;

    switch (num)
    {
    case 1:
        cout << "您选择的是普通难度" << endl;
        break;
    case 2:
        cout << "您选择的是中等难度" << endl;
        break;
    case 3:
        cout << "您选择的是困难难度" << endl;
        break;
    }
    system("pause");

    //2、在循环语句中用break
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break; //跳出循环语句
        }
        cout << i << endl;
    }

    system("pause");

    //3、在嵌套循环语句中使用break，退出内层循环
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 5)
            {
                break;
            }
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    system("pause");

    return 0;
}