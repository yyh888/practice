#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <bitset>
#include <iostream>

using namespace std;

//int main()
//{
//	bitset<100> bt;
//	bt.set(1);
//	bt.set(3);
//	cout << bt.count() << endl;
//	return 0;
//}
//
//int main()
//{
//	string* p = new string("abc");
//	delete p;
//	return 0;
//}


//class A
//{
//public:
//	virtual ~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//
//};
//
//class B : public A
//{
//public:
//	~B()
//	{
//		cout << "~B()" << endl;
//		delete[]p;
//	}
//private:
//	int* p = new int[20];
//};
//
//int main()
//{
//	A* a = new A;
//	A* b = new B;
//	delete a;
//	delete b;
//	return 0;
//}

//namespace yyh
//{
//	class string
//	{
//	public:
//		string(const char* str)
//			: _size(strlen(str))
//			, _capacity(_size)
//		{
//			_str = new char[_capacity + 1];
//			strcpy(_str, str);
//		}
//
//		void Swap(string& s)
//		{
//			swap(_str, s._str);
//			swap(_size, s._size);
//			swap(_capacity, s._capacity);
//		}
//
//		string(const string& s)
//		{
//			string tmp(s._str);
//			Swap(tmp);
//		}
//
//		void reserve(size_t n)
//		{
//			if (n <= _size)
//			{
//				_size = n;
//			}
//			char* tmp = new char[n + 1];
//			strcpy(tmp, _str);
//			delete []_str;
//			_str = tmp;
//			_capacity = n;
//		}
//
//		string& operator=(string s)
//		{
//			if (this != &s)
//			{
//				Swap(s);
//			}
//			return *this;
//		}
//
//		void push_back(const char* str)
//		{
//			int sz = strlen(str);
//			if (sz + _size > _capacity)
//			{
//				while (sz + _size > _capacity)
//				{
//					reserve(_capacity == 0 ? 4 : _capacity * 2);
//				}
//			}
//			strcpy(_str + _size, str);
//			_size += sz;
//		}
//
//		void push_back(const char ch)
//		{
//			if (_size == _capacity)
//			{
//				reserve(_capacity == 0 ? 4 : _capacity * 2);
//			}
//			_str[_size++] = ch;
//			_str[_size] = '\0';
//		}
//
//		void Print()
//		{
//			cout << _str << endl;
//		}
//	private:
//		char* _str = nullptr;
//		size_t _size;
//		size_t _capacity;
//	};
//}
//
//int main()
//{
//	yyh::string s1("abcd");
//	yyh::string s2(s1);
//	s1.Print();
//	s2.push_back("11111111111");
//	s2.Print();
//	s2 = s1;
//	s2.Print();
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	const int* p = &a;
//	int* b = (int*)p;
//	*b = 100;
//	cout << a << endl;
//	cout << *p << endl;
//	cout << *b << endl;
//	return 0;
//}


//struct A
//{
//public:
//	int a;
//	int b;
//	double c;
//};
//
//struct B : public A
//{
//
//};
//
//int main()
//{
//	A a;
//	cout << sizeof(A);
//	memset(&a, 0, sizeof A);
//	return 0;
//}



//class Solution {
//public:
//    unordered_map<int, int> hash;
//    int n;
//
//    TreeNode* dfs(vector<int>& pre, vector<int>& in, int& i, int begin, int end)
//    {
//        if (begin > end) return nullptr;
//        if (i >= n) return nullptr;
//        TreeNode* root = new TreeNode(pre[i]);
//        int cur = hash[pre[i]];
//        i++;
//        root->left = dfs(pre, in, i, begin, cur - 1);
//        root->right = dfs(pre, in, i, cur + 1, end);
//        return root;
//    }
//
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        n = preorder.size();
//        for (int i = 0; i < n; i++)
//        {
//            hash[inorder[i]] = i;
//        }
//        int i = 0;
//        return dfs(preorder, inorder, i, 0, n - 1);
//    }
//};


//class Solution {
//public:
//    int n;
//
//    void QuickSort(vector<int>& nums, int begin, int end, int k)
//    {
//        int l = begin, r = end;
//        int key = nums[begin];
//        while (l < r)
//        {
//            while (l < r && nums[r] >= key) r--;
//            while (l < r && nums[l] <= key) l++;
//            if (l < r) swap(nums[l], nums[r]);
//        }
//        swap(nums[begin], nums[l]);
//        if (l < n - k) QuickSort(nums, l + 1, end, k);
//        else if (l > n - k) QuickSort(nums, begin, l - 1, k);
//        else return;
//    }
//
//    int findKthLargest(vector<int>& nums, int k) {
//        n = nums.size();
//        QuickSort(nums, 0, nums.size() - 1, k);
//        return nums[n - k];
//    }
//};