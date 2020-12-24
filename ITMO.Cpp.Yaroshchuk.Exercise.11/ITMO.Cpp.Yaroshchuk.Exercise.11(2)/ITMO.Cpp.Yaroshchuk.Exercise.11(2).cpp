#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Point
{
public:
	double x = 0;
	double y = 0;
	double dist;

	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		dist = sqrt(pow(x, 2) + pow(y, 2));
	}

	double dist1(const Point& p);

	friend ostream& operator<<(ostream& os, const Point& p);

	friend bool operator<(const Point& p1, const Point& p2);
};

ostream& operator<<(ostream& os, const Point& p)
{
	os << "Coord X: " << p.x << ", Coord Y: " << p.y << ". Distance to Start is: " << p.dist << endl;
	return os;
}

bool operator<(const Point& p1, const Point& p2)
{
	return p1.dist < p2.dist;
}


double dist1(const Point& p)
{
	return sqrt(pow(p.x, 2) + pow(p.y, 2));
}

int main()
{
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для // класса Point
	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для // класса Point
	return 0;
}

