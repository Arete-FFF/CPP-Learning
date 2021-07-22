#include <iostream>
using namespace std;
/*
1.标识符不能是关键字
2.标识符只能由字母、数字、下划线组成
3.第一个字符必须为字母或下划线
4.标识符中字母区分大小写
*/

int main()
{
    //1.标识符不能是关键字
    //int int = 10;

    //2.标识符只能由字母、数字、下划线组成
    int abc = 10;
    int _abc = 20;
    int _123abc = 30;

    //3.第一个字符必须为字母或下划线
    //int 123abc = 40;

    //4.标识符中字母区分大小写
    int aaa = 100;
    //cout << AAA << endl; AAA和aaa不是同一个名称

    //
    return 0;
}