#include <iostream>

using namespace std;
/*
学习目标：

掌握常用的排序算法
算法简介：

sort //对容器内元素进行排序
random_shuffle //洗牌 指定范围内的元素随机调整次序
merge // 容器元素合并，并存储到另一容器中
reverse // 反转指定范围的元素
5.3.1 sort
功能描述：

对容器内元素进行排序
函数原型：

sort(iterator beg, iterator end, _Pred);

// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置

// beg 开始迭代器

// end 结束迭代器

// _Pred 谓词
*/
#include <algorithm>
#include <vector>

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);

    //sort默认从小到大排序
    sort(v.begin(), v.end());
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;

    //从大到小排序
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
}

int main()
{

    test01();

    system("pause");

    return 0;
}