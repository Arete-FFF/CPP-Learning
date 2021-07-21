#include <iostream>

using namespace std;
/*
const修饰指针有三种情况

const修饰指针 — 常量指针
const修饰常量 — 指针常量
const既修饰指针，又修饰常量

*/

int main()
{

    int a = 10;
    int b = 10;

    //const修饰的是指针，指针指向可以改，指针指向的值不可以更改
    const int *p1 = &a;
    p1 = &b; //正确
    //*p1 = 100;  报错

    //const修饰的是常量，指针指向不可以改，指针指向的值可以更改
    int *const p2 = &a;
    //p2 = &b; //错误
    *p2 = 100; //正确

    //const既修饰指针又修饰常量
    const int *const p3 = &a;
    //p3 = &b; //错误
    //*p3 = 100; //错误

    system("pause");

    return 0;
}

//看const右侧紧跟着的是指针还是常量, 是指针就是常量指针，是常量就是指针常量