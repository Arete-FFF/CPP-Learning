#include <iostream>
using namespace std;
//递增           递减类似
int main()
{

    //后置递增
    int a = 10;
    a++;               //等价于a = a + 1
    cout << a << endl; // 11

    //前置递增
    int b = 10;
    ++b;
    cout << b << endl; // 11

    //区别
    //前置递增先对变量进行++，再计算表达式
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << a2 << endl;
    cout << b2 << endl;

    //后置递增先计算表达式，后对变量进行++
    int a3 = 10;
    int b3 = a3++ * 10;
    cout << a3 << endl;
    cout << b3 << endl;

    system("pause");

    return 0;
}