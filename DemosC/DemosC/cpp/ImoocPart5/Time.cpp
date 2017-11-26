#include "Time.h"
Time::Time(int h, int m, int s)
{
	m_iHour = h;
	m_iMin = m;
	m_iSecond = s;

}

void Time::printTime() 
{
	cout << m_iHour << "Ê±" << m_iMin << "·Ö" << m_iSecond <<"Ãë" <<endl;
}