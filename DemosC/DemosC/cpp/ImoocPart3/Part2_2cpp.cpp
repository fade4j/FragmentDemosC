/*
*	C++ 类的定义和实例化
*/
#include <iostream>
using namespace std;

class Coordinate {
public:
	int x;
	int y;

	void printCoordinate() {
		cout << x << "," << y << endl;
	}
};



int main()
{
	Coordinate coor1;// 从栈中实例化
	coor1.x = 10;
	coor1.y = 20;
	coor1.printCoordinate();

	Coordinate *coor2 = new Coordinate();// 从堆中实例化，申请堆内存
	if (coor2 == NULL) {// 是否申请到内存进行判断
		return 0;
	}

	coor2->x = 30;// 使用指针访问成员
	coor2->y = 40;
	coor2->printCoordinate();

	delete coor2;
	coor2 = NULL;
	system("pause");
	return 0;
}