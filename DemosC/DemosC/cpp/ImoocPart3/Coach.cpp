#include "Coach.h" // Coach��Ķ���
using namespace SpaceCowboy;// ʹ�������ռ� SpaceCowboy

Coach::Coach(string _name, int _age, int max):m_strName(_name), m_iAge(_age), m_iMax(max)
{
	// ���캯�����˴�ʹ�ó�ʼ���б���г�ʼ��
	// ���ڳ�����Աm_iMax�ڳ�ʼ���б��ڽ��г�ʼ��
}

string Coach::getName() {
	return m_strName;
};
int Coach::getAge() {
	return m_iAge;
};
int Coach::getMax() {
	return m_iMax;
};

void Coach::toString() {
	cout << getName() << " , " << getAge() << " , " << getMax() << endl;
	
}







