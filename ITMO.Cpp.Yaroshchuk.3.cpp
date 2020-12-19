#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    system("chcp 1251");
    //������� 1. ����������� ����������� ����
    int year;
    cout << "����� ��� ��� ����������?\n";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << year <<" ���������� ���.\n";
    }
    else if (year % 100 == 0 && year % 400 == 0)
    {
        cout << year << " ���������� ���.\n";
    }
    else
    {
        cout << year << " �� ���������� ���.\n";
    }

    //������� 2. ����������� ����������� �� ���� �����
    int a, b, c, biggest;
    cout << "������� 3 �����: ";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b && a > c)
    {
        biggest = a;
    }
    else if (b > a && b > c)
    {
        biggest = b;
    }
    else
    {
        biggest = c;
    }
    cout << "���������� �� ��������� �����: " << biggest << ".\n";

    //������� 3. ������ �����
    int mySum, count, remainder, count10 = 0, count5 = 0, count2 = 0, count1 = 0;
    cout << "������� ����� ��� �������: ";
    cin >> mySum;
    remainder = mySum % 10;
    count = mySum / 10;
    count10 = mySum / 10;
    if (mySum < 10)
    {
        remainder = mySum;
    }

    while (remainder >= 1)
    {
        if (remainder >= 5) 
        {
            remainder -= 5;
            count += 1;
            count5 += 1;
        }

        else if (remainder >= 2)
        {
            remainder -= 2;
            count += 1;
            count2 += 1;
        }
        else if (remainder >= 1)
        {
            remainder -= 1;
            count += 1;
            count1 += 1;
        }
    }

   cout << "�����: "<< mySum <<" ��������� ��: "<< count << " �����. ������: "<< count10 << " ����� �� 10 ������, " << count5 << " ����� �� 5 ������, "<< count2 <<" ����� �� 2 �����, " << count1 << " ����� �� 1 �����"<<endl;


    //������� 4. �������� �� ���������� ������

   int xCenter, yCenter, xShot, yShot, countPoints = 0, shotCount = 0, shooting;
   srand((unsigned)time(NULL));

   while (countPoints < 50)
   {
       xCenter = rand() % 10 + 1;
       yCenter = rand() % 10 + 1;
       cout << "��� �������, ������� ����������: ";
       cin >> xShot; 
       cin >> yShot;
       shooting = (unsigned)((xCenter * xCenter + yCenter * yCenter) - (xShot * xShot + yShot * yShot));
       if (shooting < (unsigned)10)
       {
           shotCount += 1;
           countPoints += 25;
           cout << "� �������! �������� �������!\n";

       }

       else if (shooting < (unsigned)30)
       {
           shotCount += 1;
           countPoints += 10;
           cout << "������� �������!\n";
       }

       else if (shooting < (unsigned)50)
       {
           shotCount += 1;
           countPoints += 5;
           cout << "�����!\n";
       }

       else
       {
           shotCount += 1;
           cout << "����!\n";
       }
   }


   if (shotCount < 5)
   {
       cout << shotCount << " ��������� ��� ������. �����������, �� ��������� �������!";
   }
   else if (shotCount < 20)
   {
       cout << shotCount << " ��������� ��� ������. �� �� ������ �������!";
   }

   else 
   {
       cout << shotCount << " ��������� ��� ������. ���� ��� ������������� � �������������, ������!";
   }
    return 0;
}
