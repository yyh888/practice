#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//vector<int> fun(vector<vector<int>>& nums)
//{
//	vector<int> res;
//	int n = nums.size(), m = nums[0].size();
//	int top = 0, end = n - 1, left = 0, right = m - 1;
//	while (true)
//	{
//		for (int j = left; j <= right; j++)
//		{
//			res.push_back(nums[top][j]);
//		}
//		if (++top > end) break;
//		for (int i = top; i <= end; i++)
//		{
//			res.push_back(nums[i][right]);
//		}
//		if (--right < left) break;
//		for (int j = right; j >=left; j--)
//		{
//			res.push_back(nums[end][j]);
//		}
//		if (--end < top) break;
//		for (int i = end; i >= top; i--)
//		{
//			res.push_back(nums[i][left]);
//		}
//		if (++left > right) break;
//	}
//	return res;
//}
//
//int main()
//{
//	vector<vector<int>> vv{ { 1,2,3 } };
//	vector<int> res = fun(vv);
//	for (auto& e : res) cout << e << " ";
//	return 0;
//}

//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int _val)
//		: val(_val)
//		, left(nullptr)
//		, right(nullptr)
//	{}
//};
//
//void bfs(TreeNode* root)
//{
//	if (!root) return;
//	queue<TreeNode*> qq;
//	qq.push(root);
//	int levelSize = 1;
//	while (qq.size())
//	{
//		while (levelSize--)
//		{
//			TreeNode* tmp = qq.front();
//			qq.pop();
//			cout << tmp->val << " ";
//			if (tmp->left) qq.push(tmp->left);
//			if (tmp->right) qq.push(tmp->right);
//		}
//		levelSize = qq.size();
//	}
//}
//
//TreeNode* Build(vector<int>& nums, int& i)
//{
//	if (i >= nums.size()) return nullptr;
//	TreeNode* root = new TreeNode(nums[i]);
//	root->left = Build(nums, ++i);
//	root->right = Build(nums, ++i);
//	return root;
//}
//
//int main()
//{
//	vector<int> nums{ 1, 2, 3, 4, 5, 6 };
//	int i = 0;
//	TreeNode* root = Build(nums, i);
//	bfs(root);
//	return 0;
//}



//class Solution {
//public:
//    const int N = 1e9 + 7;
//    int numWays(int n) {
//        if (n == 0) return 1;
//        if (n == 1) return 1;
//        vector<int> dp(n + 1);
//        dp[0] = 1;
//        dp[1] = 1;
//        for (int i = 2; i <= n; i++)
//        {
//            dp[i] = dp[i - 1] + dp[i - 2];
//            dp[i] %= N;
//        }
//        return dp[n];
//    }
//};


//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int n = nums.size();
//        int p0 = 0, p1 = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] == 0)
//            {
//                swap(nums[p0], nums[i]);
//                if (p0 < p1) swap(nums[i], nums[p1]);
//                p0++;
//                p1++;
//            }
//            else if (nums[i] == 1)
//            {
//                swap(nums[p1++], nums[i]);
//            }
//        }
//    }
//};

//int* fun()
//{
//	int * a = new int[10];
//	for (int i = 0; i < 10; i++) a[i] = i;
//	return a;
//}
//
//
//int main()
//{
//	int* p = fun();
//	cout << "hello world";
//	cout << *p;
//	return 0;
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//string fun(string& s1, string& s2)
//{
//    s1 = " " + s1, s2 = " " + s2;
//    int n = s1.size(), m = s2.size();
//    vector<vector<int>> dp(n, vector<int>(m));
//    for (int i = 1; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (s1[i] == s2[j])
//            {
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//            }
//            else
//            {
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//    }
//    if (dp[n - 1][m - 1] == 0) return "-1";
//    string res;
//    int i = n - 1, j = m - 1;
//    while (i > 0 && j > 0)
//    {
//        if (s1[i] == s2[j])
//        {
//            res += s1[i];
//            i--;
//            j--;
//        }
//        else if (dp[i][j - 1] > dp[i - 1][j])
//        {
//            j--;
//        }
//        else
//        {
//            i--;
//        }
//    }
//    reverse(res.begin(), res.end());
//    return res;
//}
//
//int main()
//{
//    string s1, s2;
//    cin >> s1 >> s2;
//    cout << fun(s1, s2);
//    return 0;
//}



