#include <string>
#include <iostream>
using namespace std;
/*
*	C++ ���ļ�������
*/
// �������
class Teacher {
public:
	void setName(string _name);
	string getName();
	void setGender(string _gender);
	string getGender();
	void setAge(int _age);
	int getAge();
	void teach();
	void toString();
private:
	string m_strName;// �õ�string������string����std �����ռ���
	string m_strGender;
	int m_iAge;
};