#include <iostream>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    cout << "请依次输入三只小猪体重小猪：" << endl;
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            cout << "第一只小猪最重,体重为:" << num1 << endl;
        }
        else
        {
            cout << "第三只小猪最重,体重为:" << num3 << endl;
        }
    }
    else
    {
        if (num2 >= num3)
        {
            cout << "第二只小猪最重,体重为:" << num2 << endl;
        }
        else
        {
            cout << "第三只小猪最重,体重为:" << num3 << endl;
        }
    }

    return 0;
}