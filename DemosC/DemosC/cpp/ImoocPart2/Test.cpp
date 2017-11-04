/*
*	C++ namespace
*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *cArr = new char[100];
	//strcpy
	char *str = "Hello C++";
	//char *res = strcpy(cArr, str);
	strcpy_s(cArr, 100, str);
	for (int i = 0; i < 100; i ++) {
		cout << cArr[i];
	}
	cout << endl;
	delete []cArr;
	cArr = NULL;
	system("pause");
	return 0;
}