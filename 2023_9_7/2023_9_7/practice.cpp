//class Solution {
//public:
//    unordered_map<long long, int> hash;
//    long long sum = 0;
//    int cnt = 0;
//
//    void dfs(TreeNode* root, int target)
//    {
//        if (root == nullptr) return;
//        sum += root->val;
//        cnt += hash[sum - target];
//        hash[sum]++;
//        dfs(root->left, target);
//        dfs(root->right, target);
//        hash[sum]--;
//        sum -= root->val;
//    }
//
//    int pathSum(TreeNode* root, int targetSum) {
//        hash[0] = 1;
//        dfs(root, targetSum);
//        return cnt;
//    }
//};



//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> tmp;
//
//    void dfs(vector<int>& nums, int i)
//    {
//        if (i == nums.size())
//        {
//            res.push_back(tmp);
//            return;
//        }
//        // 加
//        tmp.push_back(nums[i]);
//        dfs(nums, i + 1);
//        tmp.pop_back();
//        // 不加
//        dfs(nums, i + 1);
//    }
//
//    vector<vector<int>> subsets(vector<int>& nums) {
//        dfs(nums, 0);
//
//        return res;
//    }
//};


//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> tmp;
//
//    void dfs(bool preflag, vector<int>& nums, int i)
//    {
//        if (i == nums.size())
//        {
//            res.push_back(tmp);
//            return;
//        }
//        // 不加
//        dfs(false, nums, i + 1);
//        // 加
//        if (!preflag && i > 0 && nums[i] == nums[i - 1]) return;
//        tmp.push_back(nums[i]);
//        dfs(true, nums, i + 1);
//        tmp.pop_back();
//    }
//
//    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        dfs(false, nums, 0);
//        return res;
//    }
//};


