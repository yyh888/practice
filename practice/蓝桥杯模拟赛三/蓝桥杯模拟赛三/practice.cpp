#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//int main()
//{
//	printf("%d", 0xaaa);
//	return 0;
//}

// 644
//int main()
//{
//	int i = 1;
//	string s = "BAA";
//	s[1] += 24;
//	s[2] += 20;
//	cout << s << endl;
//	return 0;
//}

//bool Flag(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	int monthday[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int ans = 0;
//	int year = 1900;
//	int month = 1;
//	int day = 1;
//	while (year <= 9999)
//	{
//		if (Flag(year))
//		{
//			monthday[2] = 29;
//		}
//		else
//		{
//			monthday[2] = 28;
//		}
//		// еп╤о
//		int tmpy = year;
//		int sum1 = 0;
//		while (tmpy)
//		{
//			sum1 += (tmpy % 10);
//			tmpy /= 10;
//		}
//		int tmpm = month;
//		int sum2 = 0;
//		while (tmpm)
//		{
//			sum2 += (tmpm % 10);
//			tmpm /= 10;
//		}
//		int tmpd = day;
//		while (tmpd)
//		{
//			sum2 += (tmpd % 10);
//			tmpd /= 10;
//		}
//		if (sum1 == sum2) ans++;
//		day++;
//		if (day > monthday[month])
//		{
//			day = 1;
//			month++;
//			if (month > 12)
//			{
//				month = 1;
//				year++;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}


//int main()
//{
//	int ans = 0;
//	vector<int> arr = { 99, 22, 51, 63, 72, 61, 20, 88, 40, 21, 63, 30, 11, 18, 99, 12, 93, 16, 7, 53, 64, 9, 28, 84, 34, 96, 52, 82, 51, 77 };
//	for (int i = 0; i < arr.size(); i++)
//	{
//		for (int j = i + 1; j < arr.size(); j++)
//		{
//			if (arr[i] * arr[j] >= 2022)
//			{
//				ans++;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}

//const int N = 35, M = 65;
//char arr[N][M];
//
//int n = 30, m = 60;
//
//int dx[] = { 0, -1, 0, 1 };
//int dy[] = { -1, 0, 1, 0 };
//
//int dfs(int x, int y)
//{
//	int cnt = 1;
//	arr[x][y] = '0';
//	for (int i = 0; i < 4; i++)
//	{
//		int a = x + dx[i], b = y + dy[i];
//		if (a >= 1 && a <= n && b >= 1 && b <= m && arr[a][b] == '1')
//		{
//			cnt += dfs(a, b);
//		}
//	}
//	return cnt;
//}
//
//int main()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	int res = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (arr[i][j] == '1')
//			{
//				res = max(res, dfs(i, j));
//			}
//		}
//	}
//	cout << res << endl;
//	return 0;
//}


//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    if ((n + m) % 7 == 0)
//    {
//        cout << '7' << endl;
//    }
//    else
//    {
//        cout << (n + m) % 7 << endl;
//    }
//    return 0;
//}

const int N = 110, M = 110;
int n, m;
int arr[N][M];
bool f[N][M];

int dx[] = { 0, -1, 0, 1 };
int dy[] = { -1, 0, 1, 0 };

int dfs(int x, int y)
{
    int res = 0;
    for (int i = 0; i < 4; i++)
    {
        int a = x + dx[i], b = y + dy[i];
        if (a >= 1 && a <= n && b >= 1 && b <= m && !f[a][b] && arr[a][b] < arr[x][y])
        {
            f[a][b] = true;
            res = max(res, dfs(a, b) + 1);
            f[a][b] = false;
        }
    }
    return res;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            res = max(res, dfs(i, j));
        }
    }
    cout << res;
    return 0;
}