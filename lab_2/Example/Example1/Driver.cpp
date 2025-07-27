#include <iostream>
#include "Table.h"

using namespace std;

int main() {
	Table table1, table2(2, 3, 4, 5);
	cout << endl << table1.getColor();
	table1.PrintTable();
	table2.PrintTable();
	if (table1.IsBlack()) // true\false
		cout << endl << "The Table Color is Black !!!" <<
		endl;
	else
		cout << endl << "The Table Color is not Black !!!"
		<< endl;
	return 0;
}