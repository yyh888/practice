#include <iostream>
#include <stack>

using namespace std;

//class Solution {
//public:
//    bool _dfs(TreeNode* A, TreeNode* B)
//    {
//        if (B == nullptr) return true;
//        if (!A && !B) return true;
//        if (!A || !B) return false;
//        if (A->val != B->val) return false;
//        return _dfs(A->left, B->left) && _dfs(A->right, B->right);
//    }
//
//    bool dfs(TreeNode* A, TreeNode* B)
//    {
//        if (!A) return false;
//        if (A->val == B->val)
//        {
//            bool flag = _dfs(A, B);
//            if (flag) return true;
//        }
//        return dfs(A->left, B) || dfs(A->right, B);
//    }
//
//    bool isSubStructure(TreeNode* A, TreeNode* B) {
//        if (!A && !B) return false;
//        if (!A || !B) return false;
//        return dfs(A, B);
//    }
//};

//int cnt = 0;
//
//void Hannoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		cnt++;
//		cout << a << "->" << c << " " << cnt << endl;
//	}
//	else
//	{
//		Hannoi(n - 1, a, c, b);
//		cnt++;
//		cout << a << "->" << c << " " << cnt << endl;
//		Hannoi(n - 1, b, a, c);
//	}
//}

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
//		if (t.n == 1)
//		{
//			cnt++;
//			cout << t.a << "->" << t.c << " " << cnt << endl;
//		}
//		else
//		{
//			st.push({ t.n - 1, t.b, t.a, t.c });
//			st.push({ 1, t.a, t.b, t.c });
//			st.push({ t.n - 1, t.a, t.c, t.b });
//		}
//	}
//}
//
//int main()
//{
//	Hannoi(3, 'a', 'b', 'c');
//
//	return 0;
//}


//namespace yyh
//{
//	char* strcpy(char* str1, const char* str2)
//	{
//		char* p = str1;
//		while (*str1++ = *str2++);
//		return p;
//	}
//}
//
//int main()
//{
//	char arr1[10];
//	const char* arr2 = "abcdefg";
//	yyh::strcpy(arr1, arr2);
//	cout << arr1 << endl;
//	return 0;
//}

//int* fun()
//{
//	int a = 100;
//	int* p = &a;
//	return p;
//}
//
//int main()
//{
//	int* p = fun();
//	cout << "hello word" << endl;
//	cout << *p << endl;
//	*p = 12;
//	cout << "hello word" << endl;
//	cout << *p << endl;
//	return 0;
//}


//int main()
//{
//	char c1 = ' ';
//	char c2 = 32;
//	cout << (c1 == c2);
//	return 0;
//}