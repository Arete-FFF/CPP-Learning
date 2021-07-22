#include <iostream>
#include <string>

using namespace std;

int main()
{
    int scores[3][3] =
        {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}};
    int sum[3] = {0};
    string names[3] = {"张三", "李四", "王五"};

    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++)
    {
        for (int j = 0; j < sizeof(scores[0]) / sizeof(scores[0][0]); j++)
        {
            sum[i] += scores[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << names[i] << "同学总成绩为： " << sum[i] << " " << endl;
        ;
    }

    system("pause");

    return 0;
}