#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 1e5 + 10;
int h[N], e[N], ne[N], idx;
int d[N];
queue<int> q;
int n, m;

void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

int bfs()
{
    memset(d, -1, sizeof(d));
    d[1] = 0;
    q.push(1);
    while (q.size())
    {
        int cur = q.front();
        q.pop();
        for (int i = h[cur]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (d[j] == -1)
            {
                q.push(j);
                d[j] = d[cur] + 1;
            }
        }
    }
    return d[n];
}

int main()
{
    memset(h, -1, sizeof h);
    cin >> n >> m;
    int a, b;
    while (m--)
    {
        cin >> a >> b;
        add(a, b);
    }
    cout << bfs() << endl;
    return 0;
}