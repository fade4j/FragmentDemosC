/*
*	C++ ��Ķ����ʵ����
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
	Coordinate coor1;// ��ջ��ʵ����
	coor1.x = 10;
	coor1.y = 20;
	coor1.printCoordinate();

	Coordinate *coor2 = new Coordinate();// �Ӷ���ʵ������������ڴ�
	if (coor2 == NULL) {// �Ƿ����뵽�ڴ�����ж�
		return 0;
	}

	coor2->x = 30;// ʹ��ָ����ʳ�Ա
	coor2->y = 40;
	coor2->printCoordinate();

	delete coor2;
	coor2 = NULL;
	system("pause");
	return 0;
}