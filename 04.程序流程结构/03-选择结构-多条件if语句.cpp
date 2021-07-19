#include <iostream>
using namespace std;

int main()
{
    /***************************
     * 选择结构 多条件if语句
     * 输入一个考试分数，如果大于600分，是为考上一本大学在屏幕输出
     * 大于500，视为考上二本大学
     * 大于400，视为考上三本大学
     * 小于等于400，视为未考上本科
     * if(条件1){ 条件1满足执行的语句 }else if(条件2){条件2满足执行的语句}... else{ 都不满足执行的语句}
    ****************************/
    int score = 0;

    cout << "请输入考试分数：" << endl;

    cin >> score;

    if (score > 600)
    {
        cout << "我考上了一本大学" << endl;
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
        cout << "我未考上本科" << endl;
    }

    system("pause");

    return 0;
}