#pragma once
#ifndef TIMEE_H
#define TIMEE_H
#include <iostream>
using namespace std;
//#include "Match.h"
class Match;
class Time {
	//friend void printTime(Time &t);// 友元全局函数
	//friend void Match::printTime(Time &t);;// 友元成员函数
	friend Match;
public:
	Time(int hour, int min, int second);


private:
	void printTime();
	int m_iHour;
	int m_iMin;
	int m_iSecond;
};



#endif // !TIME_H
