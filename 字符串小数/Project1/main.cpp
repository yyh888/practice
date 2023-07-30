#include <iostream>
#include <string>

using namespace std;

//编程题：
//double StringToDouble(const char* str) {}
//
//“0.123”-- > 0.123
//"+12.5"-- > 12.5
//"-12.6"-- > -12, 6

double StringToDouble(const string s)
{
	int n = s.size();
	// 判断是否为小数
	bool isdouble;
	int pos = s.find(".");
	if (pos == string::npos) isdouble = false;
	else isdouble = true;
	int i = 0;
	while (i < n && s[i] == ' ') i++;
	int flag = 1;// 符号
	double res = 0;
	while (i < n && (s[i] == '-' || s[i] == '+'))
	{
		if(s[i] == '-') flag *= -1;
		i++;
	}
	if (isdouble)
	{
		// 小数
		for (; i < pos; i++)
		{
			res = res * 10 + (s[i] - '0');
		}
		i = pos + 1;
		double mul = 10.0;
		for (; i < n; i++)
		{
			res = res + (s[i] - '0') / mul;
			mul *= 10;
		}
		return res * flag;
	}
	else
	{
		// 整数
		for (; i < n; i++)
		{
			res = res * 10 + (s[i] - '0');
		}
		return res * flag;
	}
}

int main()
{
	string s;
	cin >> s;
	cout << StringToDouble(s) << endl;
	return 0;
}