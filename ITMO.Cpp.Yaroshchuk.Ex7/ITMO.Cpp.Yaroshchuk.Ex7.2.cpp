// ITMO.Cpp.Yaroshchuk.Ex7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

struct thisRoots
{
    double root1;
    double root2;
};

thisRoots returnRoots(double, double, double);

int main()
{
    thisRoots r = returnRoots(1, -2, 1);
    std::cout << "First root in struct: "<< r.root1<< ", Second root in struct: " << r.root1<<std::endl;
}

thisRoots returnRoots(double a, double b, double c)
{
    thisRoots r;
    double d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));

    if (d > 0) 
    {
        std::cout<<"Roots are real and different \n";
        r.root1 = (double)(-b + sqrt_val) / (2 * a);
        r.root2 = (double)(-b - sqrt_val) / (2 * a);
    }

    else if (d == 0) 
    {
        std::cout << "Roots are real and same \n";
        r.root1 = -(double)b / (2 * a);
        r.root2 = r.root1;
    }

    else
    {
        std::cout << "Roots are complex \n";
        r.root1 = 1;
        r.root2 = 1;
    }
    return r;
}
