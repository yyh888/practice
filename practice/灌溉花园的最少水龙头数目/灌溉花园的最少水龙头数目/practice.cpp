class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<pair<int, int>> v;
        for (int i = 0; i <= n; i++)
        {
            int start = max(i - ranges[i], 0);
            int end = min(i + ranges[i], n);
            v.push_back(make_pair(start, end));
        }
        sort(v.begin(), v.end());
        vector<int> f(n + 1, INT_MAX);
        f[0] = 0;
        for (int i = 0; i <= n; i++)
        {
            if (f[v[i].first] == INT_MAX) return -1;
            for (int j = v[i].first; j <= v[i].second; j++)
                f[j] = min(f[j], f[v[i].first] + 1);
        }
        return f[n];
    }
};