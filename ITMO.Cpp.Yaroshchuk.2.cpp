#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	cout << "Введите координаты точки: ";
	double x, y;
	cin >> x;
	cin >> y;
	if (x * x + y * y < 9 && y > 0)
	{
		cout << "внутри!\n";
	}
	else if (x * x + y * y > 9 || y < 0)
	{
		cout << "снаружи";
	}
	else
	{
		cout << "на границе!\n";
	}
	return 0;
}