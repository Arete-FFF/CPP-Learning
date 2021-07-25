#include <iostream>
using namespace std;

/*
在C++中，类内的成员变量和成员函数分开存储

只有非静态成员变量才属于类的对象上
*/
class Person
{
public:
    Person()
    {
        mA = 0;
    }
    //非静态成员变量占对象空间
    int mA;
    double mC; //字节对齐
    //静态成员变量不占对象空间
    static int mB;
    //函数也不占对象空间，所有函数共享一个函数实例
    void func()
    {
        cout << "mA:" << this->mA << endl;
    }
    //静态成员函数也不占对象空间
    static void sfunc()
    {
    }
};

int main()
{
    //空对象占用内存空间为：1；
    //C++ 编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    //每个空对象应该也有一个独一无二的空间
    cout << sizeof(Person) << endl;

    system("pause");

    return 0;
}