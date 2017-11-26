#include <string>
#include<iostream>
using namespace std;
class Student {
public:
	Student();
	void setName(string _name);
	string getName();
	void setGender(string _gender);
	string getGender();
	void study(int _score);
	void toString();
	Student* getThisPointer();
	Student& getThisQuote();
private:
	string m_strName;
	string m_strGender;
	int m_iScore;
};