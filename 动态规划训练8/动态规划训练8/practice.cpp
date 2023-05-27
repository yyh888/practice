// 等差数列划分 II - 子序列
//class Solution {
//public:
//    int numberOfArithmeticSlices(vector<int>& nums) {
//        int n = nums.size();
//        vector<vector<int>> dp(n, vector<int>(n));
//        unordered_map<long long, vector<int>> hash;
//        hash[nums[0]].push_back(0);
//        int sum = 0;
//        for (int i = 1; i < n - 1; i++)
//        {
//            for (int j = i + 1; j < n; j++)
//            {
//                long long a = (long long)2 * nums[i] - nums[j];
//                if (hash.count(a))
//                {
//                    auto v = hash[a];
//                    for (int k = 0; k < v.size(); k++)
//                    {
//                        if (v[k] < i)
//                        {
//                            dp[i][j] += dp[v[k]][i] + 1;
//                        }
//                    }
//                }
//                sum += dp[i][j];
//            }
//            hash[nums[i]].push_back(i);
//        }
//        return sum;
//    }
//};


// 回文子串
//class Solution {
//public:
//    int countSubstrings(string s) {
//        int n = s.size();
//        int sum = 0;
//        vector<vector<bool>> dp(n, vector<bool>(n, false));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (i == j || (dp[i + 1][j - 1] && s[i] == s[j]) || (j - i == 1 && s[i] == s[j]))
//                {
//                    dp[i][j] = true;
//                    sum++;
//                }
//            }
//        }
//        return sum;
//    }
//};


//class Solution {
//public:
//    int countSubstrings(string s) {
//        int n = s.size();
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            res++;
//            int l = i, r = i;
//            // 拓展中心
//            while (r < n - 1 && s[r] == s[r + 1])
//            {
//                res++;
//                r++;
//            }
//            while (l > 0 && r < n - 1 && s[l - 1] == s[r + 1])
//            {
//                res++;
//                l--;
//                r++;
//            }
//        }
//        return res;
//    }
//};

//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = s.size();
//        if (n == 1) return s;
//        string ans;
//        ans += s[0];
//        for (int i = 0; i < n; i++)
//        {
//            int l = i, r = i;
//            while (r < n - 1 && s[r] == s[r + 1])
//            {
//                r++;
//                if (r - l + 1 > ans.size())
//                {
//                    ans = s.substr(l, r - l + 1);
//                }
//            }
//            while (l > 0 && r < n + 1 && s[l - 1] == s[r + 1])
//            {
//                l--;
//                r++;
//                if (r - l + 1 > ans.size())
//                {
//                    ans = s.substr(l, r - l + 1);
//                }
//            }
//        }
//        return ans;
//    }
//};

// 回文串分割 IV
//class Solution {
//public:
//    bool checkPartitioning(string s) {
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j] && (j - i < 2 || dp[i + 1][j - 1]))
//                {
//                    dp[i][j] = true;
//                }
//            }
//        }
//        for (int i = 1; i < n - 1; i++)
//        {
//            for (int j = i; j < n - 1; j++)
//            {
//                if (dp[0][i - 1] && dp[i][j] && dp[j + 1][n - 1])
//                {
//                    return true;
//                }
//            }
//        }
//        return false;
//    }
//};


// 分割回文串 II
//class Solution {
//public:
//    int minCut(string s) {
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j] && (j - i < 2 || dp[i + 1][j - 1]))
//                {
//                    dp[i][j] = true;
//                }
//            }
//        }
//        vector<int> f(n, INT_MAX);
//        for (int i = 0; i < n; i++)
//        {
//            if (dp[0][i])
//            {
//                f[i] = 0;
//                continue;
//            }
//            for (int j = 1; j <= i; j++)
//            {
//                if (dp[j][i])
//                {
//                    f[i] = min(f[i], f[j - 1] + 1);
//                }
//            }
//        }
//        return f[n - 1];
//    }
//};