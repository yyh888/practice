#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

//namespace yyh
//{
//	class string
//	{
//	public:
//		string(const char* str = "")
//			: _size(strlen(str))
//			, _capacity(_size)
//		{
//			_str = new char[_capacity + 1];
//			strcpy(_str, str);
//		}
//
//		~string()
//		{
//			delete[]_str;
//			_str = nullptr;
//			_size = _capacity = 0;
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
//			: _str(nullptr)
//		{
//			string tmp(s._str);
//			Swap(tmp);
//		}
//
//		const char* c_str()
//		{
//			return _str;
//		}
//
//	private:
//		char* _str;
//		size_t _size;
//		size_t _capacity;
//	};
//}
//
//int main()
//{
//	yyh::string s1("abcdef");
//	yyh::string s2(s1);
//	cout << s2.c_str() << endl;
//	return 0;
//}


//class Solution {
//public:
//    unordered_map<int, int> hash;
//    int n;
//
//    TreeNode* dfs(vector<int>& pre, vector<int>& in, int& i, int begin, int end)
//    {
//        if (begin > end || i == n) return nullptr;
//        TreeNode* root = new TreeNode(pre[i]);
//        int mid = hash[pre[i]];
//        i++;
//        root->left = dfs(pre, in, i, begin, mid - 1);
//        root->right = dfs(pre, in, i, mid + 1, end);
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


