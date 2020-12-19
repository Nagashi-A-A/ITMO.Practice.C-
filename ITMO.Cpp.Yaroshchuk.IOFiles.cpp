
#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <vector>
#include <stdio.h>

using namespace std;
void funcArrSort(int, int arr[]);

int main()
{
    //Задание 1. Запись текста в файл
    /*ofstream fileOut;
    string text;
    fileOut.open("testCpp.txt");
    while (fileOut)
    {
        getline(cin, text);
        if (text == "-1")
            break;
        fileOut << text << endl;
    }
    fileOut.close();

    ifstream fileIn;
    fileIn.open("testCpp.txt");
    while (fileIn)
    {
        getline(fileIn, text);
        cout << text << endl;
    }
    fileIn.close();*/

    //Задание 2. Сохранение данных в текстовый файл

    const int z = 10;
    int secArr[z] = { 1, 25, 6, 32, 43, 5, 96, 23, 99, 55 };
    string arrText;
    
    ofstream fileOutTwo;
    
    fileOutTwo.open("test2.txt");
    fileOutTwo << "Before sorting \n";
        for (int i = 0; i < z; i++)
        {
            fileOutTwo << secArr[i]<< ", ";
        }

    funcArrSort(z, secArr);
    fileOutTwo << "\n After sorting\n";
        for (int i = 0; i < z; i++)
        {
            fileOutTwo << secArr[i] << ", ";
        }
    fileOutTwo.close();


    ifstream fileInTwo;
    fileInTwo.open("test2.txt");
    while (fileInTwo)
    {
        getline(fileInTwo, arrText);
        cout << arrText << endl;
    }
    fileInTwo.close();

    return 0;
}

void funcArrSort(int z, int secArr[])
{
    int min = 0;
    int buff = 0;

    for (int i = 0; i < z; i++)
    {
        min = i;
        for (int j = i + 1; j < z; j++)
        {
            min = (secArr[j] < secArr[min]) ? j : min;
            if (i != min)
            {
                buff = secArr[i];
                secArr[i] = secArr[min];
                secArr[min] = buff;
            }

        }
    }
}