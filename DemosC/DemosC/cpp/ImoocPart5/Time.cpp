#include "Time.h"
Time::Time(int h, int m, int s)
{
	m_iHour = h;
	m_iMin = m;
	m_iSecond = s;

}

void Time::printTime() 
{
	cout << m_iHour << "ʱ" << m_iMin << "��" << m_iSecond <<"��" <<endl;
}