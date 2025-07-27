#include <iostream>
using namespace std;

class Table
{
public:
	Table();
	Table(int w, int l, int h, int c) {
		width = w;
		length = l;
		hight = h;
		color = c;
	};
	void PrintTable();
	bool IsBlack();
	int getColor() { return color; };
	~Table(){
		cout << "Delete Object Table !!!" << endl;
	};
private:
	int width;
	int length;
	int hight;
	int color;
};
