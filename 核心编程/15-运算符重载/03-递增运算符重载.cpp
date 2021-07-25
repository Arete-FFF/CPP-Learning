#include <iostream>
using namespace std;

// 前置递增返回引用，后置递增返回值
class MyInteger
{

    friend ostream &operator<<(ostream &out, MyInteger myint);

public:
    MyInteger()
    {
        m_Num = 0;
    }
    //前置++   返回引用
    //返回引用为了抑制对一个数据进行递增操作

    MyInteger &operator++()
    {
        //先++
        m_Num++;
        //再返回
        return *this;
    }

    //后置++   返回值
    //貌似不太能链式
    //int 代表展位参数  可以用于区分前置和后置递增
    MyInteger operator++(int)
    {
        //先返回
        MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
        m_Num++;
        return temp;
    }

private:
    int m_Num;
};

ostream &operator<<(ostream &out, MyInteger myint)
{
    out << myint.m_Num;
    return out;
}

//前置++ 先++ 再返回
void test01()
{
    MyInteger myInt;
    cout << ++++myInt << endl;
    cout << myInt << endl;
}

//后置++ 先返回 再++
void test02()
{

    MyInteger myInt;
    cout << myInt++ << endl;
    cout << myInt << endl;
}

int main()
{

    test01();
    test02();

    system("pause");

    return 0;
}