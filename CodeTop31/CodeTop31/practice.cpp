// 括号生成
//class Solution {
//public:
//    vector<string> res;
//    string tmp;
//
//    void dfs(int l, int r, int n)
//    {
//        if (l > n || r > n || r > l) return;
//        if (l == r && l == n)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        tmp += '(';
//        dfs(l + 1, r, n);
//        tmp.pop_back();
//        tmp += ')';
//        dfs(l, r + 1, n);
//        tmp.pop_back();
//    }
//
//    vector<string> generateParenthesis(int n) {
//        dfs(0, 0, n);
//        return res;
//    }
//};


// 最近公共祖先
//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        if (root == nullptr || root == p || root == q)
//        {
//            return root;
//        }
//        TreeNode* left = lowestCommonAncestor(root->left, p, q);
//        TreeNode* right = lowestCommonAncestor(root->right, p, q);
//        if (left && right) return root;
//        if (left) return left;
//        return right;
//    }
//};

// 1到100的质数
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool isTrue(int x)
//{
//	if (x < 2) return false;
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0) return false;
//	}
//	return true;
//}
//
//int main()
//{
//	vector<int> res;
//	for (int i = 0; i < 100; i++)
//	{
//		if (isTrue(i))
//		{
//			res.push_back(i);
//			cout << i << " ";
//		}
//	}
//	cout << "\n" << res.size();
//	return 0;
//}