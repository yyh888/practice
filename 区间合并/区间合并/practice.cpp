#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;

vector<PII> res, ret;

void merge()
{
    sort(res.begin(), res.end());
    int st = -2e9, ed = -2e9;
    for (auto& e : res)
    {
        if (ed < e.first)
        {
            //不能是-2e9
            if (st != -2e9) ret.push_back({ st, ed });
            st = e.first;
            ed = e.second;
        }
        else
        {
            ed = max(e.second, ed);
        }
    }
    // 最后一段
    if (st != -2e9) ret.push_back({ st, ed });
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        res.push_back({ l, r });
    }
    merge();
    cout << ret.size() << endl;
    return 0;
}