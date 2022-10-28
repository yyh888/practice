#include <iostream>
#include <vector>

using namespace std;

const int N = 1e6 + 10;

vector<int> add(vector<int>& a, vector<int>& b)
{
    vector<int> c;
    int t = 0;
    for (int i = 0; i < a.size() || i < b.size(); i++)
    {
        if (i < a.size()) t += a[i];
        if (i < b.size()) t += b[i];
        c.push_back(t % 10);
        t /= 10;
    }
    if (t)c.push_back(t);
    return c;
}

int main()
{
    string a, b;
    vector<int> A, B;
    cin >> a >> b;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        A.push_back(a[i] - '0');
    }
    for (int j = b.size() - 1; j >= 0; j--)
    {
        B.push_back(b[j] - '0');
    }
    vector<int> ret = add(A, B);
    for (int i = ret.size() - 1; i >= 0; i--)
    {
        printf("%d", ret[i]);
    }
    return 0;
}



#include <iostream>
#include <vector>
using namespace std;

// a >= b ?
bool cmp(const vector<int>& a, const vector<int> b)
{
    int n = a.size(), m = b.size();
    if (n != m)
    {
        return n > m;
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                return a[i] > b[i];
            }
        }
    }
    return true;
}

vector<int>& sub(vector<int>& a, vector<int>& b)
{
    // 结果放到a中
    int d = 0;
    for (int i = 0; i < a.size() || i < b.size(); i++)
    {
        if (i < b.size()) a[i] -= b[i];
        a[i] -= d;
        if (a[i] < 0)
        {
            d = 1;
        }
        else
        {
            d = 0;
        }
        a[i] = (a[i] + 10) % 10;
    }
    // 去掉0
    while (a.size() > 1 && a.back() == 0)
    {
        a.pop_back();
    }
    return a;
}


int main()
{
    string a, b;
    vector<int> A, B;
    cin >> a >> b;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        A.push_back(a[i] - '0');
    }
    for (int j = b.size() - 1; j >= 0; j--)
    {
        B.push_back(b[j] - '0');
    }

    if (cmp(A, B))// A >= B
    {
        auto c = sub(A, B);
        for (int i = c.size() - 1; i >= 0; i--)
        {
            printf("%d", c[i]);
        }
    }
    else
    {
        printf("-");
        auto c = sub(B, A);
        for (int i = c.size() - 1; i >= 0; i--)
        {
            printf("%d", c[i]);
        }
    }
    return 0;
}