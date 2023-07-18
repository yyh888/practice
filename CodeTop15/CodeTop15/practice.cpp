// 快排
//class Solution {
//public:
//    void QuickSort(vector<int>& nums, int begin, int end)
//    {
//        if (begin >= end) return;
//        int i = begin - 1, j = end + 1;
//        int idx = begin + (rand() % (end - begin + 1));
//        int key = nums[idx];
//        while (i < j)
//        {
//            do i++; while (nums[i] < key);
//            do j--; while (nums[j] > key);
//            if (i < j) swap(nums[i], nums[j]);
//        }
//        QuickSort(nums, begin, j);
//        QuickSort(nums, j + 1, end);
//    }
//
//    vector<int> sortArray(vector<int>& nums) {
//        QuickSort(nums, 0, nums.size() - 1);
//        return nums;
//    }
//};


// 括号生成
//class Solution {
//public:
//    vector<string> res;
//    int l = 0, r = 0;
//
//    void dfs(int l, int r, int n, string tmp)
//    {
//        if (r > l || r > n || l > n) return;
//        if (l == r && l == n)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        tmp += '(';
//        dfs(l + 1, r, n, tmp);
//        tmp.pop_back();
//        tmp += ')';
//        dfs(l, r + 1, n, tmp);
//        tmp.pop_back();
//    }
//
//    vector<string> generateParenthesis(int n) {
//        string tmp;
//        dfs(l, r, n, tmp);
//        return res;
//    }
//};


// 将有序数组转换为二叉搜索树
//class Solution {
//public:
//    TreeNode* dfs(vector<int>& nums, int begin, int end)
//    {
//        if (begin > end) return nullptr;
//        int mid = (begin + end) >> 1;
//        TreeNode* root = new TreeNode(nums[mid]);
//        root->left = dfs(nums, begin, mid - 1);
//        root->right = dfs(nums, mid + 1, end);
//        return root;
//    }
//
//    TreeNode* sortedArrayToBST(vector<int>& nums) {
//        return dfs(nums, 0, nums.size() - 1);
//    }
//};