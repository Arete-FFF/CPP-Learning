#include <iostream>
using namespace std;

int main()
{
    /*
    while(循环条件){ 循环语句 }
    只要循环条件的结果为真，就执行循环语句
    */
    int num = 0;
    while (num < 10)
    {
        cout << "num = " << num << endl;
        num++;
    }

    system("pause");

    return 0;
}