/*
*	C++ Êý¾Ý·â×°
*/
//#include <iostream>
#include "Student.h"
using namespace std;
int main()
{
	/*Student stu;
	stu.setName("SpaceCowboy");
	stu.setGender("boy");
	stu.study(3);
	stu.study(7);
	stu.toString();
	cout << "Information output completed!" << endl;*/

	Student *s = new Student();
	s->getThisPointer();
	cout << s << endl;

	Student s1;
	cout << &s1 << endl;
	cout << s1.getThisQuote().getName() << endl;
	Student *s2 = &s1;
	cout << s2 << endl;
	//Student &s3 = &s2;
	delete s;
	s = NULL;
	system("pause");
	return 0;
}