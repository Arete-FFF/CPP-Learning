#include <iostream>

using namespace std;
/*
作用：函数传参时，可以利用引用的技术让形参修饰实参

优点：可以简化指针修改实参
*/
//1. 值传递
void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//2. 地址传递
void mySwap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//参数：把地址传进去，用指针接收

//3. 引用传递
void mySwap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
//参数：别名，下面的a是上面的a的别名，用别名操作修改可原名操作修改是一样的
int main()
{

    int a = 10;
    int b = 20;
    // 值传递，形参不会修饰实参
    mySwap01(a, b);
    cout << "a:" << a << " b:" << b << endl;
    // a:10 b:20

    // 地址传递，形参会修饰实参
    mySwap02(&a, &b);
    cout << "a:" << a << " b:" << b << endl;
    // a:20 b:10

    // 引用传递，形参会修饰实参
    mySwap03(a, b);
    cout << "a:" << a << " b:" << b << endl;
    // a:10 b:20

    system("pause");

    return 0;
}

//通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单s