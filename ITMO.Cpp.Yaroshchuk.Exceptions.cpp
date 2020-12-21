#include <iostream>
#include <string>
using namespace std;

class Triangle {
public:
    int sideA;
    int sideB;
    int sideC;

    Triangle(int side1, int side2, int side3)
    {
        setSides(side1, side2, side3);
    }

    void setSides(int side1, int side2, int side3)
    {
                if (side1 + side2 < side3 || side1 + side3 < side2 || side3 + side2 < side1)
                {
                    throw Triangle::ExceptItError();
                }
                else 
                {
                    sideA = side1;
                    sideB = side2;
                    sideC = side3;
                }
    }

    int mathTriangleArea(int sideA, int sideB, int sideC)
    {
        int perimeter = (sideA + sideB + sideC) / 2;
        int retArea = sqrt(perimeter * (perimeter - sideA) * (perimeter - sideB) * (perimeter - sideC));
        return retArea;
    }

    class ExceptItError
    {
        public:
            ExceptItError() : message("Side length is out of possible range.") { }
            void printMessage() const { cout << message << endl; }
        private:
            string message;
    };
};


int main()
{
    try 
    {
        Triangle t1{ 5, 3, 67 };
        cout << t1.sideA << endl;
    }
    
    catch (Triangle::ExceptItError er)
    {
        er.printMessage();
    }
    return 0;
}