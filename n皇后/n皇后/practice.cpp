#include <iostream>

using namespace std;

const int N = 20;

char g[N][N];
bool col[N], dg[N], udg[N];
int n;

void dfs(int u)
{
    if (u == n)
    {
        for (int i = 0; i < n; i++) puts(g[i]);
        puts("");
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!col[i] && !dg[n - u + i] && !udg[u + i])
        {
            col[i] = dg[n - u + i] = udg[u + i] = true;
            g[u][i] = 'Q';
            dfs(u + 1);
            col[i] = dg[n - u + i] = udg[u + i] = false;
            g[u][i] = '.';
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) g[i][j] = '.';
    }
    dfs(0);
    return 0;
}