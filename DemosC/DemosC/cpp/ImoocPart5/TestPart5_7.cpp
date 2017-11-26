#include <iostream>
#include<string>
#include <vector>
#include <map>
#include "Rect.h"
using namespace std;

int main()
{
	/*Rect<double> r1(3.0, 9.1);
	cout << r1.calcArea() << endl;
	cout << r1.calcPerimeter() << endl;*/
	vector<int> v;
	v.push_back(3);
	v.push_back(6);
	v.push_back(8);
	v.push_back(4);

	vector<int>::iterator iter = v.begin();
	cout << "开始遍历vector：" << endl;
	while (iter != v.end())
	{
		cout << *iter << endl;
		iter++;
	}

	map<string, string> m;
	pair<string, string> p1("S", "Shanghai");
	pair<string, string> p2("B", "Beijing");
	pair<string, string> p3("G", "Guangzhou");

	m.insert(p1);
	m.insert(p2);
	m.insert(p3);
	cout << "开始遍历map1：" << endl;
	cout << m["S"] << endl;
	cout << m["B"] << endl;
	cout << m["G"] << endl;
	cout << "开始遍历map2：" << endl;
	map<string, string>::iterator iterm = m.begin();
	for (; iterm != m.end(); iterm++)
	{
		cout << iterm->first << endl;
		cout << iterm->second << endl;
		cout << endl;

	}
	system("pause");
	return 0;
}