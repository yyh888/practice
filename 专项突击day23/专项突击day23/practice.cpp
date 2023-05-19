//生成匹配的括号
//class Solution {
//public:
//    vector<string> res;
//    string s;
//
//    void dfs(int i, int n, int sum)
//    {
//        if (i == 2 * n && sum == 0)
//        {
//            res.push_back(s);
//            return;
//        }
//        if (i == 2 * n) return;
//        if (sum < 0) return;
//        s += '(';
//        dfs(i + 1, n, sum + 1);
//        s.pop_back();
//        s += ')';
//        dfs(i + 1, n, sum - 1);
//        s.pop_back();
//    }
//
//    vector<string> generateParenthesis(int n) {
//        dfs(0, n, 0);
//        return res;
//    }
//};


// 分割回文子字符串
//class Solution {
//public:
//    vector<vector<string>> res;
//    vector<string> v;
//    vector<vector<bool>> dp;
//
//    void dfs(const string& s, int idx, int n)
//    {
//        if (idx == n)
//        {
//            res.push_back(v);
//            return;
//        }
//        for (int i = idx; i < n; i++)
//        {
//            if (dp[idx][i])
//            {
//                v.push_back(s.substr(idx, i - idx + 1));
//                dfs(s, i + 1, n);
//                v.pop_back();
//            }
//        }
//    }
//
//    vector<vector<string>> partition(string s) {
//        int n = s.size();
//        dp.assign(n, vector<bool>(n, true));
//        for (int i = n - 1; i >= 0; --i) {
//            for (int j = i + 1; j < n; ++j) {
//                dp[i][j] = (s[i] == s[j]) && dp[i + 1][j - 1];
//            }
//        }
//        dfs(s, 0, n);
//        return res;
//    }
//};


// 复原 IP
//class Solution {
//public:
//    vector<string> res;
//    vector<int> tmp;
//    const int N = 4;
//
//    void dfs(const string& s, int sidx, int nidx)
//    {
//        if (nidx == N)
//        {
//            if (sidx == s.size())
//            {
//                string t;
//                for (int i = 0; i < N; i++)
//                {
//                    t += to_string(tmp[i]);
//                    if (i != N - 1)
//                        t += '.';
//                }
//                res.push_back(t);
//            }
//            return;
//        }
//        if (sidx >= s.size())
//        {
//            return;
//        }
//        if (s[sidx] == '0')
//        {
//            tmp[nidx] = 0;
//            dfs(s, sidx + 1, nidx + 1);
//            return;
//        }
//        int ret = 0;
//        for (int i = sidx; i < s.size(); i++)
//        {
//            ret = ret * 10 + (s[i] - '0');
//            if (ret <= 255)
//            {
//                tmp[nidx] = ret;
//                dfs(s, i + 1, nidx + 1);
//            }
//            else break;
//        }
//    }
//
//    vector<string> restoreIpAddresses(string s) {
//        tmp.resize(N);
//        dfs(s, 0, 0);
//        return res;
//    }
//};