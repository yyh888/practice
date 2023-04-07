// 最长回文子串
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = s.size();
//        if (n < 2)
//        {
//            return s;
//        }
//        vector<vector<int>> dp(n, vector<int>(n));
//        int maxlen = 1, begin = 0;
//        for (int i = 0; i < n; i++)
//        {
//            dp[i][i] = 1;
//        }
//        for (int l = 2; l <= n; l++)
//        {
//            for (int i = 0; i < n; i++)
//            {
//                int j = i + l - 1;
//                if (j >= n)
//                {
//                    break;
//                }
//                if (s[i] == s[j])
//                {
//                    if (j - i < 3)
//                    {
//                        dp[i][j] = 1;
//                    }
//                    else
//                    {
//                        dp[i][j] = dp[i + 1][j - 1];
//                    }
//                }
//                if (dp[i][j] && j - i + 1 > maxlen)
//                {
//                    maxlen = j - i + 1;
//                    begin = i;
//                }
//            }
//        }
//        return s.substr(begin, maxlen);
//    }
//};


// 盛最多水的容器
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int i = 0, j = height.size() - 1;
//        int res = 0;
//        while (i < j)
//        {
//            res = max(res, min(height[i], height[j]) * (j - i));
//            if (height[i] < height[j])
//            {
//                i++;
//            }
//            else
//            {
//                j--;
//            }
//        }
//        return res;
//    }
//};


// N 字形变换
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        if (numRows < 2)
//        {
//            return s;
//        }
//        vector<string> v(numRows);
//        int i = 0, flag = -1;
//        for (char ch : s)
//        {
//            v[i] += ch;
//            if (i == 0 || i == numRows - 1) flag = -flag;
//            i += flag;
//        }
//        string ans;
//        for (int i = 0; i < v.size(); i++)
//        {
//            ans += v[i];
//        }
//        return ans;
//    }
//};