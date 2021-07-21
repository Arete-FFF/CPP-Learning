#include <iostream>

using namespace std;

/*
指针的作用： 可以通过指针间接访问内存

内存编号是从0开始记录的，一般用十六进制数字表示
可以利用指针变量保存地址
*/
int main()
{
    //1、指针的定义
    int a = 10; //定义整型变量a

    //指针定义语法： 数据类型 * 变量名 ;
    int *p;

    //指针变量赋值
    p = &a;             //指针指向变量a的地址
    cout << &a << endl; //打印数据a的地址
    cout << p << endl;  //打印指针变量p
                        //0073F8BC
                        //0073F8BC

    //2、指针的使用
    //通过*操作指针变量指向的内存
    cout << "*p = " << *p << endl;
    // *p = 10

    /*
    普通变量存放的是数据,指针变量存放的是地址
    指针变量可以通过" * "操作符，操作指针变量指向的内存空间，这个过程称为解引用
    总结1： 我们可以通过 & 符号 获取变量的地址

    总结2：利用指针可以记录地址

    总结3：对指针变量解引用，可以操作指针指向的内存
    */
    system("pause");

    return 0;
}