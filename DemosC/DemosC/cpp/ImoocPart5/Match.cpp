#include "Match.h"
void Match::printTime(Time &t)
{
	cout << t.m_iHour << ":" << t.m_iMin << ":" << t.m_iSecond << endl;
	t.printTime();
}

