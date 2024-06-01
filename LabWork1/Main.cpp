#include <iostream>
#include "Point.h"  


using namespace std;

int main()
{
	Point a; 
	Point b; 
	Point x, v;

	{
		Point c;  
		Point d;  
	}
	a.Print();  
	b.Print(); 
  

	Point::InfoAboutObjects();   

	return 0;
}