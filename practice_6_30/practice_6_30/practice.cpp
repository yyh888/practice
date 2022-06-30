#include<iostream>
using namespace std;

inline int GetMonthDay(int year, int month)
{
	//防止频繁开辟
	static int dayArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = dayArray[month];
	//闰年且二月
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		day = 29;
	}
	return day;
}

class Date
{
public:
	Date& operator+=(int day)
	{
		_day += day;
		//日期不合法就进位使其合法
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			_month++;
			if (_month > 12)
			{
				_year++;
				_month = 1;
			}
		}
		return *this;
	}
	int _year;
	int _month;
	int _day;
};


int main()
{
	int m = 0;
	cin >> m;
	while (m--)
	{
		Date d;
		cin >> d._year >> d._month >> d._day;
		int day = 0;
		cin >> day;
		d += day;
		printf("%04d-%02d-%02d\n", d._year, d._month, d._day);
	}
	return 0;
}