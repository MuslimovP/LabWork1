#pragma once

class Point
{
private:
	int x = 10; //  ïîëÿ êëàññà - ĞÅÀËÈÇÀÖÈß 
	int y = 12; 
public://  ÈÍÒÅĞÔÅÉÑ êëàññà

	static int s_createdObjects;
	static int s_liveObjects;

	Point();
	Point(const int first, const int last);

	~Point();

	static void InfoAboutObjects();

	int GetX() const;
	int GetY() const;
	void SetX(int a);
	void SetY(int b);
	void Print() const;

};