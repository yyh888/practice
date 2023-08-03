// 最小路径和
//class Solution {
//public:
//    int minPathSum(vector<vector<int>>& grid) {
//        int n = grid.size(), m = grid[0].size();
//        vector<vector<int>> dp = grid;
//        for (int j = 1; j < m; j++)
//        {
//            dp[0][j] += dp[0][j - 1];
//        }
//        for (int i = 1; i < n; i++)
//        {
//            dp[i][0] += dp[i - 1][0];
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                dp[i][j] += min(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};


// 二叉树的直径
//class Solution {
//public:
//    int Max = 0;
//
//    int MaxLen(TreeNode* root)
//    {
//        if (root == nullptr) return 0;
//        int left = MaxLen(root->left);
//        int right = MaxLen(root->right);
//        Max = max(Max, left + right);
//        return left > right ? left + 1 : right + 1;
//    }
//
//    int diameterOfBinaryTree(TreeNode* root) {
//        MaxLen(root);
//        return Max;
//    }
//};


// 字符串相乘
//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        if (num1 == "0" || num2 == "0") return "0";
//        int n = num1.size(), m = num2.size();
//        vector<int> nums(n + m);
//        for (int i = n - 1; i >= 0; i--)
//        {
//            int x = num1[i] - '0';
//            for (int j = m - 1; j >= 0; j--)
//            {
//                int y = num2[j] - '0';
//                nums[i + j + 1] += x * y;
//            }
//        }
//        for (int i = n + m - 1; i >= 1; i--)
//        {
//            nums[i - 1] += nums[i] / 10;
//            nums[i] %= 10;
//        }
//        string res;
//        int i = nums[0] == 0 ? 1 : 0;
//        for (; i < n + m; i++)
//        {
//            res += nums[i] + '0';
//        }
//        return res;
//    }
//};