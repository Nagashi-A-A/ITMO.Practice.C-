#pragma once
#include "Dot.h"
#include <math.h>
#include <iostream>

using namespace std;

class Triangle
{
public:
		Triangle(Dot &a, Dot &b, Dot &c):A(a), B(b), C(c)
		{		}
		//Для композиции с копированием значений.
		/*Triangle(Dot& a, Dot& b, Dot &c)
		{
			A = new Dot(a);
			B = new Dot(b);
			C = new Dot(c);
		}*/

		/*double mathPerimeter()
		{
			double perimeter = (A.distanceTo(B) + B.distanceTo(C) + C.distanceTo(A)) / 2;
			return perimeter;
		}*/

		/*void mathTriangleArea()
		{
			double perimeter = mathPerimeter();
			double area = sqrt(perimeter * (perimeter - A.distanceTo(B)) * (perimeter - B.distanceTo(C)) * (perimeter - C.distanceTo(A)));
			cout << "Area of this triangle is: " << area << endl;
		}*/
	
		/*Triangle createT(Dot d1, Dot d2, Dot d3) //Композиция.
		{
			this->A = d1;
			this->B = d2;
			this->C = d3;
		}*/
	
		//Для агрегации с использованием указателей
	
	Triangle(Dot *a, Dot *b, Dot *c):A(a), B(b), C(c)
		{}

		double mathPerimeter()
		{
			double perimeter = (A->distanceTo(*B) + B->distanceTo(*C) + C->distanceTo(*A)) / 2;
			return perimeter;
		}

		void mathTriangleArea()
		{
			double perimeter = mathPerimeter();
			double area = sqrt(perimeter * (perimeter - A->distanceTo(*B)) * (perimeter - B->distanceTo(*C)) * (perimeter - C->distanceTo(*A)));
			cout << "Area of this triangle is: " << area << endl;
		}

	private:
		Dot* A;
		Dot* B;
		Dot* C;
	
		/*Dot& A;
		Dot& B;
		Dot& C;*/

		Dot A;
		Dot B;
		Dot C;
};

