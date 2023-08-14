#include <iostream>

using namespace std;
//class Solution {
//public:
//    vector<int> res;
//
//    vector<int> postorderTraversal(TreeNode* root) {
//        stack<TreeNode*> st;
//        TreeNode* cur = root;
//        while (cur || st.size())
//        {
//            while (cur)
//            {
//                st.push(cur);
//                res.push_back(cur->val);
//                cur = cur->right;
//            }
//            TreeNode* tmp = st.top();
//            st.pop();
//            if (tmp->left)
//            {
//                cur = tmp->left;
//            }
//        }
//        reverse(res.begin(), res.end());
//        return res;
//    }
//};


//class Solution {
//public:
//    vector<int> res;
//
//    vector<int> inorderTraversal(TreeNode* root) {
//        stack<TreeNode*> st;
//        TreeNode* cur = root;
//        while (cur || st.size())
//        {
//            while (cur)
//            {
//                st.push(cur);
//                cur = cur->left;
//            }
//            TreeNode* tmp = st.top();
//            res.push_back(tmp->val);
//            st.pop();
//            if (tmp->right)
//            {
//                cur = tmp->right;
//            }
//        }
//        return res;
//    }
//};


//class A
//{
//public:
//	A()
//	{
//		Print();
//	}
//
//	virtual void Print()
//	{
//		cout << "A()" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	B()
//	{
//		Print();
//	}
//
//	virtual void Print()
//	{
//		cout << "B()" << endl;
//	}
//};
//
//int main()
//{
//	B b;
//	return 0;
//}


int main()
{
	int a = 10;
	decltype(a) b = 100;
	cout << b;
	return 0;
}