// 最长定差子序列
//class Solution {
//public:
//    int longestSubsequence(vector<int>& arr, int difference) {
//        int n = arr.size();
//        unordered_map<int, int> hash;
//        hash[arr[0]] = 1;
//        int len = 1;
//        for (int i = 1; i < n; i++)
//        {
//            hash[arr[i]] = hash[arr[i] - difference] + 1;
//            len = max(len, hash[arr[i]]);
//        }
//        return len;
//    }
//};


// 最长的斐波那契子序列的长度
//class Solution {
//public:
//    int lenLongestFibSubseq(vector<int>& arr) {
//        int n = arr.size();
//        unordered_map<int, int> hash;
//        for (int i = 0; i < n; i++)
//        {
//            hash[arr[i]] = i;
//        }
//        vector<vector<int>> dp(n, vector<int>(n, 2));
//        int len = 2;
//        for (int j = 2; j < n; j++)
//        {
//            for (int i = 0; i < j; i++)
//            {
//                if (hash.count(arr[j] - arr[i]))
//                {
//                    if (hash[arr[j] - arr[i]] < i)
//                    {
//                        dp[i][j] = dp[hash[arr[j] - arr[i]]][i] + 1;
//                        len = max(len, dp[i][j]);
//                    }
//                }
//            }
//        }
//        if (len == 2) return 0;
//        return len;
//    }
//};


// 最长等差数列 
//class Solution {
//public:
//    int longestArithSeqLength(vector<int>& nums) {
//        int n = nums.size();
//        unordered_map<int, int> hash;
//        hash[nums[0]] = 0;
//        vector<vector<int>> dp(n, vector<int>(n, 2));
//        int len = 2;
//        for (int i = 1; i < n - 1; i++)
//        {
//            for (int j = i + 1; j < n; j++)
//            {
//                if (hash.count(nums[i] - (nums[j] - nums[i])))
//                {
//                    int a = hash[nums[i] - (nums[j] - nums[i])];
//                    if (a < i)
//                    {
//                        dp[i][j] = dp[a][i] + 1;
//                        len = max(len, dp[i][j]);
//                    }
//                }
//            }
//            hash[nums[i]] = i;
//        }
//        return len;
//    }
//};