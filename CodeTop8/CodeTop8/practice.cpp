// 下一个排列
//class Solution {
//public:
//    void QuickSort(vector<int>& nums, int begin, int end)
//    {
//        if (begin >= end) return;
//        int i = begin - 1, j = end + 1;
//        //int keyIdx = begin + (rand() % (end - begin + 1));
//        int key = nums[begin];
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
//    void nextPermutation(vector<int>& nums) {
//        int n = nums.size();
//        int i = n - 2;
//        for (; i >= 0; i--)
//        {
//            if (nums[i + 1] > nums[i])
//            {
//                break;
//            }
//        }
//        if (i == -1)
//        {
//            reverse(nums.begin(), nums.end());
//            return;
//        }
//        else
//        {
//            for (int j = n - 1; j > i; j--)
//            {
//                if (nums[j] > nums[i])
//                {
//                    swap(nums[i], nums[j]);
//                    break;
//                }
//            }
//            QuickSort(nums, i + 1, n - 1);
//        }
//    }
//};


// 最长递增子序列
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n, 1);
//        vector<int> g(n);
//        for (int i = 0; i < n; i++) g[i] = i;
//        int end = 0;
//        int MaxLen = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (nums[j] < nums[i])
//                {
//                    g[i] = j;
//                    end = i;
//                    dp[i] = max(dp[i], 1 + dp[j]);
//                    MaxLen = max(MaxLen, dp[i]);
//                }
//            }
//        }
//        vector<int> ans(MaxLen);
//        int i = 0;
//        int j;
//        for (j = end; g[j] != j; j = g[j])
//        {
//            ans[i++] = nums[j];
//        }
//        ans[i++] = nums[j];
//        reverse(ans.begin(), ans.end());
//        for (auto& e : ans)
//        {
//            cout << e << " ";
//        }
//        return MaxLen;
//    }
//};


// 二叉树的右视图
//class Solution {
//public:
//    vector<int> res;
//
//    void dfs(TreeNode* root, int lev)
//    {
//        if (!root) return;
//        if (res.size() < lev) res.push_back(root->val);
//        dfs(root->right, lev + 1);
//        dfs(root->left, lev + 1);
//    }
//
//    vector<int> rightSideView(TreeNode* root) {
//        dfs(root, 1);
//        return res;
//    }
//};