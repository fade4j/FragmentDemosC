/*
 *	C++ namespace
 */
#include <iostream>
using namespace std;


namespace A // ����namespace
{
	int x = 1;
	void fun() {
		cout << "A" << endl;
	}
}
using namespace A;// ����namespace
int main()
{
	int x = 10;
	cout << A::x<< endl;// ʹ��namespace����
	fun();// ����namespace��ֱ��ʹ��
	system("pause");
	return 0;
}





