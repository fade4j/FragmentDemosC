#pragma once
#include <string>
#include<iostream>
using namespace std;
namespace SpaceCowboy {// 定义命名空间 SpaceCowboy
	class Coach {
	public:
		Coach(string _name, int _age, int _max = 10);
		string getName();
		int getAge();
		int getMax();
		void toString();
	private:
		string m_strName;
		int m_iAge;
		const int m_iMax;
	};
}
