#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int N = 1e5 + 10;

int h[N], e[N], ne[N], idx;
int in[N];// »Î±ﬂ
queue<int> q;
int res[N];

int n, m, cnt;

void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

void topology()
{
    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
        {
            q.push(i);
        }
    }
    while (q.size())
    {
        int t = q.front();
        q.pop();
        res[cnt++] = t;
        for (int i = h[t]; i != -1; i = ne[i])
        {
            in[e[i]]--;
            if (in[e[i]] == 0)
            {
                q.push(e[i]);
            }
        }
    }
}


int main()
{
    memset(h, -1, sizeof(h));
    cin >> n >> m;
    int a, b;
    while (m--)
    {
        cin >> a >> b;
        add(a, b);
        in[b]++;
    }

    topology();

    if (cnt == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }
    return 0;
}