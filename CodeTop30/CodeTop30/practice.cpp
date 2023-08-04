// 打家劫舍
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n + 1);
//        dp[1] = nums[0];
//        for (int i = 2; i <= n; i++)
//        {
//            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1]);
//        }
//        return dp[n];
//    }
//};


//二叉树的完全性检验
//class Solution {
//public:
//    bool isCompleteTree(TreeNode* root) {
//        queue<TreeNode*> qq;
//        qq.push(root);
//        int levelSize = 1;
//        bool flag = false;
//        while (qq.size())
//        {
//            while (levelSize--)
//            {
//                TreeNode* tmp = qq.front();
//                qq.pop();
//                if (tmp == nullptr)
//                {
//                    flag = true;
//                    continue;
//                }
//                if (flag) return false;
//                qq.push(tmp->left);
//                qq.push(tmp->right);
//            }
//            levelSize = qq.size();
//        }
//        return true;
//    }
//};


// 移掉 K 位数字
//class Solution {
//public:
//    string removeKdigits(string num, int k) {
//        int n = num.size();
//        if (n == k) return "0";
//        deque<char> dq;
//        for (int i = 0; i < n; i++)
//        {
//            while (k && dq.size() && num[i] < dq.back())
//            {
//                dq.pop_back();
//                k--;
//            }
//            dq.push_back(num[i]);
//        }
//        while (k--)
//        {
//            dq.pop_back();
//        }
//        if (dq.empty()) return "0";
//        while (dq.size() > 1 && dq.front() == '0') dq.pop_front();
//        string res;
//        while (dq.size())
//        {
//            res += dq.front();
//            dq.pop_front();
//        }
//        return res;
//    }
//};