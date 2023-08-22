#include <iostream>
using namespace std;

//extern int a;
//extern void fun();
//
//class A
//{
//public:
//	A()
//		: a(1)
//		, b(2)
//	{}
//
//	int a;
//	int b;
//};
//
//int main()
//{
//	A* p = (A*)malloc(sizeof(A));
//	new (p)A;
//	cout << p->a << endl;
//	cout << p->b << endl;
//	return 0;
//}


//union A
//{
//	int a;
//	char b;
//};
//
//int main()
//{
//	A aa;
//	aa.a = 0x12345678;
//	if (aa.b == 0x78)
//	{
//		cout << "小端" << endl;
//	}
//	else cout << "小端" << endl;
//	return 0;
//}

//int main()
//{
//	int pa = 0x12345678;
//	char* pb = (char*)&pa;
//	if (*pb == 0x78) cout << "小端" << endl;
//	return 0;
//}


//class Solution {
//public:
//    vector<int> dailyTemperatures(vector<int>& temperatures) {
//        int n = temperatures.size();
//        stack<int> st;
//        vector<int> res(n);
//        for (int i = 0; i < n; i++)
//        {
//            while (st.size() && temperatures[st.top()] < temperatures[i])
//            {
//                int idx = st.top();
//                st.pop();
//                res[idx] = i - idx;
//            }
//            st.push(i);
//        }
//        return
//    }
//};


//class A
//{
//	char a;
//	int b;
//};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	return 0;
//}


//int main()
//{
//	int* p1 = new int[20];
//	int* p2 = p1;
//
//	return 0;
//}


//class A
//{
//public:
//	A(const A& a)
//	{
//		_a = a._a;
//	}
//
//	A(A&& a)
//	{
//		swap(_a, a._a);
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	int* _b = new int[20];
//	cout << sizeof(_b) << endl;
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//template <class T>
//struct TreeNode
//{
//	TreeNode(const T& x)
//		: val(x)
//	{}
//
//	T val;
//	TreeNode<T>* left = nullptr;
//	TreeNode<T>* right = nullptr;
//};
//
//namespace yyh
//{
//	template <class T>
//	class Tree
//	{
//		typedef TreeNode<T> Node;
//	public:
//		bool find(const T& x)
//		{
//			Node* cur = _root;
//			while (cur)
//			{
//				if (cur->val > x)
//				{
//					cur = cur->left;
//				}
//				else if (cur->val < x)
//				{
//					cur = cur->right;
//				}
//				else return true;
//			}
//			return false;
//		}
//
//		bool insert(const T& x)
//		{
//			// 根为空
//			if (_root == nullptr)
//			{
//				_root = new Node(x);
//				return true;
//			}
//			Node* cur = _root, * parent = nullptr;
//			while (cur)
//			{
//				if (cur->val < x)
//				{
//					parent = cur;
//					cur = cur->right;
//				}
//				else if (cur->val > x)
//				{
//					parent = cur;
//					cur = cur->left;
//				}
//				else return false;
//			}
//			cur = new Node(x);
//			if (parent->val > x) parent->left = cur;
//			else parent->right = cur;
//			return true;
//		}
//
//		// 中序遍历
//		void Inorder(Node* root)
//		{
//			if (!root) return;
//			Inorder(root->left);
//			cout << root->val << " ";
//			Inorder(root->right);
//		}
//
//		void Inorder()
//		{
//			Inorder(_root);
//		}
//
//		// 后续遍历
//		void order(Node* root)
//		{
//			if (!root) return;
//			order(root->left);
//			order(root->right);
//			cout << root->val << " ";
//		}
//
//		void order()
//		{
//			order(_root);
//		}
//	private:
//		Node* _root = nullptr;
//	};
//}
//
//int main()
//{
//	yyh::Tree<int> root;
//	root.insert(2);
//	root.insert(1);
//	root.insert(4);
//	root.insert(3);
//	root.insert(5);
//	root.Inorder();
//	cout << endl;
//	root.order();
//	return 0;
//}
//
//
//
//void QuickSort(vector<int>& nums, int begin, int end)
//{
//	if (begin >= end) return; 9
//		int key = nums[begin];
//	int l = begin, r = end;
//	while (l < r)
//	{
//		while (l < r && nums[r] >= key) r--;
//		while (l < r && nums[l] <= key) l++;
//		if (l < r) swap(nums[l], nums[r]);
//	}
//	swap(nums[begin], nums[l]);
//	QuickSort(nums, begin, l - 1);
//	QuickSort(nums, l + 1, end);
//}

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int (*p)(int, int) = add;
	cout << p(1, 2) << endl;

	return 0;
}