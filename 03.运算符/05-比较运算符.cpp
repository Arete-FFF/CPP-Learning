#include <iostream>
using namespace std;

int main()
{
    //注意：C和C++ 语言的比较运算中， “真”用数字“1”来表示， “假”用数字“0”来表示。

    int a = 10;
    int b = 20;

    cout << (a == b) << endl; // 0

    cout << (a != b) << endl; // 1

    cout << (a > b) << endl; // 0

    cout << (a < b) << endl; // 1

    cout << (a >= b) << endl; // 0

    cout << (a <= b) << endl; // 1

    system("pause");

    return 0;
}