
#include <iostream>
#include <array>
#include <vector>
using namespace std;
//Задание 1. Передача массива в функцию
void funcArr(int, int arr[]);
void funcArrSort(int, int arr[]);


int main()
{
	//Задание 1.(1) Передача массива в функцию
	const int n = 10;
	int mas[n] = { 3, 8, 4, -12, 32, -21, 51, 1, 6, 5 };
	funcArr(n, mas);

	//Задание 1.(2) Передача массива в функцию
	const int z = 10;
	int secArr[z] = { 1, 25, 6, 32, 43, 5, 96, 23, 99, 55 };
	for (auto& i : secArr)
	{
		cout << i << " ";
	}
	cout << "________________________\n";
	funcArrSort(z, secArr);
	for (auto& i : secArr)
	{
		cout << i << " ";
	}
}

void funcArr(int n, int mas[])
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	cout << s << "\n";
	int mid = s / n;
	cout << mid << "\n";

	int sPositive = 0, sNegative = 0, sEvenIndx = 0, sNotEvenIndx = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] >= 0)
		{
			sPositive += mas[i];
		}
		else
		{
			sNegative += mas[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			sEvenIndx += mas[i];
		}
		else
		{
			sNotEvenIndx += mas[i];
		}
	}
	int minIndx = 0, maxIndx = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > mas[maxIndx])
		{
			maxIndx = i;
		}

		if (mas[i] < mas[minIndx])
		{
			minIndx = i;
		}
	}
	cout << sEvenIndx << "\n" << sNotEvenIndx << "\n" << sPositive << "\n" << sNegative << "\n";
	cout << "Index of biggest number is: " << maxIndx << ", Index of smallest number is: " << minIndx << endl;
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
