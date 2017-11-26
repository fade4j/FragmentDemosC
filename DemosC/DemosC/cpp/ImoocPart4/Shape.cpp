#ifndef SHAPE_CPP
#define SHAPE_CPP

#include <iostream>
using namespace std;
class Shape {

public:
	Shape() {}
	virtual ~Shape() {}
	virtual double calcArea() {// 通过添加virtual关键字，使子类在继承后实现多态
		cout << "Shape calcArea()" << endl;
		return 0;
	}
};

#endif // !SHAPE_CPP
