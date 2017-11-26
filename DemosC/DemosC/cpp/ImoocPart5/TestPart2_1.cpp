#include <iostream>
//#include "Circle.h"
//#include "Coordinate.h"
#include "Time.h"
#include "Match.h"
using namespace std;

void printTime(Time &t);

int main() {
	Time t(21,31,56);
	Match m;
	m.printTime(t);
	//Circle circle;
	//circle.printXY(coor);
	system("pause");
	return 0;
}

void printTime(Time &t) {
	//cout << t.m_iHour << ":" << t.m_iMin << ":" << t.m_iSecond<< endl;
}