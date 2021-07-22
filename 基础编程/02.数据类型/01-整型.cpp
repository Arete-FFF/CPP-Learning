#include <iostream>
using namespace std;

int main()
{
    //整型
    //1.短整型(-32768 ~ 32767)
    short num1 = 10;

    //2.整型 4字节	(-2^31 ~ 2^31-1)
    int num2 = 10;

    //3.长整型  Windows为4字节，Linux为4字节(32位)，8字节(64位)	(-2^31 ~ 2^31-1)
    long num3 = 10;

    //4.长长整型 8字节	(-2^63 ~ 2^63-1)
    long long num4 = 10;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    return 0;
}