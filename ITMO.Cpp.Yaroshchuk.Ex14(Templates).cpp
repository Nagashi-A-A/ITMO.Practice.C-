// ITMO.Cpp.Yaroshchuk.Ex14(Templates).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<array>
using namespace std;

template<class T>
T sumArrayElements(T arr[], int size)
{
    T avrg = 0;

    for (int i = 0; i < size; i++)
    {
        avrg += arr[i];
    }

    avrg = avrg / size;
    //std::cout << avrg << std::endl;
    return avrg;
        
}

int main()
{
    int arr1[] = { 9,3,17,6,5,4,31,2,12 };
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    double arr2[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    long arr3[] = { 3, 1, 4, 2, 1, 3 };
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    char arr4[] = { 4, 12, 2, 41, 6 };
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int avg1 = sumArrayElements(arr1, size1);
    double avg2 = sumArrayElements(arr2, size2);
    int avg3 = sumArrayElements(arr3, size3);
    int avg4 = sumArrayElements(arr4, size4);
    cout << "Testing template func1: " << avg1 << "\n";
    cout << "Testing template func2: " << avg2 << "\n";
    cout << "Testing template func3: " << avg3 << "\n";
    cout << "Testing template func4: " << avg4 << "\n";
}
