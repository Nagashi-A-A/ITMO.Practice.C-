#include <iostream>
#include <math.h>

using namespace std;

double funcUsePow(double);
double funcFormula(double);
double checkIt(double, double);

//2. Применение итерации реализации функции
int main()
{
    //2. Применение итерации реализации функции
    double x = 99;
    cout << funcUsePow(x) <<endl;
    cout << funcFormula(x) << endl;

    //3. Работа с различными треугольниками
}

double funcUsePow(double x)
{
    double result = pow(x, 1.0 / 3);
    return result;
}

double funcFormula(double x)
{
    double start = 0, result = 0, end = x, precision = 0.000001;
 
    while (true) {
        double mid = (start + end) / 2;
        double test = checkIt(x, mid);
        if(test <= precision)
        {
            return mid;
        }
        
        if ((mid * mid * mid) > x)
        {
            end = mid;
        }

        else
            start = mid;
            
    }
}

double checkIt(double n, double mid)
{
    if (n > (mid * mid * mid))
        return (n - (mid * mid * mid));
    else
        return ((mid * mid * mid) - n);
}

