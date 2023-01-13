#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n && n != -1)
    {
        int sum = 0;
        int res, t = 0, s; // res表示中间值
        for (int i = 0; i < n; i++)
        {
            res = t;
            cin >> s >> t;
            sum += s * (t - res);
        }
        printf("%d miles\n", sum);
    }
    return 0;
}