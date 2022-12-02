#include <iostream>

using namespace std;

const int N = 1e6;

int a[N], q[N], hh = 0, tt = -1;

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        // 判断是否滑出了窗口
        if (hh <= tt && i - k + 1 > q[hh]) ++hh;
        while (hh <= tt && a[q[tt]] >= a[i]) --tt;
        q[++tt] = i;
        if (i >= k - 1) printf("%d ", a[q[hh]]);
    }
    printf("\n");
    hh = 0, tt = -1;
    for (int i = 0; i < n; i++)
    {
        if (hh <= tt && i - k + 1 > q[hh]) ++hh;
        while (hh <= tt && a[q[tt]] <= a[i]) --tt;
        q[++tt] = i;
        if (i >= k - 1) printf("%d ", a[q[hh]]);
    }
    return 0;
}