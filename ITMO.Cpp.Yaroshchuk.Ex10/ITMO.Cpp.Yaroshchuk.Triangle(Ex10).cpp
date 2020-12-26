
//#include "Dot.h"
#include "Triangle.h"

int main()
{
    Dot p1(12, 2);
    Dot p2(22, 19);
    Dot p3(31, 22);
    Dot* pt1 = &p1;
    Dot* pt2 = &p2;
    Dot* pt3 = &p3;
    Triangle t1(pt1, pt2, pt3);
    t1.mathTriangleArea();

    Dot p4(41, 54);
    p3 = p4;
    t1.mathTriangleArea(); //Результат вычисления изменился в связке с изменением одного из объектов Dot
}
