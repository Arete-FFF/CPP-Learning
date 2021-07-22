#include <iostream>
#include <string>

using namespace std;

/*
利用操作符 ->可以通过结构体指针访问结构体属性
*/
// 结构体定义
struct student
{
    //成员列表
    string name; //姓名
    int age;     //年龄
    int score;   //分数
};

int main()
{
    //创建结构体变量
    struct student stu = {
        "张三",
        18,
        100,
    };
    //通过指针指向结构体变量
    struct student *p = &stu;

    p->score = 80; //指针通过 -> 操作符可以访问成员

    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

    system("pause");

    return 0;
}