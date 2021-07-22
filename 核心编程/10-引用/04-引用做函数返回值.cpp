#include <iostream>

using namespace std;
/*
作用：引用是可以作为函数的返回值存在的

注意：不要返回局部变量引用

用法：函数调用作为左值
*/

//返回局部变量引用
//数据类型后加&，相当于用引用的方式返回
int &test01()
{
    int a = 10; //局部变量存放在栈区
    return a;
}

//返回静态变量引用
int &test02()
{
    // 静态变量存放在全局区，全局区上的数据在程序结束后系统释放
    static int a = 20;
    return a;
}

int main()
{

    //不能返回局部变量的引用
    //因为局部变量操作完会自动释放

    //int &ref = test01();
    //cout << "ref = " << ref << endl;
    //cout << "ref = " << ref << endl;
    // 第一次结果正确，因为编译器做了保留
    // 第二次结果错误，因为a的内存已经释放

    //如果函数做左值，那么必须返回引用
    int &ref2 = test02();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;
    // 20
    // 20

    test02() = 1000;
    //函数调用在等号的左边存在:函数调用作为左值

    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;
    // 1000
    // 1000

    system("pause");

    return 0;
}
