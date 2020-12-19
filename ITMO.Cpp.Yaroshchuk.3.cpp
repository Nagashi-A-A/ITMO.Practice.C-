#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    system("chcp 1251");
    //Задание 1. Определение високосного года
    int year;
    cout << "Какой год Вас интересует?\n";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << year <<" високосный год.\n";
    }
    else if (year % 100 == 0 && year % 400 == 0)
    {
        cout << year << " високосный год.\n";
    }
    else
    {
        cout << year << " НЕ високосный год.\n";
    }

    //Задание 2. Определение наибольшего из трех чисел
    int a, b, c, biggest;
    cout << "Введите 3 числа: ";
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
    cout << "Наибольшее из введенных чисел: " << biggest << ".\n";

    //Задание 3. Размен монет
    int mySum, count, remainder, count10 = 0, count5 = 0, count2 = 0, count1 = 0;
    cout << "Внесите сумму для размена: ";
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

   cout << "Сумма: "<< mySum <<" разменяна на: "<< count << " монет. Выдано: "<< count10 << " монет по 10 рублей, " << count5 << " монет по 5 рублей, "<< count2 <<" монет по 2 рубля, " << count1 << " монет по 1 рублю"<<endl;


    //Задание 4. Стрельба по движущейся мишени

   int xCenter, yCenter, xShot, yShot, countPoints = 0, shotCount = 0, shooting;
   srand((unsigned)time(NULL));

   while (countPoints < 50)
   {
       xCenter = rand() % 10 + 1;
       yCenter = rand() % 10 + 1;
       cout << "Ваш выстрел, введите координаты: ";
       cin >> xShot; 
       cin >> yShot;
       shooting = (unsigned)((xCenter * xCenter + yCenter * yCenter) - (xShot * xShot + yShot * yShot));
       if (shooting < (unsigned)10)
       {
           shotCount += 1;
           countPoints += 25;
           cout << "В десятку! Отличный выстрел!\n";

       }

       else if (shooting < (unsigned)30)
       {
           shotCount += 1;
           countPoints += 10;
           cout << "Хороший выстрел!\n";
       }

       else if (shooting < (unsigned)50)
       {
           shotCount += 1;
           countPoints += 5;
           cout << "Попал!\n";
       }

       else
       {
           shotCount += 1;
           cout << "Мимо!\n";
       }
   }


   if (shotCount < 5)
   {
       cout << shotCount << " выстрелов для победы. Поздравляем, Вы настоящий снайпер!";
   }
   else if (shotCount < 20)
   {
       cout << shotCount << " выстрелов для победы. Вы не плохой стрелок!";
   }

   else 
   {
       cout << shotCount << " выстрелов для победы. Тебе еще тренироваться и тренироваться, салага!";
   }
    return 0;
}
