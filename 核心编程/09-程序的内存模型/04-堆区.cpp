#include <iostream>
using namespace std;
/*
​ 由程序员分配释放,若程序员不释放,程序结束时由操作系统回收

​ 在C++中主要利用new在堆区开辟内存
*/

int *func()
{
    //利用new 关键字 可以将数据开辟到堆区
    int *a = new int(10);
    return a;
}

int main()
{

    int *p = func();

    cout << *p << endl;
    //delete p;
    cout << *p << endl;

    system("pause");

    return 0;
}