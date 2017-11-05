#include "Coach.h" // Coach类的定义
using namespace SpaceCowboy;// 使用命名空间 SpaceCowboy

Coach::Coach(string _name, int _age, int max):m_strName(_name), m_iAge(_age), m_iMax(max)
{
	// 构造函数，此处使用初始化列表进行初始化
	// 对于常量成员m_iMax在初始化列表内进行初始化
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







