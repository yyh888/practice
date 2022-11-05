#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int a[N], b[N];

void insert(int* b, int l, int r, int val)
{
    b[l] += val;
    b[r + 1] -= val;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        insert(b, i, i, a[i]);
    }
    while (m--)
    {
        int l, r, val;
        scanf("%d %d %d", &l, &r, &val);
        insert(b, l, r, val);
    }
    for (int i = 1; i <= n; i++)
    {
        b[i] += b[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}



// 差分矩阵

const int N = 1010;
int a[N][N], b[N][N];

void insert(int x1, int y1, int x2, int y2, int val)
{
    b[x1][y1] += val;
    b[x1][y2 + 1] -= val;
    b[x2 + 1][y1] -= val;
    b[x2 + 1][y2 + 1] += val;
}

int main()
{
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            insert(i, j, i, j, a[i][j]);
        }
    }
    while (q--)
    {
        int x1, y1, x2, y2, val;
        scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &val);
        insert(x1, y1, x2, y2, val);
    }
    // 求b前缀和
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}