#include <iostream>
#include "myTime.h"
using namespace TimeTime;

int main()
{
	MyTime tSum;
	MyTime t1{32, 91, 87};
	MyTime t2{12, 43, 22};
	t1.showTime();
	tSum = tSum.timeSum(t1, t2);
	tSum.showTime();
}

