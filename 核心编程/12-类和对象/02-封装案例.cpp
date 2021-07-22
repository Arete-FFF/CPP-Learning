#include <iostream>
#include <string>

using namespace std;

//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student
{

    //类中的属性和行为我们统一称为 成员
    //属性  成员属性  成员变量
    //行为  成员函数  成员方法
public:
    string m_name;
    string m_id;

public:
    void setName(string name)
    {
        m_name = name;
    }
    void setID(string id)
    {
        m_id = id;
    }

    void showStudent()
    {
        cout << "name:" << m_name << " ID:" << m_id << endl;
    }
};
int main()
{
    Student stu;
    stu.setName("德玛西亚");
    stu.setID("250");
    stu.showStudent();

    system("pause");

    return 0;
}