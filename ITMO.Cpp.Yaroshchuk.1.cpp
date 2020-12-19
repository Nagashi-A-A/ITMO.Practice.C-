#include <iostream>
#include <string>
using namespace std;
int main()
{
	system("chcp 1251");
	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, S;
	cout << "\nВведите координаты вершин многоугольника:\n";
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	cin >> x3;
	cin >> y3;
	cin >> x4;
	cin >> y4;
	cin >> x5;
	cin >> y5;
	S = (x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - y1 * x2 - y2 * x3 - y3 * x4 - y4 * x5 - y5 * x1) / 2;
	cout << "Площадь многоугольника: " << S << endl;
	return 0;
}