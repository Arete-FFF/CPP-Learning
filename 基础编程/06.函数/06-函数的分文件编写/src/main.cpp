/*

#include <iostream>

using namespace std;


让代码结构更加清晰

函数分文件编写一般有4个步骤

创建后缀名为.h的头文件
创建后缀名为.cpp的源文件
在头文件中写函数的声明
在源文件中写函数的定义


//swap.h文件


#include <iostream>
using namespace std;

//实现两个数字交换的函数声明
void swap(int a, int b);


//swap.cpp文件

#include "swap.h"

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//main函数文件
#include "swap.h"
int main()
{

    int a = 100;
    int b = 200;
    swap(a, b);

    system("pause");

    return 0;
}
*/
