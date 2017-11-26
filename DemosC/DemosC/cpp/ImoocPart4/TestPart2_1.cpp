#include <iostream>
#include "Shape.cpp"
#include "Circle.h"
#include "Rect.h"
using namespace std;

int main()
{
	Shape *shape1 = new Rect(3, 5);
	Shape *shape2 = new Circle(3);
	cout << shape1->calcArea() << endl;
	cout << shape2->calcArea() << endl;
	cout << sizeof(shape2) << endl;

	delete shape1;
	delete shape2;

	shape1 = NULL;
	shape2 = NULL;

	system("pause");
	return 0;
}














