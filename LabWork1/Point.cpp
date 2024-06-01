#include "Point.h"        
 
#include<iostream>
using namespace std;

int Point::s_createdObjects = 0;
int Point::s_liveObjects = 0;

Point::Point()
{
	++s_createdObjects; 
	++s_liveObjects; 
}

Point::Point(const int first, const int last) :
	x(first),
	y(last)
{
	++s_createdObjects;
	++s_liveObjects;
}

Point::~Point()
{
	--s_liveObjects;
}

void Point::InfoAboutObjects()
{
	cout << "Created objects: " << s_createdObjects << endl;
	cout << "Live objects: " << s_liveObjects << endl;
}


void Point::SetX(int a)
{
	x = a;
}

int Point::GetX() const
{
	return x;
}

void Point::SetY(int a)
{
	y = a;
}

int Point::GetY() const
{
	return y;
}

void Point::Print() const
{
	cout << "X = " << x << "\nY = " << y << endl;
}

