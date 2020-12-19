// ITMO.Cpp.Yaroshchuk.Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool Input(int, int);

int main()
{
	int a = 0, b = 0;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	return 0;
}

bool Input(int a, int b)
{
	bool result;
	cout << "Iput your accaunt number: ";
	cin >> a;
	cout << "Input your password: ";
	cin >> b;
	if (a == b)
		result = false;
	else
		result = true;
	return result;
}

int Myroot(double x, double y, double z, double&, double&)
{
	int result;
	return 1;
}