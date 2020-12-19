

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

double mathTriangleArea(double, double, double);
double mathTriangleArea(double);


int main()
{
    //Задание 3. Работа с различными треугольниками
    system("chcp 1251");
    double side1, side2, side3, resultArea;
    char answer, again = 'y';
    while (again == 'y')
    {
    cout << "Будем считать равносторонний треугольник? y/n " << endl;
        cin >> answer;
        if (answer == 'y')
        {
        cout << "Введите длинну стороны треугольника: " << endl;
            cin >> side1;
            resultArea = mathTriangleArea(side1);
        cout << "Площадь треугольника равна: " << resultArea << endl;
        }
        else if (answer == 'n')
        {
        cout << "Введите длинну сторон треугольника: " << endl;
            cin >> side1;
            cin >> side2;
            cin >> side3;
            resultArea = mathTriangleArea(side1, side2, side3);
        cout << "Площадь треугольника равна: " << resultArea << endl;
        }
    cout << "Продолжим? y/n " << endl;
        cin >> again;
    }
}


double mathTriangleArea(double side1, double side2, double side3)
{
    double perimeter = (side1 + side2 + side3) / 2;
    double retArea = sqrt(perimeter * (perimeter - side1) * (perimeter - side2) * (perimeter - side3));
    return retArea;
}

double mathTriangleArea(double side1)
{
    double perimeter = (side1 * 3) / 2;
    double retArea = sqrt(perimeter * (pow((perimeter - side1), 3)));
    return retArea;
}
