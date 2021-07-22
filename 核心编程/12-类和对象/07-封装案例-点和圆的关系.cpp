#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
    int m_x; //x坐标
    int m_y; //y坐标

public:
    //设置x坐标
    void setX(int x)
    {
        m_x = x;
    }
    //获取x坐标
    int getX()
    {
        return m_x;
    }
    //设置y坐标
    void setY(int y)
    {
        m_y = y;
    }
    //获取y坐标
    int getY()
    {
        return m_y;
    }
};
class Circle
{
private:
    int m_r;        //半径
    Point m_Center; //圆心

public:
    //设置半径
    void setR(int r)
    {
        m_r = r;
    }
    //获取半径
    int getR()
    {
        return m_r;
    }
    //设置圆心
    void setCenter(Point center)
    {
        m_Center = center;
    }
    //获取圆心
    Point getCenter()
    {
        return m_Center;
    }
};

//判断点和圆的关系
//void  isInCircle(Circle& c, Point& p)
void isInCirle(Circle &c, Point &p) //注意最好采用引用方式传参
{
    //计算两点之间的距离平方
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    //计算半径的平方
    int rDistance = c.getR() * c.getR();

    //判断关系
    if (distance == rDistance)
    {
        cout << "点在圆上" << endl;
    }
    else
    {
        if (distance > rDistance)
        {
            cout << "点在圆外" << endl;
        }
        else
        {
            cout << "点在圆内" << endl;
        }
    }
}

int main()
{
    //创建圆
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    //创建点
    Point p;
    p.setX(10);
    p.setY(10);

    //判断关系
    isInCirle(c, p);

    system("pause");

    return 0;
}