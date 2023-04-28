// 和大于等于 target 的最短子数组
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int n = nums.size();
//        vector<int> v(n + 1);
//
//        for (int i = 1; i <= n; i++)
//        {
//            v[i] = v[i - 1] + nums[i - 1];
//        }
//        int minLen = n + 1;
//        for (int i = 1; i <= n; i++)
//        {
//            int d = v[i] - target;
//            int l = 0, r = i - 1;
//            while (l < r)
//            {
//                int mid = (l + r + 1) >> 1;
//                if (v[mid] <= d)
//                {
//                    l = mid;
//                }
//                else
//                {
//                    r = mid - 1;
//                }
//            }
//            if (v[l] <= d)
//            {
//                minLen = min(minLen, i - r);
//            }
//        }
//        if (minLen == n + 1) return 0;
//        return minLen;
//    }
//};


//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int n = nums.size();
//        int sum = 0;
//        int l = 0, r = 0;
//        int minLen = n + 1;
//        while (r <= n)
//        {
//            while (l < r && sum >= target)
//            {
//                minLen = min(minLen, r - l);
//                sum -= nums[l];
//                l++;
//            }
//            if (r < n) sum += nums[r];
//            r++;
//        }
//        return minLen == n + 1 ? 0 : minLen;
//    }
//};


// 乘积小于 K 的子数组
//class Solution {
//public:
//    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//        int n = nums.size();
//        int l = 0, r = 0, mul = 1;
//        int cnt = 0;
//        if (k <= 1) return 0;
//        while (r < n)
//        {
//            mul *= nums[r];
//            while (mul >= k)
//            {
//                mul /= nums[l];
//                l++;
//            }
//
//            cnt += (r - l + 1);
//            r++;
//        }
//        return cnt;
//    }
//};


// 和为 k 的子数组
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        unordered_map<int, int> hash;
//        hash[0] = 1;
//        int n = nums.size();
//        int sum = 0;
//        int cnt = 0;
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//            cnt += hash[sum - k];
//            hash[sum]++;
//        }
//        return cnt;
//    }
//};


// 0 和 1 个数相同的子数组
//class Solution {
//public:
//    int findMaxLength(vector<int>& nums) {
//        int n = nums.size();
//        unordered_map<int, int> hash;
//        int sum = 0;
//        hash[0] = -1;
//        int maxLen = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] == 0)
//            {
//                sum--;
//            }
//            else
//            {
//                sum++;
//            }
//            if (hash.count(sum))
//            {
//                int pre = hash[sum];
//                maxLen = max(maxLen, i - pre);
//            }
//            else
//            {
//                hash[sum] = i;
//            }
//        }
//        return maxLen;
//    }
//};

// 二维子矩阵的和
//class NumMatrix {
//public:
//    vector<vector<int>> vv;
//
//    NumMatrix(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        vv.resize(n + 1);
//        for (int i = 0; i < n + 1; i++)
//        {
//            vv[i].resize(m + 1);
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                vv[i + 1][j + 1] = vv[i][j + 1] + vv[i + 1][j] - vv[i][j] + matrix[i][j];
//            }
//        }
//    }
//
//    int sumRegion(int row1, int col1, int row2, int col2) {
//        int ans = vv[row2 + 1][col2 + 1] - vv[row1][col2 + 1] - vv[row2 + 1][col1] + vv[row1][col1];
//        return ans;
//    }
//};

