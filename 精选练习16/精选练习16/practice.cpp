// 矩阵中的最长递增路径
//class Solution {
//public:
//    int dx[4] = { 0, -1, 0, 1 };
//    int dy[4] = { -1, 0, 1, 0 };
//    int n, m;
//    int res = 0;
//    vector<vector<int>> memo;
//
//    int dfs(vector<vector<int>>& vv, int i, int j)
//    {
//        if (memo[i][j]) return memo[i][j];
//        memo[i][j] = 1;
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < n && y >= 0 && y < m && vv[x][y] > vv[i][j])
//            {
//                memo[i][j] = max(memo[i][j], dfs(vv, x, y) + 1);
//            }
//        }
//        return memo[i][j];
//    }
//
//    int longestIncreasingPath(vector<vector<int>>& matrix) {
//        n = matrix.size(), m = matrix[0].size();
//        memo.resize(n, vector<int>(m, 0));
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                dfs(matrix, i, j);
//                res = max(res, memo[i][j]);
//            }
//        }
//        return res;
//    }
//};


// 递增的三元子序列
//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//        int a = INT_MAX, b = INT_MAX;
//        for (auto& e : nums)
//        {
//            if (e <= a) a = e;
//            else if (e <= b) b = e;
//            else return true;
//        }
//        return false;
//    }
//};


//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> leftMin(n), rihghtMax(n);
//        int Min = nums[0], Max = nums[n - 1];
//        for (int i = 0; i < n; i++)
//        {
//            int j = n - i - 1;
//            Min = min(Min, nums[i]);
//            Max = max(Max, nums[j]);
//            leftMin[i] = Min;
//            rihghtMax[j] = Max;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] > leftMin[i] && nums[i] < rihghtMax[i])
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};


// 两整数之和
//class Solution {
//public:
//    int getSum(int a, int b) {
//        while (b)
//        {
//            int c = (unsigned long long)(a & b) << 1;
//            a = a ^ b;
//            b = c;
//        }
//        return a;
//    }
//};


