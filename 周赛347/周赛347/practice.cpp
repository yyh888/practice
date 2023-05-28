// 移除字符串中的尾随零
//class Solution {
//public:
//    string removeTrailingZeros(string num) {
//        while (num.size() > 1 && num.back() == '0')
//        {
//            num.pop_back();
//        }
//        return num;
//    }
//};


// 对角线上不同值的数量差
//class Solution {
//public:
//    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
//        int n = grid.size(), m = grid[0].size();
//        vector<vector<int>> ans(n, vector<int>(m));
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                set<int> left, right;
//                // 左上
//                int l = i - 1, r = j - 1;
//                while (l >= 0 && r >= 0)
//                {
//                    left.insert(grid[l][r]);
//                    l--;
//                    r--;
//                }
//                // 右下
//                l = i + 1, r = j + 1;
//                while (l <= n - 1 && r <= m - 1)
//                {
//                    right.insert(grid[l][r]);
//                    l++;
//                    r++;
//                }
//                ans[i][j] = abs((int)left.size() - (int)right.size());
//            }
//        }
//        return ans;
//    }
//};


