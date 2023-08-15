//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n, false));
//        int idx = 0;
//        int len = 0;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j] && (j - i <= 1 || dp[i + 1][j - 1]))
//                {
//                    dp[i][j] = true;
//                    if (j - i + 1 > len)
//                    {
//                        idx = i;
//                        len = j - i + 1;
//                    }
//                }
//            }
//        }
//        return s.substr(idx, len);
//    }
//};


//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = s.size();
//        int len = 1;
//        int idx = 0;
//        for (int i = 0; i < n; i++)
//        {
//            int l = i, r = i;
//            while (r + 1 < n && s[i] == s[r + 1])
//            {
//                r++;
//                if (r - i + 1 > len)
//                {
//                    len = r - i + 1;
//                    idx = i;
//                }
//            }
//            while (r + 1 < n && l > 0 && s[r + 1] == s[l - 1])
//            {
//                l--;
//                r++;
//                if (r - l + 1 > len)
//                {
//                    len = r - l + 1;
//                    idx = l;
//                }
//            }
//        }
//        return s.substr(idx, len);
//    }
//};


