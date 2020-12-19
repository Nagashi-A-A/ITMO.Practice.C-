// ITMO.Cpp.Yaroshchuk.Arrays2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <array>
using namespace std;

int* max_vect(int, int* arr1, int* arr2);


int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 2};
    int b[] = {7, 6, 5, 4, 3, 2, 1, 3};
    const int kc = sizeof(a) / sizeof(a[0]); //���������� ��������� �������
    int* c; //��������� �� �������������� ������
    c = max_vect(kc, a, b); //����� ������� ��� �������� �������
    for (int i = 0; i < kc; i++) //����� ����������.
        cout << c[i] << " ";
    cout << endl;
    delete[]c; //������� ������.
}

int* max_vect(int len, int* arr1, int* arr2)
{
    int* newArr = new int[len];
    for (int i = 0; i < len; i++)
    {
        if (arr1[i] >= arr2[i])
        {
            newArr[i] = arr1[i];
        }
        else
        {
            newArr[i] = arr2[i];
        }
    }
    return newArr;
}

