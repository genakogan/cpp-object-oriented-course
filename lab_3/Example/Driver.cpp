#define _CRT_SECURE_NO_WARNINGS
#include "ClassB.h"
#define N 2
ClassB * input();
int main() {
	ClassA obj_a1(2, 3), obj_a2;
	obj_a1.print();
	obj_a2.print();
	ClassB obj_b1((char *)"aaaaa", 1, 2, 3, 4);
	obj_b1.print();
	ClassB ** listClassB = new ClassB*[N];
	for (int i = 0; i < N; i++)
		listClassB[i] = input();
	for (int i = 0; i < N; i++)
		listClassB[i]->print();
	listClassB[0]->setObjClassA2(22, 11);
	listClassB[0]->print();
	for (int i = 0; i < N; i++)
		delete listClassB[i];
	delete listClassB;
	return 0;
}
ClassB * input() {
	int num1, num2, num3, num4;
	cout << "Enter four numbers: ";
	cin >> num1 >> num2 >> num3 >> num4;
	cout << "Enter string: ";
	char * strn = new char[20];
	cin >> strn;
	ClassB * elemClassB = new ClassB(strn, num1, num2, num3, num4);
	return elemClassB;
}