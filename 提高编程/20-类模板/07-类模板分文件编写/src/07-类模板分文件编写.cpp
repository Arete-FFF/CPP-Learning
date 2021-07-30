#include <iostream>
using namespace std;

//原因是类模板中成员函数是在调用时创建

//#include "person.h"
//#include "person.cpp" //解决方式1，包含cpp源文件

//解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
#include "person.hpp"

//主流的解决方式是第二种，将类模板成员函数写到一起，并将后缀名改为.hpp
void test01()
{
	Person<string, int> p("Tom", 10);
	p.showPerson();
}

int main()
{

	test01();

	system("pause");

	return 0;
}