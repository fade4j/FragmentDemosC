/*
*	C++ ���ļ����ⶨ��
*/
#include <iostream>
#include "Teacher.h"// �Զ�����ʹ��˫��������"Teacher.h"
using namespace std;
int main()
{
	Teacher *t = new Teacher();// ����ʵ����
	if (t == NULL) {
		cout << "Allocate memory failed!!!!!" << endl;
		system("pause");
		return 0;
	}
	t->setName("����");
	t->setGender("��");
	t->setAge(18);
	t->teach();
	t->toString();
	delete t;
	t = NULL;
	system("pause");
	return 0;
}