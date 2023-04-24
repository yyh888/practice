// 把二叉搜索树转换为累加树
//class Solution {
//public:
//    int sumright = 0;
//    TreeNode* convertBST(TreeNode* root) {
//        if (root == nullptr)
//        {
//            return nullptr;
//        }
//        convertBST(root->right);
//        sumright += root->val;
//        root->val = sumright;
//        convertBST(root->left);
//        return root;
//    }
//};


//class Solution {
//public:
//    TreeNode* convertBST(TreeNode* root) {
//        dfs(root, 0);
//        return root;
//    }
//
//    int dfs(TreeNode* root, int num)
//    {
//        if (root == nullptr)
//        {
//            return num;
//        }
//        root->val += dfs(root->right, num);
//        num = root->val;
//        return dfs(root->left, num);
//    }
//};

// 二叉树的直径
//class Solution {
//public:
//    int Max = 0;
//
//    int maxLen(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        int left = maxLen(root->left);
//        int right = maxLen(root->right);
//        return left > right ? left + 1 : right + 1;
//    }
//
//    void dfs(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        int left = maxLen(root->left);
//        int right = maxLen(root->right);
//        Max = max(Max, left + right);
//        dfs(root->left);
//        dfs(root->right);
//    }
//
//    int diameterOfBinaryTree(TreeNode* root) {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        dfs(root);
//        return Max;
//    }
//};

//
//class Solution {
//public:
//    int Max = 0;
//
//    int maxLen(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        int left = maxLen(root->left);
//        int right = maxLen(root->right);
//        Max = max(Max, left + right);
//        return left > right ? left + 1 : right + 1;
//    }
//
//
//    int diameterOfBinaryTree(TreeNode* root) {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        maxLen(root);
//        return Max;
//    }
//};


// 和为 K 的子数组
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        int n = nums.size();
//        unordered_map<int, int> hash;
//        int res = 0;
//        hash[0] = 1;
//        int sum = 0;
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//            res += hash[sum - k];
//            hash[sum]++;
//        }
//        return res;
//    }
//};


// 统计「优美子数组」
//class Solution {
//public:
//    int numberOfSubarrays(vector<int>& nums, int k) {
//        int n = nums.size();
//        int res = 0;
//        unordered_map<int, int> hash;
//        hash[0] = 1;
//        int sum = 0;
//        for (int i = 0; i < n; i++)
//        {
//            // 偶数为0,奇数为1
//            int ret = 0;
//            if (nums[i] % 2)
//            {
//                ret = 1;
//            }
//            sum += ret;
//            res += hash[sum - k];
//            hash[sum]++;
//        }
//        return res;
//    }
//};