#include <iostream>

using namespace std;

const int N = 20;

char g[N][N];
bool row[N], col[N], dg[N], udg[N];
int n;

void dfs(int r, int c, int s)
{
    if (s > n) return;
    if (c == n)
    {
        c = 0;
        r++;
    }
    if (r == n)
    {
        if (s == n)
        {
            for (int i = 0; i < n; i++) puts(g[i]);
            puts("");
        }
        return;
    }
    dfs(r, c + 1, s);
    if (!row[r] && !col[c] && !dg[r + c] && !udg[n - c + r])
    {
        row[r] = col[c] = dg[r + c] = udg[n - c + r] = true;
        g[r][c] = 'Q';
        dfs(r, c + 1, s + 1);
        row[r] = col[c] = dg[r + c] = udg[n - c + r] = false;
        g[r][c] = '.';
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) g[i][j] = '.';
    }
    dfs(0, 0, 0);
    return 0;
}