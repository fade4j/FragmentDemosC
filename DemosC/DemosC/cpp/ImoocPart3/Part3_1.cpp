/*
*	C++ string 的使用
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Please enter your name: " << endl;
	string name;
	cout << "name " << name << endl;
	getline(cin, name);//获取控制台的任意输入
	if (name.empty()) {
		cout << "You have entered an empty name!" << endl;
		system("pause");
		return 0;
	}

	if ("spacecowboy" == name)
	{
		cout << "You are a administrator!" << endl;
	}

	cout << "hello " << name << endl;
	cout << "The length of your name is: " << name.size() << endl;
	cout << "The first letter in your name is: " << name[0] << endl;

	system("pause");
	return 0;
}