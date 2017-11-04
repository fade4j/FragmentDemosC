/*
*	C++ 函数新特性
*	函数默认参数
*	函数重载
*	内联函数（inline）
*/
#include <iostream>
using namespace std;
void fun(int i, int j, int k = 30);// 函数声明,使用了函数默认值
//void fun(int i, int j)函数在以上方法使用了默认值时，计算机无法识别，报错
void fun(int i, long j);// 重载函数
inline void fun(int i, double j);// 内联函数
int main()
{
	fun(10, 20l);
	fun(10, 20, 40);
	fun(10, 2.34);
	system("pause");
	return 0;
}

void fun(int i, int j, int k) // 函数实现，此时不写默认值， int k = 30，否则会出错：重复设置默认值
{
	cout << i << " , " << j << " , " << k << endl;
}

void fun(int i, long j)
{
	cout << i << " , " << j << endl;
}

void fun(int i, double j)
{
	cout << i << " , " << j << endl;
}