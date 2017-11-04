#include <iostream>// 不仅要引用相应头文件，还要引入其对应的命名空间
using namespace std;
int main()
{
	cout << "Please enter a int number：" << endl;
	int x;
	cin >> x;
	cout << oct << x << endl;// 输出为8进制
	cout << dec << x << endl;// 输出为10进制
	cout << hex << x << endl;// 输出为16进制

	cout << "Please enter a boolean value(0 , 1) : " << endl;
	bool b;
	cin >> b;
	cout << boolalpha << b << endl;// bool值转换
	system("pause");// stdlib.h
	return 0;
}