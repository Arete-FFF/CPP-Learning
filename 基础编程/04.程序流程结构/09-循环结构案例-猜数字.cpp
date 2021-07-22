#include <iostream>
using namespace std;

int main()
{
    int ram = rand() % 100;
    int num = 0;
    cout << "请输入您所猜数字:" << endl;
    cin >> num;
    while (num != ram)
    {
        if (num > ram)
        {
            cout << "您猜的数字过大，请重新输入" << endl;
        }
        else
        {
            cout << "您猜的数字过小，请重新输入" << endl;
        }
        cin >> num;
    }
    cout << "恭喜您猜对了" << endl;

    return 0;
}