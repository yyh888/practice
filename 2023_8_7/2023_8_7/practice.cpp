// 删除有序数组中的重复项
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 0) return 0;
//        int j = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] != nums[j])
//            {
//                nums[++j] = nums[i];
//            }
//        }
//        return j + 1;
//    }
//};


// 两数相除
//class Solution {
//public:
//    typedef long long LL;
//
//    int divide(int dividend, int divisor) {
//        if (dividend == 0) return 0;
//        if (divisor == 1) return dividend;
//        if (divisor == -1)
//        {
//            if (dividend > INT_MIN)
//            {
//                return -dividend;
//            }
//            return INT_MAX;
//        }
//        LL a = dividend, b = divisor;
//        int op = 1;
//        if ((a > 0 && b < 0) || (a < 0 && b > 0)) op = -1;
//        a = abs(a), b = abs(b);
//        LL res = div(a, b);
//        if (op > 0) return res >= INT_MAX ? INT_MAX : res;
//        return -res;
//    }
//
//    LL div(LL a, LL b)
//    {
//        if (a < b) return 0;
//        LL tb = b;
//        LL cnt = 1;
//        while ((tb + tb) <= a)
//        {
//            cnt <<= 1;
//            tb = tb + tb;
//        }
//        return cnt + div(a - tb, b);
//    }
//};


// 四数之和
//class Solution {
//public:
//    typedef long long LL;
//    vector<vector<int>> fourSum(vector<int>& nums, int target) {
//        int n = nums.size();
//        sort(nums.begin(), nums.end());
//        vector<vector<int>> res;
//        for (int i = 0; i < n - 3; i++)
//        {
//            if (i > 0 && nums[i] == nums[i - 1]) continue;
//            for (int j = i + 1; j < n - 2; j++)
//            {
//                if (j != i + 1 && nums[j] == nums[j - 1]) continue;
//                LL ret = nums[i] + nums[j];;
//                int l = j + 1, r = n - 1;
//                while (l < r)
//                {
//                    if ((LL)(ret + nums[l] + nums[r]) > target)
//                    {
//                        r--;
//                    }
//                    else if ((LL)(ret + nums[l] + nums[r]) < target)
//                    {
//                        l++;
//                    }
//                    else
//                    {
//                        res.push_back({ nums[i], nums[j], nums[l], nums[r] });
//                        l++;
//                        r--;
//                        while (l < r && nums[l] == nums[l - 1]) l++;
//                        while (l < r && nums[r] == nums[r + 1]) r--;
//                    }
//                }
//            }
//        }
//        return res;
//    }
//};


// 转置矩阵
//class Solution {
//public:
//    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        vector<vector<int>> res(m, vector<int>(n));
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                res[j][i] = matrix[i][j];
//            }
//        }
//        return res;
//    }
//};


