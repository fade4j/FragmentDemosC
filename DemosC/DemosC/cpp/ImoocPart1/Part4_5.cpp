#include <iostream>// ����Ҫ������Ӧͷ�ļ�����Ҫ�������Ӧ�������ռ�
using namespace std;
int main()
{
	cout << "Please enter a int number��" << endl;
	int x;
	cin >> x;
	cout << oct << x << endl;// ���Ϊ8����
	cout << dec << x << endl;// ���Ϊ10����
	cout << hex << x << endl;// ���Ϊ16����

	cout << "Please enter a boolean value(0 , 1) : " << endl;
	bool b;
	cin >> b;
	cout << boolalpha << b << endl;// boolֵת��
	system("pause");// stdlib.h
	return 0;
}