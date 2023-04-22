// Â·¾¶×ÜºÍ III
//class Solution {
//public:
//    int dfs(TreeNode* root, long long targetSum)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        int ret = 0;
//        if (targetSum - root->val == 0)
//        {
//            ret++;
//        }
//        ret += dfs(root->left, targetSum - root->val);
//        ret += dfs(root->right, targetSum - root->val);
//        return ret;
//    }
//
//    int pathSum(TreeNode* root, int targetSum) {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        int res = dfs(root, targetSum);
//        res += pathSum(root->left, targetSum);
//        res += pathSum(root->right, targetSum);
//        return res;
//    }
//};


