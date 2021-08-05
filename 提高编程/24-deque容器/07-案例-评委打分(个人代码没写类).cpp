/*
创建五名选手，放到vector中
遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
sort算法对deque容器中分数排序，去除最高和最低分
deque容器遍历一遍，累加总分
获取平均分
*/

#include <iostream>
#include <algorithm>
#include <deque>
#include <time.h>
#include <vector>

using namespace std;

void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void printVector(const vector<int> &v)
{
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void initvector(vector<int> &v)
{
    for (int i = 0; i < 10; i++)
    {
        int temp = rand() % 41 + 60;
        v.push_back(temp);
    }
}

void exchange_sort(vector<int> &v, deque<int> &d)
{
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
    {
        d.push_back(*it);
    }
    sort(d.begin(), d.end());
    d.pop_front();
    d.pop_back();
}

int ret_sum_deque(deque<int> &d)
{
    int sum = 0;
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        sum += *it;
    }
    return sum;
}

void test01()
{
    vector<int> score_v[5];
    deque<int> score_d[5];
    for (int i = 0; i < 5; i++)
    {
        initvector(score_v[i]);
        printVector(score_v[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        exchange_sort(score_v[i], score_d[i]);
        printDeque(score_d[i]);
    }

    int sum[5] = {0};
    double ave[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        sum[i] = ret_sum_deque(score_d[i]);
        ave[i] = sum[i] / 8.0;
        cout << "选手" << (char)(i + 'A') << "总分为 : " << sum[i] << "\t平均分为 : " << ave[i] << endl;
    }
}

int main()
{
    srand((unsigned int)time(NULL)); //随机数种子

    test01();

    return 0;
}