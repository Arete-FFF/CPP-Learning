#include <iostream>

using namespace std;

/*
作用： 给变量起别名

语法： 数据类型 &别名 = 原名
*/
int main()
{

    int a = 10;
    int &b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // 10
    // 10

    b = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // 100
    // 100

    system("pause");

    return 0;
}