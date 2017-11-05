#include <string>
#include <iostream>
using namespace std;
/*
*	C++ 分文件定义类
*/
// 类的声明
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
	string m_strName;// 用到string，引入string，在std 命名空间下
	string m_strGender;
	int m_iAge;
};