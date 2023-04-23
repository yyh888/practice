// 路径总和III
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//class Solution {
//public:
//    unordered_map<long long, int> hash;
//
//    int dfs(TreeNode* root, long long cur, int target)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        cur += root->val;
//        int ret = 0;
//        if (hash.count(cur - target))
//        {
//            ret = hash[cur - target];
//        }
//        hash[cur]++;
//        ret += dfs(root->left, cur, target);
//        ret += dfs(root->right, cur, target);
//        hash[cur]--;
//        return ret;
//    }
//
//    int pathSum(TreeNode* root, int targetSum) {
//        hash[0] = 1;
//        return dfs(root, 0, targetSum);
//    }
//};


// 找到字符串中所有字母异位词
//class Solution {
//public:
//    vector<int> findAnagrams(string s, string p) {
//        int n = s.size(), m = p.size();
//        vector<int> sv(26);
//        vector<int> pv(26);
//        for (const char& ch : p)
//        {
//            pv[ch - 'a']++;
//        }
//        vector<int> res;
//        if (n < m) return res;
//        int i = 0, j = 0;
//        while (j < n)
//        {
//            if (j - i + 1 > m)
//            {
//                sv[s[i] - 'a']--;
//                i++;
//            }
//            sv[s[j] - 'a']++;
//            if (j - i + 1 == m)
//            {
//                if (pv == sv)
//                {
//                    res.push_back(i);
//                }
//            }
//            j++;
//        }
//        return res;
//    }
//};


// 汉明距离
//class Solution {
//public:
//    int lowbit(int x)
//    {
//        return x & -x;
//    }
//
//    int hammingDistance(int x, int y) {
//        int ret = x ^ y;
//        int res = 0;
//        while (ret)
//        {
//            ret -= lowbit(ret);
//            res++;
//        }
//        return res;
//    }
//};


// 目标和
//class Solution {
//public:
//    int cnt = 0;
//
//    void dfs(vector<int>& nums, int i, int target, int cur)
//    {
//        if (i == nums.size())
//        {
//            if (cur == target)
//            {
//                cnt++;
//            }
//            return;
//        }
//        dfs(nums, i + 1, target, cur + nums[i]);
//        dfs(nums, i + 1, target, cur - nums[i]);
//    }
//
//    int findTargetSumWays(vector<int>& nums, int target) {
//        dfs(nums, 0, target, 0);
//        return cnt;
//    }
//};