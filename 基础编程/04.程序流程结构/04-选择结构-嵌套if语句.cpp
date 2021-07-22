#include <iostream>
using namespace std;

int main()
{
    /***************************
    提示用户输入一个高考考试分数，根据分数做如下判断
    分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
    在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
    ****************************/
    int score = 0;

    cout << "请输入考试分数：" << endl;

    cin >> score;

    if (score > 600)
    {
        cout << "我考上了一本大学" << endl;
        if (score > 700)
        {
            cout << "我考上了北大" << endl;
        }
        else if (score > 650)
        {
            cout << "我考上了清华" << endl;
        }
        else
        {
            cout << "我考上了人大" << endl;
        }
    }
    else if (score > 500)
    {
        cout << "我考上了二本大学" << endl;
    }
    else if (score > 400)
    {
        cout << "我考上了三本大学" << endl;
    }
    else
    {
        cout << "我未考上本科,请再接再厉" << endl;
    }

    system("pause");

    return 0;
}