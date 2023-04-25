// 最短无序连续子数组
//class Solution {
//public:
//    int findUnsortedSubarray(vector<int>& nums) {
//        vector<int> tmp(nums);
//        sort(tmp.begin(), tmp.end());
//        int n = nums.size();
//        int i = 0, j = n - 1;
//        while (i < n && nums[i] == tmp[i])
//        {
//            i++;
//        }
//        while (j >= 0 && nums[j] == tmp[j])
//        {
//            j--;
//        }
//        if (i == n || j == 0)
//        {
//            return 0;
//        }
//        return j - i + 1;
//    }
//};


//class Solution {
//public:
//    int findUnsortedSubarray(vector<int>& nums) {
//        int n = nums.size();
//        int Min = INT_MAX, Max = INT_MIN;
//        int left = -1, right = -1;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] < Max)
//            {
//                right = i;
//            }
//            else
//            {
//                Max = nums[i];
//            }
//            if (nums[n - i - 1] > Min)
//            {
//                left = n - i - 1;
//            }
//            else
//            {
//                Min = nums[n - i - 1];
//            }
//        }
//        if (left == -1)
//        {
//            return 0;
//        }
//        return right - left + 1;
//    }
//};

// 合并二叉树
//class Solution {
//public:
//    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//        if (!root1) return root2;
//        if (!root2) return root1;
//        root1->val += root2->val;
//        TreeNode* root = root1;
//        root->left = mergeTrees(root1->left, root2->left);
//        root->right = mergeTrees(root1->right, root2->right);
//        return root;
//    }
//};


// 回文子串
//class Solution {
//public:
//    int countSubstrings(string s) {
//        int n = s.size();
//        int res = 0;
//        vector<vector<bool>> dp(n, vector<bool>(n));
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                if (s[i] == s[j] && (i - j < 2 || dp[j + 1][i - 1]))
//                {
//                    dp[j][i] = true;
//                    res++;
//                }
//            }
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    int countSubstrings(string s) {
//        int n = s.size();
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            res++;
//            int l = i, r = i;
//            while (r + 1 < n && s[r] == s[r + 1])
//            {
//                res++;
//                r++;
//            }
//            while (l > 0 && r < n - 1 && s[l - 1] == s[r + 1])
//            {
//                res++;
//                l--;
//                r++;
//            }
//        }
//        return res;
//    }
//};


// 每日温度
//class Solution {
//public:
//    vector<int> dailyTemperatures(vector<int>& temperatures) {
//        int n = temperatures.size();
//        stack<int> st;
//        vector<int> res(n);
//        for (int i = 0; i < n; i++)
//        {
//            while (!st.empty() && temperatures[st.top()] < temperatures[i])
//            {
//                int idx = st.top();
//                st.pop();
//                res[idx] = i - idx;
//            }
//            st.push(i);
//        }
//        return res;
//    }
//};