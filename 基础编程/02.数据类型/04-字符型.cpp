#include <iostream>
using namespace std;

int main()
{

    //1.字符型变量创建方式
    char ch = 'a';
    cout << ch << endl;

    //2.字符型变量所占内存大小
    cout << sizeof(char) << endl;

    //3.字符型变量常见错误
    //ch = "abcde"; //错误，不可以用双引号
    //ch = 'abcde'; //错误，单引号内只能引用一个字符

    //4.字符型变量对应ASCII 编码
    //a = 97
    //A = 65
    cout << (int)ch << endl; //查看字符a对应的ASCII码
    ch = 97;                 //可以直接用ASCII给字符型变量赋值
    cout << ch << endl;

    system("pause");

    return 0;
}