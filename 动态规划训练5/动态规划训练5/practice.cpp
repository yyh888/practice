// 乘积最大子数组
//class Solution {
//public:
//    int maxProduct(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n), g(n);
//        f[0] = g[0] = nums[0];
//        int ret = nums[0];
//        for (int i = 1; i < n; i++)
//        {
//            f[i] = max(nums[i], max(f[i - 1] * nums[i], g[i - 1] * nums[i]));
//            g[i] = min(nums[i], min(f[i - 1] * nums[i], g[i - 1] * nums[i]));
//            ret = max(ret, f[i]);
//        }
//        return ret;
//    }
//};


//// 乘积为正数的最长子数组长度
//class Solution {
//public:
//    int getMaxLen(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n + 1), g(n + 1);
//        int ret = INT_MIN;
//        for (int i = 1; i <= n; i++)
//        {
//            if (nums[i - 1] > 0)
//            {
//                f[i] = f[i - 1] + 1;
//                if (g[i - 1]) g[i] = g[i - 1] + 1;
//            }
//            else if (nums[i - 1] < 0)
//            {
//                if (g[i - 1]) f[i] = g[i - 1] + 1;
//                g[i] = f[i - 1] + 1;
//            }
//            else
//            {
//                f[i] = g[i] = 0;
//            }
//            ret = max(ret, f[i]);
//        }
//        return ret;
//    }
//};


// 等差数列划分
//class Solution {
//public:
//    int numberOfArithmeticSlices(vector<int>& nums) {
//        int n = nums.size();
//        if (n < 3) return 0;
//        vector<int> dp(n);
//        int sum = 0;
//        for (int i = 2; i < n; i++)
//        {
//            if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
//            {
//                dp[i] = dp[i - 1] + 1;
//            }
//            sum += dp[i];
//        }
//        return sum;
//    }
//};


// 最长湍流子数组
//class Solution {
//public:
//    int maxTurbulenceSize(vector<int>& arr) {
//        int n = arr.size();
//        if (n == 1) return 1;
//        vector<int> f(n, 1), g(n, 1);
//        int ret = 1;
//        for (int i = 1; i < n; i++)
//        {
//            if (arr[i] < arr[i - 1])
//            {
//                f[i] = g[i - 1] + 1;
//            }
//            else if (arr[i] > arr[i - 1])
//            {
//                g[i] = f[i - 1] + 1;
//            }
//            ret = max(ret, max(f[i], g[i]));
//        }
//        return ret;
//    }
//};


// 单词拆分
//class Solution {
//public:
//    bool wordBreak(string s, vector<string>& wordDict) {
//        int n = s.size();
//        vector<bool> dp(n + 1, false);
//        dp[0] = true;
//        for (int i = 0; i < n; i++)
//        {
//            if (dp[i])
//            {
//                for (auto& str : wordDict)
//                {
//                    int len = str.size();
//                    if (s.substr(i, len) == str)
//                    {
//                        dp[i + len] = true;
//                    }
//                }
//            }
//        }
//        return dp[n];
//    }
//};


// 环绕字符串中唯一的子字符串
//class Solution {
//public:
//    int findSubstringInWraproundString(string s) {
//        int n = s.size();
//        vector<int> dp(n, 1);
//        int sum = 0;
//        int hash[26] = { 0 };
//        for (int i = 1; i < n; i++)
//        {
//            if (s[i] == s[i - 1] + 1 || (s[i] == 'a' && s[i - 1] == 'z'))
//            {
//                dp[i] += dp[i - 1];
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            hash[s[i] - 'a'] = max(hash[s[i] - 'a'], dp[i]);
//        }
//        for (int i = 0; i < 26; i++)
//        {
//            sum += hash[i];
//        }
//        return sum;
//    }
//};

