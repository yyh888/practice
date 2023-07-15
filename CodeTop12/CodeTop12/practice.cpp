// 求根节点到叶节点数字之和
//class Solution {
//public:
//    int sum = 0;
//
//    void dfs(TreeNode* root, int ret)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        ret = ret * 10 + root->val;
//        if (root->left == nullptr && root->right == nullptr)
//        {
//            sum += ret;
//            return;
//        }
//        dfs(root->left, ret);
//        dfs(root->right, ret);
//    }
//
//    int sumNumbers(TreeNode* root) {
//        dfs(root, 0);
//        return sum;
//    }
//};


// 求根节点到叶节点数字之和
//class Solution {
//public:
//    typedef pair<TreeNode*, int> PTI;
//    int sumNumbers(TreeNode* root) {
//        queue<PTI> qq;
//        qq.push({ root, 0 });
//        int levelSize = 1;
//        int res = 0;
//        while (qq.size())
//        {
//            while (levelSize--)
//            {
//                auto [root, ret] = qq.front();
//                qq.pop();
//                if (root)
//                {
//                    ret = ret * 10 + root->val;
//                    if (root->left == nullptr && root->right == nullptr)
//                    {
//                        res += ret;
//                    }
//                    if (root->left) qq.push({ root->left, ret });
//                    if (root->right)  qq.push({ root->right, ret });
//                }
//            }
//            levelSize = qq.size();
//        }
//        return res;
//    }
//};


// 合并区间
//class Solution {
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        sort(intervals.begin(), intervals.end());
//        vector<vector<int>> vv;
//        int n = intervals.size();
//        int l = intervals[0][0], r = intervals[0][1];
//        for (int i = 0; i < n - 1; i++)
//        {
//            if (r < intervals[i + 1][0])
//            {
//                vv.push_back({ l, r });
//                l = intervals[i + 1][0];
//                r = intervals[i + 1][1];
//            }
//            else
//            {
//                r = max(r, intervals[i + 1][1]);
//            }
//        }
//        vv.push_back({ l, r });
//        return vv;
//    }
//};


// x 的平方根
//class Solution {
//public:
//    int mySqrt(int x) {
//        int l = 0, r = x;
//        while (l < r)
//        {
//            int mid = l + (r - l) / 2 + 1;
//            if ((long long)mid * mid > x) r = mid - 1;
//            else l = mid;
//        }
//        return l;
//    }
//};


//class Solution {
//public:
//    int mySqrt(int x) {
//        double n = 1e-10;
//        double l = 0, r = x;
//        while (r - l > 1e-10)
//        {
//            double mid = l + (r - l) / 2;
//            if (x / mid < mid) r = mid - n;
//            else l = mid + n;
//        }
//        printf("%.10lf", l);
//        return 0;
//    }
//};