/*
*	C++ Á·Ï°
*/
#include <iostream>
using namespace std;

int getMax(int a, int b);
int getMax(int *arr, int length);

int main()
{
	int iArray[5] = {5,1,3,2,4};
	cout << getMax(iArray[1], iArray[4]) << endl;
	cout << getMax(iArray, 5) << endl;
	system("pause");
	return 0;
}

int getMax(int a, int b)
{
	return a > b ? a : b;
}

int getMax(int *arr, int length) 
{
	int max = arr[0];
	for (int i = 1; i < length; i++) 
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;
}