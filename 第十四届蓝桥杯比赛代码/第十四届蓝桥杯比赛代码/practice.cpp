#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Data
{
	int t;
	int d;
	int l;
};

struct cmp
{
	bool operator()(const Data& d1, const Data& d2)
	{
		if (d1.t == d2.t)
		{
			if (d1.d == d2.d)
			{
				return d1.l < d2.l;
			}
			else
			{
				return d1.d < d2.d;
			}
		}
		else
		{
			return d1.t < d2.t;
		}
	}
};

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		vector<Data> v(m);
		for (int i = 0; i < m; i++)
		{
			int _t, _d, _l;
			cin >> _t >> _d >> _l;
			v[i] = { _t, _d, _l };
		}
		sort(v.begin(), v.end(), cmp());
		int tmp = v[0].t + v[0].l;
		for (int i = 1; i < v.size(); i++)
		{
			if (v[i].t + v[i].d < tmp)
			{
				cout << "No" << endl;
				break;
			}
			int ret = v[i].t + v[i].l;
			tmp = ret;

		}
		cout << "Yes" << endl;
	}
	return 0;
}


















//typedef pair<int, bool> PII;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	vector<PII> v(n);
//	for(int i = 0; i < n; i++)
//	{
//		cin >> v[i].first;
//		v[i].second = true; 
//	}
//	while(k--)
//	{
//		int minI = 0;
//		while(v[minI].second == false)
//		{
//			minI++;
//		}
//		for(int i = 0; i < n; i++)
//		{
//			if(v[i].second == true && v[i].first < v[minI].first)
//			{
//				minI = i;
//			}
//		}
//		v[minI].second = false;
//		if(minI == 0)
//		{
//			int l = 1;
//			while(v[l].second != true)
//			{
//				l++;
//			}
//			v[l].first += v[minI].first;
//		}
//		else if(minI == n - 1)
//		{
//			int r = n - 2;
//			while(v[r].second != true)
//			{
//				r--;
//			}
//			v[r].first += v[minI].first;
//		}
//		else
//		{
//			int l = minI + 1;
//			while(v[l].second != true)
//			{
//				l++;
//			}
//			v[l].first += v[minI].first;
//			int r = minI - 1;
//			while(v[r].second != true)
//			{
//				r--;
//			}
//			v[r].first += v[minI].first;
//		}
//	}
//	for(int i = 0; i < n; i++)
//	{
//		if(v[i].second)
//		{
//			cout << v[i].first << " ";
//		}
//	}
//	return 0;
//}















//int main()
//{
//	int k;
//	int res = 0;
//	string s;
//	char c1, c2;
//	cin >> k;
//	cin >> s >> c1 >> c2;
//	string ret;
//	for(int i = 0; i < s.size(); i++)
//	{
//		if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
//		{
//			ret += s[i];
//		}
//	}
//	int n = ret.size();
//	int i = 0;
//	while(i <= n - k)
//	{
//		while(i <= n - k && ret[i] != c1)
//		{
//			i++;
//		}
//		int j = i + k - 1;
//		while(j < n)
//		{
//			if(ret[j] == c2)
//			{
//				res++;
//			}
//			j++;
//		}
//		i++;
//	}
//	cout << res;
//	return 0;
//}



//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void dfs(vector<vector<char>>& vv, int i, int j)
//{
//	if(i < 0 || i >= vv.size() || j < 0 || j >= vv[0].size() || vv[i][j] == '0')
//	{
//		return;
//	}
//	vv[i][j] = '0';
//	int dx[] = {0, -1, 0, 1};
//	int dy[] = {-1, 0, 1, 0};
//	for(int k = 0; k < 4; k++)
//	{
//		int x = i + dx[k], y = j + dy[k];
//		dfs(vv, x, y);
//	}
//	
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while(t--)
//	{
//		int n, m;
//		cin >> n >> m;
//		vector<vector<char>> vv(n, vector<char>(m));
//		for(int i = 0; i < n; i++)
//		{
//			for(int j = 0; j < m; j++)
//			{
//				cin >> vv[i][j];
//			}
//		}
//		
//		int cnt = 0;
//		for(int i = 0; i < n; i++)
//		{
//			for(int j = 0; j < m; j++)
//			{
//				if(vv[i][j] == '1')
//				{
//					dfs(vv, i, j);
//					cnt++;
//				}
//			}
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}



