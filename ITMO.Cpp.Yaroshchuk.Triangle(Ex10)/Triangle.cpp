#include "Triangle.h"

//Variant of constructor using Aggregation, Dots exists separatly from class Tirangle and can be used separate
Triangle::Triangle(Dot &a, Dot &b, Dot &c)
{
	A = a;
	B = b;
	C = c;
	this->sideA = A.distanceTo(B);
	this->sideB = B.distanceTo(C);
	this->sideC = C.distanceTo(A);
}
//Variant of constructor using Composition, Dots exists only like class field
Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	Dot A(x1, y1);
	Dot B(x2, y2);
	Dot C(x3, y3);

	this->sideA = A.distanceTo(B);
	this->sideB = B.distanceTo(C);
	this->sideC = C.distanceTo(A);
}

//double setSide(Dot *p1, Dot *p2)
//{
//	double side = p1->distanceTo(p2);
//		return side;
//}

void Triangle::mathTriangleArea()
{
	double perimeter = mathPerimeter();
	double area = sqrt(perimeter * (perimeter - sideA) * (perimeter - sideB) * (perimeter - sideC));
	cout << "Area of this triangle is: " << area<< endl;
}
double Triangle::mathPerimeter()
{
	double perimeter = (sideA + sideB + sideC) / 2;
	return perimeter;
}
void Triangle::showSidesLength()
{
	cout << "Side A: " << sideA << "\n";
	cout << "Side B: " << sideB << "\n";
	cout << "Side C: " << sideC << endl;
}

//Triangle::~Triangle()
//{
//	delete A;
//	delete B;
//	delete C;
//}