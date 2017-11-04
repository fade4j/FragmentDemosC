/*
*	C++ Êý¾Ý·â×°
*/
//#include <iostream>
#include "Student.h"
using namespace std;
int main()
{
	Student stu;
	stu.setName("SpaceCowboy");
	stu.setGender("boy");
	stu.study(3);
	stu.study(7);
	stu.toString();
	cout << "Information output completed!" << endl;
	system("pause");
	return 0;
}