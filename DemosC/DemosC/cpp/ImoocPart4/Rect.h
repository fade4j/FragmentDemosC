#pragma once
#include "Shape.cpp"
class Rect : public Shape {
public:
	Rect(double width, double height);
	virtual double calcArea();

private:
	double m_dWidth;
	double m_dHeight;

};