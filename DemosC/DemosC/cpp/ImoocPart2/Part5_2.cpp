/*
*	C++ �ڴ����
*/
#include <iostream>
using namespace std;
int main()
{
	int *i = new int(10);// ���뵥���ڴ�
	int *ii = new int;
	*ii = 20;
	cout << *i << endl;
	cout << *ii << endl;
	delete i;// �ͷ��ڴ�
	i = NULL;
	delete ii;
	ii = NULL;
	int *iArr = new int[20];// ����һ���ڴ�
	if (iArr != NULL)
	{
		cout << iArr << endl;
		delete[]iArr;// ����һ���ڴ�
	}
	iArr = NULL;
	system("pause");
	return 0;
}