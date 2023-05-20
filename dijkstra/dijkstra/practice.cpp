#include <iostream>
#include <cstring>

using namespace std;

const int N = 510;

int n, m;

int g[N][N];
bool st[N];
int dist[N];

int dijkstra()
{
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // ÕÒµ½×î¶Ì±ß
        int t = -1;
        for (int j = 1; j <= n; j++)
        {
            if (!st[j] && (t == -1 || dist[j] < dist[t]))
            {
                t = j;
            }
        }
        st[t] = true;
        if (t == n) break;
        for (int j = 1; j <= n; j++)
        {
            dist[j] = min(dist[j], dist[t] + g[t][j]);
        }
    }
    if (dist[n] == 0x3f3f3f3f) return -1;
    return dist[n];
}


int main()
{
    memset(g, 0x3f, sizeof g);
    cin >> n >> m;
    int x, y, z;
    while (m--)
    {
        cin >> x >> y >> z;
        g[x][y] = min(g[x][y], z);
    }
    int ans = dijkstra();
    cout << ans << endl;
    return 0;
}


#include <iostream>
#include <cstring>
#include <queue>

const int N = 150010;

using namespace std;

int n, m;
typedef pair<int, int> PII;

int h[N], e[N], w[N], ne[N], idx;
int dist[N];
int st[N];

void add(int a, int b, int val)
{
    e[idx] = b;
    w[idx] = val;
    ne[idx] = h[a];
    h[a] = idx++;
}

int dijkstra()
{
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    priority_queue<PII, vector<PII>, greater<PII>> heap;
    heap.push({ 0, 1 });
    while (heap.size())
    {
        auto t = heap.top();
        heap.pop();
        int ver = t.second, distance = t.first;
        if (st[ver]) continue;
        st[ver] = true;
        for (int i = h[ver]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (dist[j] > dist[ver] + w[i])
            {
                dist[j] = dist[ver] + w[i];
                heap.push({ dist[j], j });
            }
        }
    }
    if (dist[n] == 0x3f3f3f3f) return -1;
    else return dist[n];
}

int main()
{
    memset(h, -1, sizeof h);
    cin >> n >> m;
    int a, b, c;
    while (m--)
    {
        cin >> a >> b >> c;
        add(a, b, c);
    }
    int t = dijkstra();
    cout << t << endl;
    return 0;
}