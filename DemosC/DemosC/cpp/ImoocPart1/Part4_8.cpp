/*
 *	C++ namespace
 */
#include <iostream>
using namespace std;


namespace A // 定义namespace
{
	int x = 1;
	void fun() {
		cout << "A" << endl;
	}
}
using namespace A;// 声明namespace
int main()
{
	int x = 10;
	cout << A::x<< endl;// 使用namespace调用
	fun();// 声明namespace后，直接使用
	system("pause");
	return 0;
}





