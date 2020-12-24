
//#include "Dot.h"
#include "Triangle.h"

int main()
{
    Dot p1(12, 2);
    Dot p2(22, 19);
    Dot p3(31, 22);
    Triangle t1(p1, p2, p3);
    Triangle t2(2, 3, 22, 23, 44, 51);
    t1.showSidesLength();
    t2.mathTriangleArea();
}
