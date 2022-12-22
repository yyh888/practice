#include <iostream>
#include <cstring>

using namespace std;
typedef pair<int, int> PII;
int n, m;

const int N = 110;

int g[N][N];
int d[N][N];
PII q[N * N];

void dfs()
{
    int hh = 0, tt = -1;
    q[++tt] = { 0, 0 };
    memset(d, -1, sizeof(d));
    d[0][0] = 0;
    int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };
    while (hh <= tt)
    {
        PII ret = q[hh++];
        for (int i = 0; i < 4; i++)
        {
            int x = ret.first + dx[i], y = ret.second + dy[i];
            if (x >= 0 && x < n && y >= 0 && y < m && d[x][y] == -1 && g[x][y] == 0)
            {
                d[x][y] = d[ret.first][ret.second] + 1;
                q[++tt] = { x, y };
            }
        }
    }
    printf("%d", d[n - 1][m - 1]);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }
    dfs();
    return 0;
}