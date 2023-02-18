#include <iostream>
#include <algorithm>

using namespace std;
const int N = 1010;
int f[N][N];
int v[N], w[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= v[i]) f[i][j] = max(f[i][j], f[i][j - v[i]] + w[i]);
        }
    }
    cout << f[n][m];
    return 0;
}



#include <iostream>
#include <algorithm>

using namespace std;
const int N = 1010;
int f[N];
int v[N], w[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j >= v[i]) f[j] = max(f[j], f[j - v[i]] + w[i]);
        }
    }
    cout << f[m];
    return 0;
}