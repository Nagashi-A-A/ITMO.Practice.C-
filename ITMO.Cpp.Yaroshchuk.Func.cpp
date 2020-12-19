#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int mathSide(int, int, int, int);

int mathTriangleArea(int, int, int);

int mathPentArea();

int main()
{
    //Задание 1. Расчет площади сложной фигуры
    int answer1;
    answer1 = mathPentArea();
    cout << "The area of pentagram is: " << answer1 <<endl;
}

int mathSide(int x1, int x2, int y1, int y2)
{
    int side = sqrt((x1 - x2) * 2 + (y1 - y2) * 2);
    return side;
}

int mathTriangleArea(int side1, int side2, int side3)
{
    int perimeter = (side1 + side2 + side3) / 2;
    int retArea = sqrt(perimeter * (perimeter - side1) * (perimeter - side2) * (perimeter - side3));
    return retArea;
}

int mathPentArea()
{
    int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    cin >> x4;
    cin >> y4;
    cin >> x5;
    cin >> y5;

    int sideOne = mathSide(x1, x2, y1, y2);
    int sideTwo = mathSide(x2, x3, y2, y3);
    int sideThree = mathSide(x3, x4, y3, y4);
    int sideFour = mathSide(x4, x5, y4, y5);
    int sideFive = mathSide(x1, x5, y1, y5);
    int sideSix = mathSide(x1, x3, y1, y3);
    int sideSeven = mathSide(x3, x5, y3, y5);

    int triAreaOne = mathTriangleArea(sideOne, sideTwo, sideSix);
    int triAreaTwo = mathTriangleArea(sideSix, sideSeven, sideFive);
    int triAreaThree = mathTriangleArea(sideThree, sideFour, sideSeven);
    int pentArea = triAreaOne + triAreaTwo + triAreaThree;
    return pentArea;
}