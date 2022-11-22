#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    vector<int> v;
    v.resize(n * 3);
    for (int i = 0; i < 3 * n; i++) cin >> v[i];
    std::sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        sum += v[v.size() - 2 * (i + 1)];
    }
    cout << sum;
}