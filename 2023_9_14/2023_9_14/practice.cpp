#include <iostream>
#include <vector>

using namespace std;

//enum stu
//{
//	a = 3,
//	b = 1,
//	c,
//	d
//};
//
//int main()
//{
//	cout << d << endl;
//	return 0;
//}


//int main()
//{
//	int b = 1;
//	int& a = b;
//	cout << &a << endl;
//	cout << &b << endl;
//	return 0;
//}


//class A
//{
//public:
//	A(vector<int>& n)
//		: nums(n)
//	{}
//private:
//	vector<int>& nums;
//};
//
//int main()
//{
//	vector<int> nums{ 1, 2, 3, 5 };
//	A a(nums);
//	return 0;
//}


//typedef struct DATA_ST 
//{
//	long a;
//	int b;
//	char c;
//}Data;
//
//int main()
//{
//	Data a;
//	return 0;
//}


//class Solution {
//public:
//    unordered_map<int, int> hash;
//    int n;
//
//    TreeNode* dfs(vector<int>& pre, vector<int>& in, int& i, int begin, int end)
//    {
//        if (i >= n) return nullptr;
//        if (begin > end) return nullptr;
//        TreeNode* root = new TreeNode(pre[i]);
//        int idx = hash[pre[i]];
//        i++;
//        root->left = dfs(pre, in, i, begin, idx - 1);
//        root->right = dfs(pre, in, i, idx + 1, end);
//        return root;
//    }
//
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        n = preorder.size();
//        for (int i = 0; i < n; i++)
//        {
//            hash.insert({ inorder[i], i });
//        }
//        int i = 0;
//        return dfs(preorder, inorder, i, 0, n - 1);
//    }
//};


//class Solution {
//public:
//    ListNode* oddEvenList(ListNode* head) {
//        ListNode* n1 = new ListNode, * n2 = new ListNode;
//        ListNode* t1 = n1, * t2 = n2;
//        ListNode* cur = head;
//        while (cur)
//        {
//            t1->next = cur;
//            t1 = t1->next;
//            cur = cur->next;
//            if (cur)
//            {
//                t2->next = cur;
//                t2 = t2->next;
//                cur = cur->next;
//            }
//        }
//        t2->next = nullptr;
//        t1->next = n2->next;
//        return n1->next;
//    }
//};


//class Solution {
//public:
//    int countSubstrings(string s) {
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n));
//        int cnt = 0;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j] && (j - i <= 2 || dp[i + 1][j - 1]))
//                {
//                    dp[i][j] = true;
//                    cnt++;
//                }
//            }
//        }
//        return cnt;
//    }
//};


