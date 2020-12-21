#pragma once
#include "Dot.h"
#include <math.h>
#include <iostream>

using namespace std;

class Triangle
{
	public:
		Dot A;
		Dot B;
		Dot C;
		double sideA;
		double sideB;
		double sideC;

		Triangle(Dot &a, Dot &b, Dot &c);
		Triangle(double x1, double y1, double x2, double y2, double x3, double y3);

		void mathTriangleArea();
		double mathPerimeter();
		void showSidesLength();

	/*private:
		double sideA;
		double sideB;
		double sideC;*/
};
