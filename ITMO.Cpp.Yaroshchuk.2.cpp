#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	cout << "������� ���������� �����: ";
	double x, y;
	cin >> x;
	cin >> y;
	if (x * x + y * y < 9 && y > 0)
	{
		cout << "������!\n";
	}
	else if (x * x + y * y > 9 || y < 0)
	{
		cout << "�������";
	}
	else
	{
		cout << "�� �������!\n";
	}
	return 0;
}