#include <iostream>
#include <windows.h>
using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;
	
	void wasTime()
	{
		while (seconds > 60)
		{
			seconds -= 60;
			minutes++;
		}

		while (minutes > 60)
		{
			hours++;
			minutes -= 60;
		}
	}

	void inSeconds()
	{
		int inSeconds;
		inSeconds = seconds + (minutes * 60) + (hours * 3600);
		cout << "Time in seconds is: " << inSeconds << endl;
	}

	void FuncMinus(Time t2)
	{
		wasTime();
		t2.wasTime();
		Time tInter;
		tInter.hours = hours - t2.hours;
		tInter.minutes = minutes - t2.minutes;
		tInter.seconds = seconds - t2.seconds;

		if (tInter.seconds < 0)
		{
			tInter.minutes--;
			tInter.seconds += 60;
		}

		if (tInter.minutes < 0)
		{
			tInter.hours--;
			tInter.minutes += 60;
		}

		cout << "Interval between two timestamps is: "
			<< tInter.hours << " hours, " <<
			tInter.minutes << " minutes, "
			<< tInter.seconds << " seconds." << endl;
	}

	void FuncPlus(Time t2)
	{
		wasTime();
		t2.wasTime();
		Time tInter;
		tInter.hours = hours + t2.hours;
		tInter.minutes = minutes + t2.minutes;
		tInter.seconds = seconds + t2.seconds;
		cout << "The sum of two timestamps is: "
			<< tInter.hours << " hours, " <<
			tInter.minutes << " minutes, "
			<< tInter.seconds << " seconds." << endl;
	}
};

int main()
{
	Time t1;
	Time t2;
	cout << "Input first timestamp in next order: hours minutes seconds \n";
	cin >> t1.hours;
	cin >> t1.minutes;
	cin >> t1.seconds;

	cout << "Input second timestamp in next order: hours minutes seconds \n";
	cin >> t2.hours;
	cin >> t2.minutes;
	cin >> t2.seconds;

	t1.inSeconds();

	t1.FuncMinus(t2);
	t2.FuncPlus(t1);
}