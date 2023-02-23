#include <iostream>
#include <algorithm>

using namespace std;
const int N = 510, Min = 1e9;
int a[N][N], f[N][N];

int main()
{
    int n;
    cin >> n;
    // 边界设为无穷小
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i + 1; j++)
        {
            f[i][j] = -Min;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    f[1][1] = a[1][1];
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            f[i][j] = max(f[i - 1][j - 1] + a[i][j], f[i - 1][j] + a[i][j]);
        }
    }
    int res = -Min;
    for (int i = 1; i <= n; i++) res = max(res, f[n][i]);
    cout << res;
    return 0;
}