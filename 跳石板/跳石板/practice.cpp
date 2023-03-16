//#include <iostream>
//
//using namespace std;
//
//
//class A
//{
//private:
//	int _x;
//protected:
//	int _y;
//public:
//	A(int x = 0, int y = 1)
//		: _x(x)
//		, _y(y)
//	{}
//
//	void fun2()
//	{
//		cout << _y << endl;
//	}
//};
//
//class B : public A
//{
//private:
//
//public:
//	void fun()
//	{
//		_y++;
//	}
//};
//
//
//int main()
//{
//	B b;
//	b.fun();
//	b.fun2();
//	return 0;
//}


#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

void getval(int x, vector<int>& v)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            v.push_back(i);
            if (x / i != i)
            {
                v.push_back(x / i);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> dp(m + 1, INT_MAX);
    dp[n] = 0;
    for (int i = n; i < m; i++)
    {
        if (dp[i] == INT_MAX)
        {
            continue;
        }
        vector<int> v;
        getval(i, v);
        for (int j = 0; j < v.size(); j++)
        {
            int add = v[j];
            if (i + add <= m)
            {
                dp[i + add] = min(dp[i + add], dp[i] + 1);
            }
        }
    }
    if (dp[m] != INT_MAX)
    {
        cout << dp[m];
    }
    else
    {
        cout << -1;
    }
    return 0;
}