#include <iostream>
using namespace std;

//利用开发人员命令提示工具查看对象模型
//跳转盘符  F:
// 跳转文件路径 cd 具体路径下
// 查看命令
// c1 /d1 reportSingleClassLayout类名 文件名

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

//公共继承
class Son : public Base
{
public:
    int m_D;
};

void test01()
{
    //16
    //父类中所有非静态成员属性都会被子类继承下去
    //父类中的私有成员属性 是被编译器给隐藏了  因此访问不到  但是确实被继承下去了
    cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main()
{

    test01();

    system("pause");

    return 0;
}

//父类中私有成员也是被子类继承下去了，只是由编译器给隐藏后访问不到