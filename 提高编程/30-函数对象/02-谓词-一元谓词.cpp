#include <iostream>

using namespace std;
/*
4.2.1 谓词概念
概念：

返回bool类型的仿函数称为谓词
如果operator()接受一个参数，那么叫做一元谓词
如果operator()接受两个参数，那么叫做二元谓词
*/
#include <vector>
#include <algorithm>

//1.一元谓词
struct GreaterFive
{
    bool operator()(int val)
    {
        return val > 5;
    }
};

void test01()
{

    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    //(std::vector<int>::iterator _First, std::vector<int>::iterator _Last, GreaterFive _Pred)Pred表示谓词
    //用法  将 *it  带入谓词中  若为真  返回当前位置的迭代器    若不存在 全为假  返回最后结束的迭代器
    if (it == v.end())
    {
        cout << "没找到!" << endl;
    }
    else
    {
        cout << "找到:" << *it << endl;
    }
}

int main()
{

    test01();

    system("pause");

    return 0;
}