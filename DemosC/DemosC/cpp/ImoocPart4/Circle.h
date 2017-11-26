#pragma once
#include "Shape.cpp"
class Circle : public Shape {

public:
	Circle(double radius);

	virtual double calcArea();

private:
	double m_dRadius;
};
