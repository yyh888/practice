#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ULL;
const int N = 1e5 + 10, p = 131;

char str[N];
ULL h[N], q[N];

ULL get(int l, int r)
{
    return h[r] - h[l - 1] * q[r - l + 1];
}

int main()
{
    int n, m;
    cin >> n >> m;
    scanf("%s", str + 1);
    q[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        q[i] = q[i - 1] * p;
        h[i] = h[i - 1] * p + str[i];
    }
    int l1, r1, l2, r2;
    while (m--)
    {
        cin >> l1 >> r1 >> l2 >> r2;
        if (get(l1, r1) == get(l2, r2)) printf("Yes\n");
        else printf("No\n");
    }
}