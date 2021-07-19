#include <iostream>
using namespace std;

int main()
{
    //1.创建bool数据类型
    bool flag = true;
    cout << flag << endl; // true 代表真 1

    flag = false;
    cout << flag << endl; // false 代表假 0

    //2.bool类型占用空间 ‘1’
    cout << "size of bool = " << sizeof(bool) << endl; //1

    return 0;
}