#include <iostream>

using namespace std;
/*
功能描述：

减少vector在动态扩展容量时的扩展次数
函数原型：

reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问。
*/
#include <vector>

void test01()
{
    vector<int> v;

    //预留空间
    v.reserve(100000);

    int num = 0;
    int *p = NULL; //判断空间是否改变
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
        if (p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }

    cout << "num:" << num << endl;
}

int main()
{

    test01();

    system("pause");

    return 0;
}