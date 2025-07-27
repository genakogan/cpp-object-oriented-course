#include "Table.h"

Table::Table(){
	cout << endl << "Enter Table Width: ";
	cin >> width;
	cout << "Enter Table Length: ";
	cin >> length;
	cout << "Enter Table Hight: ";
	cin >> hight;
	cout << "Enter Table Color: ";
	cin >> color;
}
void Table::PrintTable() {
	cout << endl << "The Table Width: " << width << endl;
	cout << "The Table Length: " << length << endl;
	cout << "Enter Table Hight: " << hight << endl;
	cout << "Enter Table Color: " << color << endl;
}
bool Table::IsBlack() {
	return color == 0;
}