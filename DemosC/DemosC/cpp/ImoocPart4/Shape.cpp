#ifndef SHAPE_CPP
#define SHAPE_CPP

#include <iostream>
using namespace std;
class Shape {

public:
	Shape() {}
	virtual ~Shape() {}
	virtual double calcArea() {// ͨ�����virtual�ؼ��֣�ʹ�����ڼ̳к�ʵ�ֶ�̬
		cout << "Shape calcArea()" << endl;
		return 0;
	}
};

#endif // !SHAPE_CPP
