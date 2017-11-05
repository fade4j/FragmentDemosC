/*
*	C++ 构造函数与初始化列表
*/
#include "Coach.h"
using namespace SpaceCowboy;// 使用命名空间 SpaceCowboy
int main()
{
	Coach c("Jim", 25, 30);
	c.toString();
	Coach cc("Merry", 25);
	cc.toString();
	system("pause");
	return 0;
}