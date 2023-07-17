// 把数字翻译成字符串
//class Solution {
//public:
//    int translateNum(int num) {
//        string s = to_string(num);
//        int n = s.size();
//        vector<int> dp(n + 1);
//        dp[0] = 1;
//        dp[1] = 1;
//        for (int i = 2; i <= n; i++)
//        {
//            if (s[i - 2] == '0' || s[i - 2] > '2' || (s[i - 2] == '2' && s[i - 1] > '5'))
//            {
//                dp[i] = dp[i - 1];
//            }
//            else dp[i] = dp[i - 1] + dp[i - 2];
//        }
//        return dp[n];
//    }
//};


//class Solution {
//public:
//    vector<string> v;
//    string s;
//
//    void dfs(int idx, string tmp)
//    {
//        if (idx == s.size())
//        {
//            v.push_back(tmp);
//            return;
//        }
//        // 单独
//        tmp += (s[idx] - '0') + 'a';
//        dfs(idx + 1, tmp);
//        tmp.pop_back();
//        // 两个
//        if (idx < s.size() - 1 && s[idx] != '0' && (s[idx] < '2' || s[idx] == '2' && s[idx + 1] <= '5'))
//        {
//            tmp += stoi(s.substr(idx, 2)) + 'a';
//            dfs(idx + 2, tmp);
//            tmp.pop_back();
//        }
//    }
//
//    int translateNum(int num) {
//        s = to_string(num);
//        string tmp;
//        dfs(0, tmp);
//        return v.size();
//    }
//};


// 最大正方形
//class Solution {
//public:
//    int maximalSquare(vector<vector<char>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
//        int Max = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                if (matrix[i - 1][j - 1] == '1')
//                {
//                    dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1])) + 1;
//                    Max = max(Max, dp[i][j] * dp[i][j]);
//                }
//            }
//        }
//        return Max;
//    }
//};


