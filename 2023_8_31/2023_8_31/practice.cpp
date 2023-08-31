#include <iostream>
#include <stack>

using namespace std;

//class Solution {
//public:
//    int firstMissingPositive(vector<int>& nums) {
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            while (nums[i] != i + 1)
//            {
//                if (nums[i] <= 0 || nums[i] > n || nums[i] == nums[nums[i] - 1])
//                    break;
//                int idx = nums[i] - 1;
//                swap(nums[idx], nums[i]);
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] != i + 1) return i + 1;
//        }
//        return n + 1;
//    }
//};


//struct Task
//{
//	int n;
//	char a, b, c;
//	Task(int _n, char _a, char _b, char _c)
//		: n(_n)
//		, a(_a)
//		, b(_b)
//		, c(_c)
//	{}
//};
//
//int cnt = 0;
//
//void Hannoi(int n, char a, char b, char c)
//{
//	stack<Task> st;
//	st.push({ n, a, b, c });
//	while (st.size())
//	{
//		auto t = st.top();
//		st.pop();
//		int N = t.n;
//		char A = t.a, B = t.b, C = t.c;
//		if (N == 1)
//		{
//			cnt++;
//			cout << A << "->" << B << " " << cnt << endl;
//		}
//		else
//		{
//			st.push({ N - 1, B, A, C});
//			st.push({ 1, A, B, C });
//			st.push({ N - 1, A, C, B });
//		}
//	}
//}
//
//int main()
//{
//	Hannoi(4, 'a', 'b', 'c');
//	return 0;
//}


//class Solution {
//public:
//    void QuickSort(vector<int>& nums, int begin, int end)
//    {
//        if (begin >= end) return;
//        int l = begin, r = end;
//        int key = nums[begin];
//        while (l < r)
//        {
//            while (l < r && nums[r] >= key) r--;
//            while (l < r && nums[l] <= key) l++;
//            if (l < r) swap(nums[l], nums[r]);
//        }
//        swap(nums[begin], nums[l]);
//        QuickSort(nums, begin, l - 1);
//        QuickSort(nums, l + 1, end);
//    }
//
//    void nextPermutation(vector<int>& nums) {
//        int n = nums.size();
//        int i = n - 2;
//        while (i >= 0)
//        {
//            if (nums[i] < nums[i + 1]) break;
//            i--;
//        }
//        if (i == -1)
//        {
//            QuickSort(nums, 0, n - 1);
//        }
//        else
//        {
//            int j = n - 1;
//            for (; j >= i; j--)
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


//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        stack<TreeNode*> st;
//        vector<int> res;
//        TreeNode* cur = root;
//        while (st.size() || cur)
//        {
//            while (cur)
//            {
//                st.push(cur);
//                cur = cur->left;
//            }
//            cur = st.top();
//            st.pop();
//            res.push_back(cur->val);
//            if (cur->right)
//            {
//                cur = cur->right;
//            }
//            else cur = nullptr;
//        }
//        return res;
//    }
//};


//class A
//{
//public:
//
//	A(){}
//
//	A(const A& a)
//	{
//
//	}
//
//	~A()
//	{
//		delete[]p;
//	}
//private:
//	int* p = new int[10];
//};
//
//int main()
//{
//	A a;
//	A b(move(a));
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
//	A tmp;
//	tmp.a = 0x12345678;
//	if (tmp.b == 0x78) cout << "Ð¡¶Ë";
//	return 0;
//}