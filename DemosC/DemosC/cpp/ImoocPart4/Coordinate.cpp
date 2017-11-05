#include <iostream>
using namespace std;

class Coordinate {
public:
	int m_iX;
	int m_iY;

	Coordinate(int x, int y){
		m_iX = x;
		m_iY = y;
		cout << "Coordinate()1 "<< x<<","<<y<< endl;
	}

	Coordinate(const Coordinate &c) {
		cout << "Coordinate()2 " << c.m_iX << "," << c.m_iY << endl;
	}

	~Coordinate() {
		cout << "~Coordinate()" << endl;
	}
};