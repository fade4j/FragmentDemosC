/*
*	C++ ����������
*	����Ĭ�ϲ���
*	��������
*	����������inline��
*/
#include <iostream>
using namespace std;
void fun(int i, int j, int k = 30);// ��������,ʹ���˺���Ĭ��ֵ
//void fun(int i, int j)���������Ϸ���ʹ����Ĭ��ֵʱ��������޷�ʶ�𣬱���
void fun(int i, long j);// ���غ���
inline void fun(int i, double j);// ��������
int main()
{
	fun(10, 20l);
	fun(10, 20, 40);
	fun(10, 2.34);
	system("pause");
	return 0;
}

void fun(int i, int j, int k) // ����ʵ�֣���ʱ��дĬ��ֵ�� int k = 30�����������ظ�����Ĭ��ֵ
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