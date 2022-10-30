#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> mul(vector<int>& a, int b)
{
    vector<int> res;
    int add = 0;
    for (int i = 0; i < a.size() || add; i++)
    {
        if (i < a.size()) add += a[i] * b;
        res.push_back(add % 10);
        add /= 10;
    }
    // Ç°ÖÃ0
    while (res.size() > 1 && res.back() == 0)
    {
        res.pop_back();
    }
    return res;
}

int main()
{
    string a;
    int b;
    cin >> a >> b;
    vector<int> c;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        c.push_back(a[i] - '0');
    }
    vector<int> res = mul(c, b);
    for (int i = res.size() - 1; i >= 0; i--)
    {
        printf("%d", res[i]);
    }
    return 0;
}


#include <algorithm>

using namespace std;

vector<int> div(vector<int>& a, int b, int& r)
{
    vector<int> res;
    r = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        r = r * 10 + a[i];
        res.push_back(r / b);
        r %= b;
    }
    reverse(res.begin(), res.end());
    while (res.size() > 1 && res.back() == 0)
    {
        res.pop_back();
    }
    return res;
}

int main()
{
    string a;
    int b;
    cin >> a >> b;
    vector<int> c;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        c.push_back(a[i] - '0');
    }
    int r = 0;
    vector<int> res = div(c, b, r);
    for (int i = res.size() - 1; i >= 0; i--)
    {
        printf("%d", res[i]);
    }
    printf("\n%d", r);
    return 0;
}