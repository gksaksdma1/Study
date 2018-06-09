#include "stdafx.h"
#include <iostream>

using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	int x = p1.xpos + p2.xpos;
	int y = p1.ypos + p2.ypos;

	Point* ref = new Point;

	ref->xpos = x;
	ref->ypos = y;

	return *ref;
	
}

int main()
{
	Point* p1 = new Point;
	Point* p2 = new Point;

	p1->xpos = 5;
	p1->ypos = 6;

	p2->xpos = 9;
	p2->ypos = 9;

	Point& ref = PntAdder(*p1, *p2);

	cout << ref.xpos << ' ' <<ref.ypos << endl;




}