#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
    int m_x; //x坐标
    int m_y; //y坐标

public:
    //设置x坐标
    void setX(int x);
    //获取x坐标
    int getX();
    //设置y坐标
    void setY(int y);
    //获取y坐标
    int getY();
};