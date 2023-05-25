// 最长递增子序列
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n, 1);
//        int len = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (nums[i] > nums[j])
//                {
//                    dp[i] = max(dp[i], dp[j] + 1);
//                }
//                len = max(len, dp[i]);
//            }
//        }
//        return len;
//    }
//};


// 摆动序列
//class Solution {
//public:
//    int wiggleMaxLength(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n, 1), g(n, 1);
//        int len = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (nums[i] > nums[j])
//                {
//                    f[i] = max(f[i], g[j] + 1);
//                }
//                else if (nums[i] < nums[j])
//                {
//                    g[i] = max(g[i], f[j] + 1);
//                }
//                len = max(len, max(f[i], g[i]));
//            }
//        }
//        return len;
//    }
//};


// 最长递增子序列的个数
//class Solution {
//public:
//    int findNumberOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> len(n, 1), cnt(n, 1);
//        int retlen = 1, retcount = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (nums[i] > nums[j])
//                {
//                    if (len[j] + 1 == len[i])
//                    {
//                        cnt[i] += cnt[j];
//                    }
//                    else if (len[j] + 1 > len[i])
//                    {
//                        cnt[i] = cnt[j];
//                        len[i] = len[j] + 1;
//                    }
//                }
//            }
//            if (retlen == len[i])
//            {
//                retcount += cnt[i];
//            }
//            else if (len[i] > retlen)
//            {
//                retcount = cnt[i];
//                retlen = len[i];
//            }
//        }
//        return retcount;
//    }
//};


// 最长数对链
//class Solution {
//public:
//    int findLongestChain(vector<vector<int>>& pairs) {
//        sort(pairs.begin(), pairs.end());
//        int n = pairs.size();
//        vector<int> dp(n, 1);
//        int ret = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (pairs[i][0] > pairs[j][1])
//                {
//                    dp[i] = max(dp[i], dp[j] + 1);
//                }
//            }
//            ret = max(ret, dp[i]);
//        }
//        return ret;
//    }
//};