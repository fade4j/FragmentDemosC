/*
*	C++ ����
*/
#include <iostream>
using namespace std;
typedef struct {
	int x;
	int y;
} Coord;

/**
*	������ֵ
*/
void func(int &a, int &b)// ������Ϊ������������
{
	int c = a;
	a = b;
	b = c;
}

void func1(const int &a, const int &b);// ��������

int main()
{
	Coord c;
	Coord &c1 = c;// ����������
	c1.x = 10;
	c1.y = 20;

	cout << c.x<<"," << c.y << endl;
	int a = 10;
	int *p = &a;
	int *&q = p;// ָ�������
	cout << a << "," << &a << endl;
	cout << p << "," << *p << endl;
	*q = 5;
	cout << a << "," << &a << endl;
	int m = 1, n = 2;
	func(m, n);// ������ֵ
	cout << m << "," << n << endl;
	func1(m, n);
	system("pause");
	return 0;
}
void func1(const int &a, const int &b)// ��������
{
	//cout << a << endl;
	//cout << b << endl;
	/*
	* ��ʱa��b���ǳ�����ֵ���ܸı�
	*/
	//a = 3;
	//b = 4;
}