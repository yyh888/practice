#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <deque>
#include <unordered_map>
using namespace std;

//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int p = 0;
//        int n = nums.size();
//        if (n == 0) return 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] != nums[p])
//            {
//                nums[++p] = nums[i];
//            }
//        }
//        return p + 1;
//    }
//};


//class Solution {
//public:
//    unordered_map<int, int> hash;
//    TreeNode* dfs(vector<int>& pre, vector<int>& post, int prebegin, int preend, int postbein, int postend)
//    {
//        if (prebegin > preend || postbein > postend) return nullptr;
//        TreeNode* root = new TreeNode(pre[prebegin]);
//        if (prebegin == preend) return root;
//        int idx = hash[pre[prebegin + 1]];
//        int leftsize = idx - postbein + 1;
//        root->left = dfs(pre, post, prebegin + 1, prebegin + leftsize, postbein, idx);
//        root->right = dfs(pre, post, prebegin + leftsize + 1, preend, idx + 1, postend - 1);
//        return root;
//    }
//
//    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
//        for (int i = 0; i < postorder.size(); i++)
//        {
//            hash[postorder[i]] = i;
//        }
//        return dfs(preorder, postorder, 0, preorder.size() - 1, 0, postorder.size() - 1);
//    }
//};



//namespace yyh
//{
//	template <class T, class Container = deque<T>>
//	class queue
//	{
//	public:
//		void push(const T& val)
//		{
//			_con.push_back(val);
//		}
//
//		T& front()
//		{
//			return _con.front();
//		}
//
//		void pop()
//		{
//			_con.pop_front();
//		}
//
//		size_t size()
//		{
//			return _con.size();
//		}
//	private:
//		Container _con;
//	};
//
//	template <class T, size_t N = 10>
//	class RingQueue
//	{
//	public:
//		RingQueue()
//			: _front(0)
//			, _rear(0)
//			, _size(N + 1)
//		{
//			_q.resize(_size);
//		}
//
//		bool empty()
//		{
//			return _front == _rear;
//		}
//
//		bool full()
//		{
//			return (_rear + 1) % _size == _front;
//		}
//
//		bool push(const T& val)
//		{
//			if (full())
//			{
//				cout << "队列满" << endl;
//				return false;
//			}
//			_q[_rear++] = val;
//			_rear %= _size;
//			return true;
//		}
//
//		bool pop()
//		{
//			if (empty())
//			{
//				cout << "队列空" << endl;
//				return false;
//			}
//			_front++;
//			_front %= _size;
//			return true;
//		}
//
//		size_t size()
//		{
//			return (_rear + _size - _front) % _size;
//		}
//
//		T& front()
//		{
//			return _q[_front];
//		}
//	private:
//		vector<T> _q;
//		size_t _front;
//		size_t _rear;
//		size_t _size;
//	};
//}
//
//int main()
//{
//	yyh::RingQueue<int, 5> rq;
//	rq.push(1);
//	rq.push(2);
//	rq.push(3);
//	rq.push(4);
//	rq.push(5);
//	rq.push(6);
//	cout << rq.size();
//	return 0;
//}

//int Find(const string& s1, const string& s2)
//{
//	unordered_map<char, int> hash1;
//	unordered_map<char, int> hash2;
//	for (int i = 0; i < s2.size(); i++)
//	{
//		hash2[s2[i]]++;
//	}
//	int end = -1;
//	int n = s2.size();
//	for (int i = 0, j = 0; i < s1.size(); i++)
//	{
//		hash1[s1[i]]++;
//		if (i - j + 1 > n)
//		{
//			hash1[s1[j]]--;
//			if (hash1[s1[j]] == 0) hash1.erase(s1[j]);
//			j++;
//		}
//		if (hash1 == hash2)
//		{
//			end = j;
//		}
//	}
//	return end;
//}
//
//
//int main()
//{
//	string s1 = "abcdefgdefg";
//	string s2 = "defg";
//	cout << Find(s1, s2);
//	return 0;
//}

//template <class T>
//void Fun(T& x)
//{
//	cout << "左值" << endl;
//}
//
//template <class T>
//void Fun(T&& x)
//{
//	cout << "右值" << endl;
//}
//
//
//template <class T>
//void fun(T&& x)
//{
//	Fun(forward<T>(x));
//}
//
//int main()
//{
//	int a = 1;
//	fun(a);
//	fun(1);
//	return 0;
//}


//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//	int* p = a;
//	
//	return 0;
//}


//class Solution {
//public:
//    int Reverse(int x)
//    {
//        string s = to_string(x);
//        int res = 0;
//        for (int i = s.size() - 1; i >= 0; i--)
//        {
//            res = res * 10 + (s[i] - '0');
//        }
//        return res;
//    }
//
//    int countDistinctIntegers(vector<int>& nums) {
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            nums.push_back(Reverse(nums[i]));
//        }
//        unordered_set<int> st;
//        for (auto& e : nums)
//        {
//            st.insert(e);
//        }
//        return st.size();
//    }
//};


