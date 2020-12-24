#pragma once
#include <math.h>
#include<iostream>
#include <string>
using namespace std;

namespace TimeTime {
	class MyTime
	{
		public:
			MyTime() {}

			MyTime(int hours, int minutes, int seconds) : t_hours(hours), t_minutes(minutes), t_seconds(seconds)
			{
				fineTime(); 
			}

			void showTime();
			void fineTime();
			//Adding Exception(Exercise 9(2)):
			MyTime operator/(MyTime const& obj);

			class dividerException
			{
				public:
					dividerException() : message("Time dividing is forbiden.") { }
					void printMessage() const { std::cout << message << std::endl; }
				private:
				string message;
			};

			//Adding overloading(Exercise 11):

			MyTime operator+(MyTime const& obj);
			MyTime operator-(MyTime const& obj);
			MyTime operator+(int i);
			friend bool operator==(MyTime const& obj1, MyTime const& obj2);
			friend bool operator!=(MyTime const& obj1, MyTime const& obj2);
			friend bool operator>(MyTime const& obj1, MyTime const& obj2);
			friend bool operator<(MyTime const& obj1, MyTime const& obj2);
			friend int operator+(int i, MyTime const& obj1);

			//static MyTime timeSum(MyTime, MyTime);

			private:
				int t_hours{ 0 };
				int t_minutes{ 0 };
				int t_seconds{ 0 };
		};
}
