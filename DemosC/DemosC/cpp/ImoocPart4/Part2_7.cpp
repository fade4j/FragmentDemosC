/*
*	C++ �����Ա��ʼ��
*/
#include <iostream>
#include "Lines.cpp"
int main()
{
	Lines *l = new Lines(1,2,3,4);
	delete l;
	l = NULL;
	system("pause");
	return 0;
}