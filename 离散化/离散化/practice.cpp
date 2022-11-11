#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;

const int N = 3e5 + 10;
int a[N], s[N];

vector<int> Index;
vector<PII> add, sum;

int find(int x)
{
    int l = 0, r = Index.size() - 1;
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (Index[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return r + 1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int x, c;
        cin >> x >> c;
        add.push_back({ x, c });
        Index.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        sum.push_back({ l, r });// 放入求和数组
        Index.push_back(l);// 记录需要的下标
        Index.push_back(r);
    }
    // 排序 + 去重下标
    sort(Index.begin(), Index.end());
    Index.erase(unique(Index.begin(), Index.end()), Index.end());
    for (auto& e : add)
    {
        int x = find(e.first);
        a[x] += e.second;
    }
    // 前缀和
    for (int i = 1; i <= Index.size(); i++)
    {
        s[i] = s[i - 1] + a[i];
    }
    for (auto& e : sum)
    {
        int l = find(e.first), r = find(e.second);
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}