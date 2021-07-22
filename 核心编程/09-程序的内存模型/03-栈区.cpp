#include <iostream>
using namespace std;

/*
​ 由编译器自动分配释放, 存放函数的参数值,局部变量等

​ 注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
*/
int *func(int b) //形参也会存放在栈区
{
    b = 100;
    int a = 10; //局部变量，存放在栈区，栈区的数据在执行函数完成后自动释放
    return &a;  // 返回局部变量地址
}

int main()
{
    int b;
    int *p = func(b);

    cout << *p << endl; //第一次可以打印正确的数字，是因为编译器做了保留
    cout << *p << endl; //第二次这个数据就不再保留了

    system("pause");

    return 0;
}