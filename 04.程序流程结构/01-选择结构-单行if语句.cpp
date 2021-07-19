#include <iostream>
using namespace std;

int main()
{
    //选择结构-单行if语句
    //输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印
    //if(条件){ 条件满足执行的语句 }

    //1.用户输入分数
    int score = 0;
    cout << "请输入一个分数：" << endl;
    cin >> score;

    //2.打印用户分数
    cout << "您输入的分数为： " << score << endl;

    //3.判断用户分数是否大于600
    //if语句
    //注意事项，在if判断语句后面，不要加分号
    if (score > 600)
    {
        cout << "我考上了一本大学！！！" << endl;
    }

    system("pause");
    return 0;
}