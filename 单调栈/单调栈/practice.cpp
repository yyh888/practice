#include <iostream>

using namespace std;

const int N = 1e5 + 10;
int st[N], tt;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        while (tt && st[tt] >= x) --tt;
        if (tt) cout << st[tt] << " ";
        else cout << -1 << " ";
        st[++tt] = x;
    }
    return 0;
}