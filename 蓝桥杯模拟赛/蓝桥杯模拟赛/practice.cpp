#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//int Day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//int sum = 0;
//int week[] = { 6, 7, 1, 2, 3, 4, 5 };
//int n = 0;
//
//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date& operator++()
//	{
//		n++;
//		if (n > 6) n = 0;
//		_day++;
//		if (_day > Day[_month])
//		{
//			_month++;
//			_day = 1;
//		}
//		if (_month > 12)
//		{
//			_year++;
//			_month = 1;
//		}
//		if ((n == 0 || n == 1) || (_day == 1 || _day == 11 || _day == 21 || _day == 31))
//		{
//			sum++;
//		}
//		return *this;
//	}
//
//
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d(2022, 1, 1);
//	while (d._year != 2023)
//	{
//		++d;
//	}
//	printf("%d", sum);
//	return 0;
//}


//char a[30][60];
//
//int main()
//{
//	int sum = 0;
//	for (int i = 0; i < 30; i++)
//	{
//		scanf("%s", &a[i]);
//	}
//	for (int i = 1; i < 59; i++)
//	{
//		for (int j = 1; j < 59; j++)
//		{
//			if (a[i][j] < a[i - 1][j] && a[i][j] < a[i][j - 1] && a[i][j] < a[i][j + 1] && a[i][j] < a[i + 1][j])
//			{
//				sum++;
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//int a[101][101];
//int b[101][101];
//
//int main()
//{
//	a[1][1] = 1;
//	for (int i = 2; i < 101; i++)
//	{
//		a[i][1] = a[i - 1][1] + 1;
//	}
//	for (int i = 1; i < 101; i++)
//	{
//		for (int j = 2; j < 101; j++)
//		{
//			a[i][j] = a[i][j - 1] + 2;
//		}
//	}
//	for (int i = 1; i < 101; i++)
//	{
//		for (int j = 1; j < 101; j++)
//		{
//			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
//		}
//	}
//	for (int i = 1; i < 101; i++)
//	{
//		for (int j = 1; j < 101; j++)
//		{
//			
//		}
//	}
//	return 0;
//}


//int main()
//{
//    int s, t;
//    cin >> s >> t;
//    int day = 0;
//    while (s != t)
//    {
//        s++;
//        day++;
//        if (s == 8)
//        {
//            s = 1;
//        }
//    }
//    cout << day << endl;
//    return 0;
//}


//int main()
//{
//    string s;
//    cin >> s;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//        {
//            s[i] += 'A' - 'a';
//        }
//    }
//    cout << s;
//    return 0;
//}


int del(string& s1, string& s2)
{
    int t1 = 0, t2 = 0;
    // hour
    int hour1 = 0, hour2 = 0;
    for (int i = 0; i < 2; i++)
    {
        hour1 = hour1 * 10 + (s1[i] - '0');
        hour2 = hour2 * 10 + (s2[i] - '0');
    }
    t1 += hour1 * 60 * 60;
    t2 += hour2 * 60 * 60;
    // minute
    int min1 = 0, min2 = 0;
    for (int i = 3; i < 5; i++)
    {
        min1 = min1 * 10 + (s1[i] - '0');
        min2 = min1 * 10 + (s2[i] - '0');
    }
    t1 += min1 * 60;
    t2 += min2 * 60;
    // second
    int se1 = 0, se2 = 0;
    for (int i = 6; i < 8; i++)
    {
        se1 = se1 * 10 + (s1[i] - '0');
        se2 = se1 * 10 + (s2[i] - '0');
    }
    t1 += se1 * 60;
    t2 += se2 * 60;
    return t1 - t2;
}

int main()
{
    int n = 0;
    cin >> n;
    vector<int> ui;
    vector<string> t;
    while (n--)
    {
        string s;
        cin >> s;
        t.push_back(s);
        int u, i;
        cin >> u >> i;
        ui.push_back(u * i);
    }
    int sum = 0;
    for (int i = 1; i < t.size(); i++)
    {
        int ret = del(t[i], t[i - 1]);
        sum += ret * ui[i - 1];
    }
    printf("%d", sum);
    return 0;
}
