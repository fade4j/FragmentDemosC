/*
*	ʹ��һ������������������е����ֵ����Сֵ
*/
#include <iostream>
using namespace std;

int fun(int* arr, int length, bool getMax) {
	int max = arr[0] , min = arr[0];
	for (int i = 1; i < length; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	return getMax ? max : min;
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	bool getMax = true;
	cin >> getMax;
	cout<<(getMax ? "The max value: ":"The min value: ")<<fun(arr, 5, getMax)<<endl;
	system("pause");
	return 0;
}