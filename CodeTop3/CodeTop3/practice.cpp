// 二叉树的锯齿形层序遍历
//class Solution {
//public:
//    vector<vector<int>> res;
//
//    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//        int levelSize = 1;
//        queue<TreeNode*> qq;
//        qq.push(root);
//        int flag = 1;
//        while (qq.size())
//        {
//            vector<int> v;
//            while (levelSize--)
//            {
//                TreeNode* tmp = qq.front();
//                qq.pop();
//                if (tmp)
//                {
//                    v.push_back(tmp->val);
//                    qq.push(tmp->left);
//                    qq.push(tmp->right);
//                }
//            }
//            levelSize = qq.size();
//            if (flag == -1) reverse(v.begin(), v.end());
//            flag *= -1;
//            res.push_back(v);
//        }
//        res.pop_back();
//        return res;
//    }
//};


// 买卖股票的最佳时机
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        int minprice = INT_MAX, maxprice = 0;
//        for (int i = 0; i < n; i++)
//        {
//            maxprice = max(maxprice, prices[i] - minprice);
//            minprice = min(minprice, prices[i]);
//        }
//        return maxprice;
//    }
//};

// 买卖股票的最佳时机 II
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<int> dp1(n), dp2(n);
//        dp1[0] = -prices[0];
//        dp2[0] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            dp1[i] = max(dp1[i - 1], dp2[i - 1] - prices[i]);
//            dp2[i] = max(dp2[i - 1], dp1[i - 1] + prices[i]);
//        }
//        return dp2[n - 1];
//    }
//};


// 岛屿数量
//class Solution {
//public:
//    int n, m;
//    static int constexpr dx[] = { 0, -1, 0, 1 };
//    static int constexpr dy[] = { -1, 0, 1, 0 };
//
//    void dfs(vector<vector<char>>& v, int i, int j)
//    {
//        v[i][j] = '0';
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < n && y >= 0 && y < m && v[x][y] == '1')
//            {
//                dfs(v, x, y);
//            }
//        }
//    }
//
//    int numIslands(vector<vector<char>>& grid) {
//        n = grid.size(), m = grid[0].size();
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (grid[i][j] == '1')
//                {
//                    res++;
//                    dfs(grid, i, j);
//                }
//            }
//        }
//        return res;
//    }
//};


