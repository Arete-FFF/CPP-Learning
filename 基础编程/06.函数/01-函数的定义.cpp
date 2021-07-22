#include <iostream>

using namespace std;

int add(int num1, int num2);

int main()
{
    /*
    函数的定义一般主要有5个步骤：

    1、返回值类型

    2、函数名

    3、参数表列

    4、函数体语句

    5、return 表达式

    语法：

    返回值类型 函数名 （参数列表）
    {

        函数体语句

        return表达式

    }
    */

    cout << add(1, 2) << endl;
    system("pause");

    return 0;
}

//函数定义
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}