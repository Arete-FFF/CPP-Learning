#include <iostream>
using namespace std;
#include <fstream>

/*
文件操作必须包含头文件 fstream
读文件可以利用 ofstream ，或者fstream类
打开文件时候需要指定操作文件的路径，以及打开方式
利用<<可以向文件中写数据
操作完毕，要关闭文件
*/
void test01()
{
    //1.包含头文件 fstream
    //2.创建流对象
    //3.指定打开方式
    ofstream ofs;
    ofs.open("test.txt", ios::out);

    //4.写内容
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;

    //5.关闭文件
    ofs.close();
}

int main()
{

    test01();

    system("pause");

    return 0;
}