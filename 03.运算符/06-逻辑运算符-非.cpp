#include <iostream>
using namespace std;

int main()
{
    //逻辑运算符 非 '!'
    int a = -10;
    //在C++ 除了零都是真
    cout << !a << endl; // 0

    cout << !!a << endl; // 1
    //总结： 真变假，假变真

    return 0;
}