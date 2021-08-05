#include <iostream>

using namespace std;

/*
函数原型：

deque<T> deqT; //默认构造形式
deque(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身。
deque(n, elem); //构造函数将n个elem拷贝给本身。
deque(const deque &deq); //拷贝构造函数
*/
#include <deque>

void printDeque(const deque<int> &d) //只读 不能写操作
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) //迭代器也需要一个 只读迭代器 ＋const
    {
        cout << *it << " ";
    }
    cout << endl;
}
//deque构造
void test01()
{

    deque<int> d1; //无参构造函数
    for (int i = 0; i < 5; i++)
    {
        d1.push_back(i);
        d1.push_front(i + 5);
    }
    printDeque(d1);
    deque<int> d2(d1.begin(), d1.end());
    printDeque(d2);

    deque<int> d3(10, 100);
    printDeque(d3);

    deque<int> d4 = d3;
    printDeque(d4);
}

int main()
{

    test01();

    system("pause");

    return 0;
}