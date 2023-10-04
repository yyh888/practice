//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n);
//        int r = 0;
//        for (int i = 0; i < n; i++)
//        {
//            int left = 0, right = r;
//            while (left < right)
//            {
//                int mid = (left + right) / 2;
//                if (nums[i] <= f[mid]) right = mid;
//                else left = mid + 1;
//            }
//            f[left] = nums[i];
//            if (left == r) r++;
//        }
//        return r;
//    }
//};


//class Solution {
//public:
//    int maxProfit(int k, vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> f(n, vector<int>(k + 1, -0x3f3f3f3f));// ÂòÈë
//        vector<vector<int>> g(n, vector<int>(k + 1, -0x3f3f3f3f));// Âô³ö
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j <= k; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//                if (j > 0)
//                {
//                    g[i][j] = max(g[i - 1][j], f[i - 1][j - 1] + prices[i]);
//                }
//                else
//                {
//                    g[i][j] = g[i - 1][j];
//                }
//            }
//        }
//        int res = 0;
//        for (int i = 0; i <= k; i++)
//        {
//            res = max(res, g[n - 1][i]);
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n);
//        int idx = 0;
//        for (int i = 0; i < n; i++)
//        {
//            int l = 0, r = idx;
//            while (l < r)
//            {
//                int mid = (l + r) / 2;
//                if (dp[mid] >= nums[i]) r = mid;
//                else l = mid + 1;
//            }
//            dp[l] = nums[i];
//            if (l == idx) idx++;
//            if (idx >= 3) return true;
//        }
//        return false;
//    }
//};


//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//        int n = nums.size();
//        int a = nums[0], b = INT_MAX;
//        for (int i = 1; i < n; i++)
//        {
//            if (nums[i] > b) return true;
//            if (nums[i] > a)
//            {
//                b = nums[i];
//            }
//            else
//            {
//                a = nums[i];
//            }
//        }
//        return false;
//    }
//};


//class Solution {
//public:
//    int findLengthOfLCIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n, 1);
//        int res = 1;
//        for (int i = 1; i < n; i++)
//        {
//            if (nums[i] > nums[i - 1])
//            {
//                dp[i] = dp[i - 1] + 1;
//            }
//            res = max(res, dp[i]);
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    int findLengthOfLCIS(vector<int>& nums) {
//        int n = nums.size();
//        int res = 1;
//        int cnt = 1;
//        for (int i = 1; i < n; i++)
//        {
//            if (nums[i] > nums[i - 1])
//            {
//                cnt++;
//            }
//            else
//            {
//                cnt = 1;
//            }
//            res = max(res, cnt);
//        }
//        return res;
//    }
//};


