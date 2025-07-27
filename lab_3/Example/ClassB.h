#ifndef _CLASSB_H
#define _CLASSB_H
#include <cstring>
#include "ClassA.h"
class ClassB {
public:
	ClassB() {};
	ClassB(char * str, int num1, int num2, int num3, int num4) : objClassA1(num1,
		num2), objClassA2(num3, num4) {
		setB(str);
	};
	~ClassB() {};
	void setB(char * str) { strcpy(name, str); };
	void print() {
		cout << endl << "ClassB object:" << endl;
		cout << "Name: " << name << endl;
		objClassA1.print();
		objClassA2.print();
	};
	void setObjClassA2(int x, int y) {
		objClassA2.setx(x);
		objClassA2.sety(y);
	}
private:
	ClassA objClassA1;
	ClassA objClassA2;
	char name[20];
};
#endif