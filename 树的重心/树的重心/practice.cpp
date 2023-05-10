#include <iostream>
#include <cstring>

using namespace std;

const int N = 1e5 + 10, M = 2 * N;

int table[N];// ±í

int e[M], ne[M], idx;// Á´±í

bool st[N];

int ans = N;
int n;

void Add(int a, int b)
{
    e[idx] = b;
    ne[idx] = table[a];
    table[a] = idx++;
}

int dfs(int u)
{
    st[u] = true;
    int res = 0, sum = 1;
    for (int i = table[u]; i != -1; i = ne[i])
    {
        int j = e[i];
        if (!st[j])
        {
            int tmp = dfs(j);
            res = max(res, tmp);
            sum += tmp;
        }
    }
    res = max(res, n - sum);
    ans = min(ans, res);
    return sum;
}

int main()
{
    memset(table, -1, sizeof table);
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        Add(a, b);
        Add(b, a);
    }
    dfs(1);
    cout << ans << endl;
    return 0;
}