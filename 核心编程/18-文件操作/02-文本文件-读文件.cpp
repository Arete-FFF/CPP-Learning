#include <iostream>
using namespace std;
#include <fstream>
#include <string>

/*
读文件步骤如下：

包含头文件

#include <fstream>

创建流对象

ifstream ifs;

打开文件并判断文件是否打开成功

ifs.open(“文件路径”,打开方式);

读数据

四种方式读取

关闭文件

ifs.close();
*/

void test01()
{
    ifstream ifs;
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }

    //第一种方式
    // char buf[1024] = {0};
    // while (ifs >> buf)
    // {
    //     cout << buf << endl;
    // }

    //第二种
    //char buf[1024] = { 0 };
    //while (ifs.getline(buf,sizeof(buf)))
    //{
    //	cout << buf << endl;
    //}

    //第三种
    //string buf;
    //while (getline(ifs, buf))
    //{
    //	cout << buf << endl;
    //}

    // char c;
    // while ((c = ifs.get()) != EOF)//End Of File
    // {
    //     cout << c;
    // }

    ifs.close();
}

int main()
{

    test01();

    system("pause");

    return 0;
}