#pragma once
#ifndef myTime_H // include guard
#define myTime_H

namespace TimeTime {
	class MyTime
	{
		public:
			MyTime() {}

			MyTime(int hours, int minutes, int seconds) : t_hours(hours), t_minutes(minutes), t_seconds(seconds) { fineTime(); }
			void showTime();
			void fineTime();
			static MyTime timeSum(MyTime, MyTime);

			private:
				int t_hours{ 0 };
				int t_minutes{ 0 };
				int t_seconds{ 0 };
		};
}


#endif