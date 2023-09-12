#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
//
//void nextPermutation(vector<int>& nums)
//{
//	int n = nums.size();
//	int i = n - 1;
//	while (i > 0)
//	{
//		if (nums[i] > nums[i - 1])
//		{
//			break;
//		}
//		i--;
//	}
//	if (i == 0)
//	{
//		reverse(nums.begin(), nums.end());
//		return;
//	}
//	int j = n - 1;
//	while (j >= i)
//	{
//		if (nums[j] > nums[i - 1])
//		{
//			swap(nums[j], nums[i - 1]);
//			break;
//		}
//		j--;
//	}
//	sort(nums.begin() + i, nums.end());
//}
//
//int main()
//{
//	vector<int> nums{ 1, 2, 3 };
//	nextPermutation(nums);
//	for (auto& e : nums) cout << e << " ";
//	return 0;
//}



//class Solution {
//public:
//    int Max = -0x3f3f3f3f;
//
//    int dfs(TreeNode* root)
//    {
//        if (root == nullptr) return 0;
//        int left = max(0, dfs(root->left));
//        int right = max(0, dfs(root->right));
//        Max = max(Max, left + right + root->val);
//        return max(left, right) + root->val;
//    }
//
//    int maxPathSum(TreeNode* root) {
//        dfs(root);
//        return Max;
//    }
//};



//class Solution {
//public:
//    vector<string> res;
//    string tmp;
//
//    void dfs(TreeNode* root)
//    {
//        if (root == nullptr) return;
//        string ttmp = tmp;
//        tmp += to_string(root->val) + "->";
//        if (!root->left && !root->right)
//        {
//            tmp.pop_back();
//            tmp.pop_back();
//            res.push_back(tmp);
//            tmp = ttmp;
//            return;
//        }
//        dfs(root->left);
//        dfs(root->right);
//        tmp = ttmp;
//    }
//
//    vector<string> binaryTreePaths(TreeNode* root) {
//        dfs(root);
//        return res;
//    }
//};


//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        s = " " + s;
//        p = " " + p;
//        int n = s.size(), m = p.size();
//        vector<vector<bool>> dp(n, vector<bool>(m, false));
//        dp[0][0] = true;
//        for (int j = 2; j < m; j += 2)
//        {
//            if (p[j] == '*') dp[0][j] = true;
//            else break;
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (p[j] == '*')
//                {
//                    if (p[j - 1] == '.')
//                    {
//                        dp[i][j] = dp[i][j - 2] || dp[i - 1][j];
//                    }
//                    else
//                    {
//                        dp[i][j] = dp[i][j - 2] || (s[i] == p[j - 1] && dp[i - 1][j]);
//                    }
//                }
//                else
//                {
//                    dp[i][j] = dp[i - 1][j - 1] && (s[i] == p[j] || p[j] == '.');
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};



//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        s = " " + s;
//        p = " " + p;
//        int n = s.size(), m = p.size();
//        vector<vector<bool>> dp(n, vector<bool>(m, false));
//        dp[0][0] = true;
//        for (int j = 1; j < m; j++)
//        {
//            if (p[j] == '*') dp[0][j] = true;
//            else break;
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (p[j] == '*')
//                {
//                    dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
//                }
//                else
//                {
//                    dp[i][j] = dp[i - 1][j - 1] && (s[i] == p[j] || p[j] == '?');
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};


//class Solution {
//public:
//    int minInsertions(string s) {
//        int n = s.size();
//        vector<vector<int>> dp(n, vector<int>(n));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i + 1; j < n; j++)
//            {
//                if (s[i] == s[j])
//                {
//                    if (j - i < 2) dp[i][j] = 0;
//                    else dp[i][j] = dp[i + 1][j - 1];
//                }
//                else
//                {
//                    dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
//                }
//            }
//        }
//        return dp[0][n - 1];
//    }
//};


