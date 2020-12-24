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

		 /*MyTime MyTime::timeSum(MyTime t1, MyTime t2)
		{
			MyTime tInter;
			tInter.t_hours = t1.t_hours + t2.t_hours;
			tInter.t_minutes = t1.t_minutes + t2.t_minutes;
			tInter.t_seconds = t1.t_seconds + t2.t_seconds;
			tInter.fineTime();
			return tInter;
		}*/

		MyTime MyTime:: operator+(MyTime const& obj)
		{
			MyTime tInter;
			tInter.t_hours = t_hours + obj.t_hours;
			tInter.t_minutes = t_minutes + obj.t_minutes;
			tInter.t_seconds = t_seconds + obj.t_seconds;
			tInter.fineTime();
			return tInter;
		}

		MyTime MyTime:: operator-(MyTime const& obj)
		{
			MyTime tInter;
			tInter.t_hours = t_hours - obj.t_hours;
			tInter.t_minutes = t_minutes - obj.t_minutes;
			tInter.t_seconds = t_seconds - obj.t_seconds;
			tInter.fineTime();
			return tInter;
		}

		MyTime MyTime:: operator+(int i)
		{
			MyTime tInter;
			tInter.t_hours = t_hours + i;
			tInter.t_minutes = t_minutes;
			tInter.t_seconds = t_seconds;

			return tInter;
		}

		int TimeTime::operator+(int i, MyTime const& obj1)
		{
			int result = 0;
			result = i + obj1.t_hours;
			return result;
		}

		bool TimeTime::operator==(MyTime const& obj1, MyTime const& obj2)
		{
			bool result;
			if (obj1.t_hours == obj2.t_hours && obj1.t_minutes == obj2.t_minutes && obj1.t_seconds == obj2.t_seconds)
			{
				result = true;
			}
			else
				result = false;
			return result;
		}

		bool TimeTime::operator>(MyTime const& obj1, MyTime const& obj2)
		{
			return obj1.t_hours > obj2.t_hours;
		}
		bool TimeTime::operator<(MyTime const& obj1, MyTime const& obj2)
		{
			return obj1.t_hours < obj2.t_hours;
		}
		bool TimeTime::operator!=(MyTime const& obj1, MyTime const& obj2)
		{
			bool result;
			if (obj1.t_hours != obj2.t_hours || obj1.t_minutes != obj2.t_minutes || obj1.t_seconds != obj2.t_seconds)
			{
				result = true;
			}
			else
				result = false;
			return result;
		}

		MyTime MyTime:: operator/(MyTime const& obj)
		{
			throw MyTime::dividerException();
		}