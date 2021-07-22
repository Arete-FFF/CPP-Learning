#include <iostream>
using namespace std;
/*
C++面向对象的三大特性为：封装、继承、多态

C++认为万事万物都皆为对象，对象上有其属性和行为


封装是C++面向对象三大特性之一

封装的意义：

将属性和行为作为一个整体，表现生活中的事物
将属性和行为加以权限控制
封装意义一：

​ 在设计类的时候，属性和行为写在一起，表现事物

语法： class 类名{ 访问权限： 属性 / 行为 };
*/

//圆周率
const double PI = 3.1415926;

//设计一个圆类，求圆的周长
//圆求周长的公式： 2*pi*半径

//class 代表设计一个类，类后面紧跟着就是类名称

class Circle
{
    //访问权限
    //公共权限
public:
    //属性
    //半径
    int m_r;

    //行为
    //获取圆的周长
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

int main()
{
    //通过圆类 创建具体的圆（对象）
    //实例化  通过一个类创建一个对象
    Circle c1;
    //给圆对象的属性进行赋值
    c1.m_r = 10;

    //2 * PI * 10 = 62.8
    cout << "圆的周长" << c1.calculateZC() << endl;

    system("pause");

    return 0;
}