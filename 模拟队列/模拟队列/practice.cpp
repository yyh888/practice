#include <iostream>
using namespace std;

const int N = 1e6 + 10;

int q[N], hh, tt = -1;

int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        string s;
        int x;
        cin >> s;
        if (s == "push")
        {
            scanf("%d", &x);
            q[++tt] = x;
        }
        else if (s == "empty")
        {
            if (hh - 1 == tt) printf("YES\n");
            else printf("NO\n");
        }
        else if (s == "query")
        {
            printf("%d\n", q[hh]);
        }
        else
        {
            scanf("%d", &x);
            ++hh;
        }
    }
    return 0;
}