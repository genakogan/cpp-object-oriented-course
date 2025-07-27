#ifndef _CLASSA_H
#define _CLASSA_H
#include <iostream>
using namespace std;
class ClassA {
private:
	int var_x;
	int var_y;
public:
	ClassA() :var_x(1), var_y(1) { };
	ClassA(int num1, int num2) :var_x(num1), var_y(num2) { };
	~ClassA() {};
	void setx(int num) { var_x = num; };
	void sety(int num) { var_y = num; };
	int getx() { return var_x; };
	int gety() { return var_y; };
	void print() { cout << "Var_x: " << var_x << " " << "Var_y: " << var_y << endl; };
};
#endif