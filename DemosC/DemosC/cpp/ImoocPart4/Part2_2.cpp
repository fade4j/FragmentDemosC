/*
*	C++ ��������
*/
#include <iostream>
#include "Coordinate.cpp"
using namespace std;
int main()
{
	Coordinate coor[3];// ջ��ʵ������������
	Coordinate *p = new Coordinate[3];// ����ʵ������������
	// ����ʵ�����󣬾ʹ���Ԫ�أ�����Ԫ�ز�Ϊ�գ���Java��ͬ
	coor[0].m_iX = 10;
	coor[0].m_iY = 20;
	// ָ��Ǳ��������Ԫ�ط�ʽһ
	//p[0].m_iX = 11;
	//p[0].m_iY = 11;
	//p[1].m_iX = 22;
	//p[1].m_iY = 22;
	//p[2].m_iX = 33;
	//p[2].m_iY = 33;
	// ------------------------
	// ָ���������Ԫ�ط�ʽ��
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
	//p -= 2;// �ͷ�ָ��ռ���ڴ�ǰ�Ƚ�ָ���λ,���������쳣
	// ------------------------
	// �������ַ�ʽ���ʹ��
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