

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

double mathTriangleArea(double, double, double);
double mathTriangleArea(double);


int main()
{
    //������� 3. ������ � ���������� ��������������
    system("chcp 1251");
    double side1, side2, side3, resultArea;
    char answer, again = 'y';
    while (again == 'y')
    {
    cout << "����� ������� �������������� �����������? y/n " << endl;
        cin >> answer;
        if (answer == 'y')
        {
        cout << "������� ������ ������� ������������: " << endl;
            cin >> side1;
            resultArea = mathTriangleArea(side1);
        cout << "������� ������������ �����: " << resultArea << endl;
        }
        else if (answer == 'n')
        {
        cout << "������� ������ ������ ������������: " << endl;
            cin >> side1;
            cin >> side2;
            cin >> side3;
            resultArea = mathTriangleArea(side1, side2, side3);
        cout << "������� ������������ �����: " << resultArea << endl;
        }
    cout << "���������? y/n " << endl;
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
