#include <iostream>
using namespace std;

int main()
{

    /*
        表达式1 ? 表达式2 ：表达式3
    */
    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;
    cout << "c = " << c << endl;

    //C++中三目运算符返回的是变量,可以继续赋值

    (a > b ? a : b) = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    //和if语句比较，三目运算符优点是短小整洁，缺点是如果用嵌套，结构不清晰
    system("pause");

    return 0;
}