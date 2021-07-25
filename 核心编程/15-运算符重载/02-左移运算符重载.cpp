#include <iostream>
using namespace std;

//重载左移运算符配合友元可以实现输出自定义数据类型

class Person
{
    friend ostream &operator<<(ostream &out, Person &p);

public:
    Person(int a, int b)
    {
        this->m_A = a;
        this->m_B = b;
    }

    //成员函数 实现不了  p << cout 不是我们想要的效果
    //通常不用成员函数实现重载左移运算符
    //左移运算符只有一个
    //void operator<<(Person& p){
    //}

private:
    int m_A;
    int m_B;
};

//全局函数实现左移重载
//ostream对象只能有一个
//如果需要链式重载  则还需要out输出流形式  并且采用引用方法实现
ostream &operator<<(ostream &cout, Person &p) //此处cout为别名可以随意改
{
    cout << "a:" << p.m_A << " b:" << p.m_B;
    return cout;
}

void test()
{

    Person p1(10, 20);

    cout << p1 << "hello world" << endl; //链式编程
}

int main()
{

    test();

    system("pause");

    return 0;
}