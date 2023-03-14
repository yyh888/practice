#include <iostream>
#include <cstdio>
using namespace std;

bool flag(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    return false;
}

int main()
{
    int year, month, day;
    int monthDay[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    while (~scanf("%d%d%d", &year, &month, &day))
    {
        int res = 0;
        for (int i = 0; i < month; i++)
        {
            res += monthDay[i];
        }
        if (month > 2 && flag(year))
        {
            res++;
        }
        res += day;
        cout << res << endl;
    }
    return 0;
}