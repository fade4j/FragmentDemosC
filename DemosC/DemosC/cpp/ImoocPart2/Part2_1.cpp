/*
*	C++ 引用
*/
#include <iostream>
using namespace std;
typedef struct {
	int x;
	int y;
} Coord;

/**
*	交换数值
*/
void func(int &a, int &b)// 引用作为函数参数传递
{
	int c = a;
	a = b;
	b = c;
}

void func1(const int &a, const int &b);// 函数声明

int main()
{
	Coord c;
	Coord &c1 = c;// 变量的引用
	c1.x = 10;
	c1.y = 20;

	cout << c.x<<"," << c.y << endl;
	int a = 10;
	int *p = &a;
	int *&q = p;// 指针的引用
	cout << a << "," << &a << endl;
	cout << p << "," << *p << endl;
	*q = 5;
	cout << a << "," << &a << endl;
	int m = 1, n = 2;
	func(m, n);// 交换数值
	cout << m << "," << n << endl;
	func1(m, n);
	system("pause");
	return 0;
}
void func1(const int &a, const int &b)// 函数定义
{
	//cout << a << endl;
	//cout << b << endl;
	/*
	* 此时a，b已是常量，值不能改变
	*/
	//a = 3;
	//b = 4;
}