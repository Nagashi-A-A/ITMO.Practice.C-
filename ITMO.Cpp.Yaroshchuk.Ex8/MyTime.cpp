#include "myTime.h"
#include <iostream>

using namespace TimeTime;
using namespace std;

		void MyTime :: showTime()
		{
			cout << "Time: " << t_hours << ":" << t_minutes << ":" << t_seconds << endl;
		}

		void MyTime :: fineTime()
		{
			while (t_seconds > 60)
			{
				t_seconds -= 60;
				t_minutes++;
			}

			while (t_minutes > 60)
			{
				t_hours++;
				t_minutes -= 60;
			}
		}

		 MyTime MyTime::timeSum(MyTime t1, MyTime t2)
		{
			MyTime tInter;
			tInter.t_hours = t1.t_hours + t2.t_hours;
			tInter.t_minutes = t1.t_minutes + t2.t_minutes;
			tInter.t_seconds = t1.t_seconds + t2.t_seconds;
			tInter.fineTime();
			return tInter;
		}
