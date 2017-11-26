#include "Student.h"
Student::Student() {
	m_iScore = 0;
}

void Student::setName(string _name) {
	m_strName = _name;
}
string Student::getName() {
	return m_strName;
}
void Student::setGender(string _gender) {
	m_strGender = _gender;
}
string Student::getGender() {
	return m_strGender;
}
void Student::study(int _score) {
	m_iScore += _score;
}

void Student::toString() {
	cout << m_strName << " , " << m_strGender << " : " << m_iScore << endl;
}

Student* Student::getThisPointer() {
	cout << this << endl;
	return this;
}

Student& Student::getThisQuote() {
	//cout << *this << endl;
	return *this;
}