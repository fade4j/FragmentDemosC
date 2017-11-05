/*
*	C++ 对象数组
*/
#include <iostream>
#include "Coordinate.cpp"
using namespace std;
int main()
{
	Coordinate coor[3];// 栈中实例化对象数组
	Coordinate *p = new Coordinate[3];// 堆中实例化对象数组
	// 对象实例化后，就存在元素，其中元素不为空，与Java不同
	coor[0].m_iX = 10;
	coor[0].m_iY = 20;
	// 指针角标操作数组元素方式一
	//p[0].m_iX = 11;
	//p[0].m_iY = 11;
	//p[1].m_iX = 22;
	//p[1].m_iY = 22;
	//p[2].m_iX = 33;
	//p[2].m_iY = 33;
	// ------------------------
	// 指针操作数组元素方式二
	cout << p << endl;
	p->m_iX = 11;
	p->m_iY = 11;
	++p;
	cout << p << endl;
	//p->m_iX = 22;
	//p->m_iY = 22;
	//++p;
	//p->m_iX = 33;
	//p->m_iY = 33;
	//p -= 2;// 释放指针占用内存前先将指针归位,否则销毁异常
	// ------------------------
	// 以上两种方式混合使用
	p[0].m_iX = 22;
	p[0].m_iY = 22;
	p[1].m_iX = 33;
	p[2].m_iY = 33;
	p--;
	delete[]p;
	p = NULL;
	system("pause");
	return 0;
}