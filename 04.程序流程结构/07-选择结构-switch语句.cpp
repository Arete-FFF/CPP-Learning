#include <iostream>
using namespace std;

int main()
{
    /*
    switch(表达式)
    {

        case 结果1：执行语句;break;

        case 结果2：执行语句;break;

        ...

        default:执行语句;break;
    }

    */

    //请给电影评分
    //10 ~ 9   经典
    // 8 ~ 7   非常好
    // 6 ~ 5   一般
    // 5分以下 烂片

    int score = 0;
    cout << "请给电影打分" << endl;
    cin >> score;

    switch (score)
    {
    case 10:
    case 9:
        cout << "经典" << endl;
        break; //case里如果没有break，那么程序会一直向下执行
    case 8:
        cout << "非常好" << endl;
        break;
    case 7:
    case 6:
        cout << "一般" << endl;
        break;
    default:
        cout << "烂片" << endl;
        break;
    }
    //if 与 switch 区别
    //switch 缺点， 判断时候只能是整数或者字符型，不能是一个区间
    //switch 有点， 结构清晰，执行效率高

    system("pause");

    return 0;
}