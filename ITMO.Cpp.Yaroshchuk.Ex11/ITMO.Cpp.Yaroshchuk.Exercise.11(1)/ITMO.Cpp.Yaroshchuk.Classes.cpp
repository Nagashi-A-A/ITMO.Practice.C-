#include <iostream>
#include "myTime.h"
using namespace TimeTime;

int main()
{
	MyTime tSum;
	MyTime t1{32, 91, 87};
	MyTime t2{12, 43, 22};
	t1.showTime();
	//Ex 9(2)
	try
	{
		tSum = t1 / t2;
	}
	catch (MyTime::dividerException er)
	{
		er.printMessage();
	}

	//Ex11
	tSum = t1 + t2;
	tSum.showTime();
	int addN = 5;
	int addToInt;
	tSum = tSum + addN;
	addToInt = 3 + tSum;
	std::cout << "addToInt = " << addToInt << "\n";
	tSum.showTime();
	bool ifTrue;
	ifTrue = t1 > t2;
	std::cout << ifTrue<<"\n";
	ifTrue = t1 == t2;
	std::cout << ifTrue << "\n";
}

