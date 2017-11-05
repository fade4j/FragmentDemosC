/*
*	C++ 份文件类外定义
*/
#include <iostream>
#include "Teacher.h"// 自定义类使用双引号引入"Teacher.h"
using namespace std;
int main()
{
	Teacher *t = new Teacher();// 堆内实例化
	if (t == NULL) {
		cout << "Allocate memory failed!!!!!" << endl;
		system("pause");
		return 0;
	}
	t->setName("孔子");
	t->setGender("男");
	t->setAge(18);
	t->teach();
	t->toString();
	delete t;
	t = NULL;
	system("pause");
	return 0;
}