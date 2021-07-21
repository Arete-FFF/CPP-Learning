#include <iostream>

using namespace std;

int add(int num1, int num2);

int main()
{
    /*
    函数名（参数）
    */
    int a = 10;
    int b = 10;
    //调用add函数
    int sum = add(a, b); //调用时的a，b称为实际参数，简称实参
    //当调用函数时候，实参的值会传递给形参
    cout << "sum = " << sum << endl;

    a = 100;
    b = 100;

    sum = add(a, b);
    cout << "sum = " << sum << endl;

    cout << add(1, 2) << endl;
    system("pause");

    return 0;
}

//函数定义
int add(int num1, int num2) //定义中的num1,num2称为形式参数，简称形参
{
    int sum = num1 + num2;
    return sum;
}