//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<string> v;
//	int n;
//	cin >> n;
//	int res = 0;
//	for(int i = 0; i < n; i++)
//	{
//		string tmp;
//		cin >> tmp;
//		v.push_back(tmp);
//	}
//	vector<int> dp(v.size(), 1);
//	for(int i = 0; i < v.size(); i++)
//	{
//		for(int j = i - 1; j >= 0; j--)
//		{
//			if(v[j].back() == v[i][0])
//			{
//				dp[i] += dp[j];
//				if(dp[i] > res)
//				{
//					res = dp[i];
//				}
//				break;
//			}
//		}
//	}
//	cout << v.size() - res;
//	return 0;
//}






//#include <iostream>
//
//using namespace std;
//
//const int N = 1e4 + 10;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int Min = 0, Max = INT_MAX;
//	for(int i = 0; i < n; i++)
//	{
//		long long a, b;
//		cin >> a >> b;
//		// 最小
//		long long _min = (a / (b + 1)) + 1;
//		if(_min > Min)
//		{
//			Min = _min;
//		}
//		// 最大
//
//		long long _max = a / b;
//		if(_max < Max)
//		{
//			Max = _max;
//		}
//	}
//	cout << Min << " " << Max << endl; 
//	return 0;
//}






























//#include <bits/stdc++.h>
//
//using namespace std;




//int y1, y2, y3, y4, m1, m2, d1, d2;
//
//int MonthDay[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//bool test(const string& s, unordered_map<string, int>& hash)
//{
//	if(s.size() != 8)
//	{
//		return false;
//	}
//	string year = s.substr(0, 4);
//	string month = s.substr(4, 2);
//	string day = s.substr(6, 2);
//	int m = stoi(month);
//	int d = stoi(day);
//	if(year == "2023")
//	{
//		if(m > 0 && m <= 12)
//		{
//			if(d > 0 && d <= MonthDay[m])
//			{
//				if(hash[s] >= 1)
//				{
//					return false;
//				}
//				else
//				{
//					hash[s]++;
//					return true;
//				}
//			}
//		}
//		else
//		{
//			return false;
//		}
//	}
//	else
//	{
//		return false;
//	}
//}
//
//const int N = 100;
//
//int main()
//{
//	unordered_map<string, int> hash;
//	string s;
//	s.resize(N);
//	for(int i = 0; i < N; i++)
//	{
//		cin >> s[i];
//	}
//	int ans = 0;
//	while(y1 <= N - 8)
//	{
//		string tmp = "";
//		while(y1 <= N - 8 && s[y1] != '2')
//		{
//			y1++;
//		}
//		tmp += s[y1];
//		y2 = y1 + 1;
//		while(y2 <= N - 7 && s[y2] != '0')
//		{
//			y2++;
//		}
//		tmp += s[y2];
//		y3 = y2 + 1;
//		while(y3 <= N - 6 && s[y3] != '2')
//		{
//			y3++;
//		}
//		tmp += s[y3];
//		y4 = y3 + 1;
//		while(y4 <= N - 5 && s[y4] != '3')
//		{
//			y4++;
//		}
//		tmp += s[y4];
//		for(m1 = y4 + 1; m1 <= N - 4; m1++)
//		{
//			for(m2 = m1 + 1; m2 <= N - 3; m2++)
//			{
//				for(d1 = m2 + 1; d1 <= N - 2; d1++)
//				{
//					for(d2 = d1 + 1; d2 <= N - 1; d2++)
//					{
//						tmp += s[m1];
//						tmp += s[m2];
//						tmp += s[d1];
//						tmp += s[d2];
//						if(test(tmp, hash))
//						{
//							ans++;
//						}
//						tmp.pop_back();
//						tmp.pop_back();
//						tmp.pop_back();
//						tmp.pop_back();
//					}
//				}
//			}
//		}
//		y1++;
//	}
//	cout << ans << endl;
//	return 0;	
//}
