/*
*	C++ 内存管理
*/
#include <iostream>
using namespace std;
int main()
{
	int *i = new int(10);// 申请单个内存
	int *ii = new int;
	*ii = 20;
	cout << *i << endl;
	cout << *ii << endl;
	delete i;// 释放内存
	i = NULL;
	delete ii;
	ii = NULL;
	int *iArr = new int[20];// 申请一块内存
	if (iArr != NULL)
	{
		cout << iArr << endl;
		delete[]iArr;// 销毁一块内存
	}
	iArr = NULL;
	system("pause");
	return 0;
}