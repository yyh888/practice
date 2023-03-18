// 二叉搜索树的第k大节点
//class Solution {
//public:
//    int res = 0;
//
//    void dfs(TreeNode* root, int& k)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        dfs(root->right, k);
//        if (--k == 0)
//        {
//            res = root->val;
//            return;
//        }
//        dfs(root->left, k);
//    }
//
//    int kthLargest(TreeNode* root, int k) {
//        dfs(root, k);
//        return res;
//    }
//};


// 二叉树的深度
//class Solution {
//public:
//    int maxDepth(TreeNode* root) {
//        if (!root)
//        {
//            return 0;
//        }
//        int left = maxDepth(root->left);
//        int right = maxDepth(root->right);
//        if (left > right)
//        {
//            return left + 1;
//        }
//        else
//        {
//            return right + 1;
//        }
//    }
//};


//class Solution {
//public:
//    int depth(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        int left = depth(root->left);
//        int right = depth(root->right);
//        return left > right ? left + 1 : right + 1;
//    }
//
//    bool isBalanced(TreeNode* root) {
//        if (root == nullptr)
//        {
//            return true;
//        }
//        if (abs(depth(root->left) - depth(root->right)) > 1)
//        {
//            return false;
//        }
//        return isBalanced(root->left) && isBalanced(root->right);
//    }
//};

//class Solution {
//public:
//    bool isBalanced(TreeNode* root) {
//        return recur(root) != -1;
//    }
//
//    int recur(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        int left = recur(root->left);
//        if (left == -1)
//        {
//            return -1;
//        }
//        int right = recur(root->right);
//        if (right == -1)
//        {
//            return -1;
//        }
//        return abs(left - right) > 1 ? -1 : max(left, right) + 1;
//    }
//};


// 和为s的两个数字 
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        vector<int> v;
//        int l = 0, r = nums.size() - 1;
//        while (l <= r)
//        {
//            int sum = nums[l] + nums[r];
//            if (sum < target)
//            {
//                l++;
//            }
//            else if (sum > target)
//            {
//                r--;
//            }
//            else
//            {
//                v.push_back(nums[l]);
//                v.push_back(nums[r]);
//                break;
//            }
//        }
//        return v;
//    }
//};