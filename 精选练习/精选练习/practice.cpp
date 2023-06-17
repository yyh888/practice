// x 的平方根
//class Solution {
//public:
//    int mySqrt(int x) {
//        int l = 0, r = x;
//        while (l < r)
//        {
//            int mid = l + (r - l) / 2 + 1;
//            if ((long long)mid * mid <= x)
//            {
//                l = mid;
//            }
//            else
//            {
//                r = mid - 1;
//            }
//        }
//        return l;
//    }
//};


// 矩阵置零
//class Solution {
//public:
//    void setZeroes(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        vector<int> row(n), col(m);
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (matrix[i][j] == 0)
//                {
//                    row[i] = 1;
//                    col[j] = 1;
//                }
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (row[i] || col[j])
//                {
//                    matrix[i][j] = 0;
//                }
//            }
//        }
//    }
//};


//class Solution {
//public:
//    void setZeroes(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        bool col_flag = false, row_flag = false;
//        for (int i = 0; i < n; i++)
//        {
//            if (matrix[i][0] == 0)
//            {
//                col_flag = true;
//                break;
//            }
//        }
//        for (int j = 0; j < m; j++)
//        {
//            if (matrix[0][j] == 0)
//            {
//                row_flag = true;
//                break;
//            }
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (matrix[i][j] == 0)
//                {
//                    matrix[i][0] = matrix[0][j] = 0;
//                }
//            }
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (matrix[i][0] == 0 || matrix[0][j] == 0)
//                {
//                    matrix[i][j] = 0;
//                }
//            }
//        }
//        if (row_flag) for (int j = 0; j < m; j++) matrix[0][j] = 0;
//        if (col_flag) for (int i = 0; i < n; i++) matrix[i][0] = 0;
//    }
//};


// 二叉树的锯齿形层序遍历
//class Solution {
//public:
//    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//        queue<TreeNode*> qq;
//        int levelSize = 1;
//        qq.push(root);
//        vector<vector<int>> vv;
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
//            if (flag == -1) reverse(v.begin(), v.end());
//            vv.push_back(v);
//            levelSize = qq.size();
//            flag *= -1;
//        }
//        vv.pop_back();
//        return vv;
//    }
//};