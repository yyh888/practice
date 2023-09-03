#include <string>
#include <queue>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

//string fun(string& s)
//{
//	int n = s.size();
//	int res = 1;
//	int begin = 0;
//	vector<vector<bool>> dp(n, vector<bool>(n, false));
//	for (int i = n - 1; i >= 0; i--)
//	{
//		for (int j = i; j < n; j++)
//		{
//			if (j - i < 2 && s[i] == s[j])
//			{
//				dp[i][j] = true;
//				if (j - i + 1 > res)
//				{
//					begin = i;
//					res = j - i + 1;
//				}
//			}
//			else if (s[i] == s[j] && dp[i + 1][j - 1])
//			{
//				dp[i][j] = dp[i + 1][j - 1];
//				if (j - i + 1 > res)
//				{
//					begin = i;
//					res = j - i + 1;
//				}
//			}
//		}
//	}
//	return s.substr(begin, res);
//}

//class Single
//{
//public:
//	static Single& GetSinge()
//	{
//		static Single _s;
//		return _s;
//	}
//
//	Single(const Single&) = delete;
//	Single& operator=(const Single&) = delete;
//private:
//
//	Single(){}
//};

//namespace yyh
//{
//	template <class T>
//	struct Less
//	{
//		bool operator()(T l1, T l2)
//		{
//			return l1 < l2;
//		}
//	};
//
//	template <>
//	struct Less<ListNode*>
//	{
//		bool operator()(ListNode* l1, ListNode* l2)
//		{
//			return l1->val < l2->val;
//		}
//	};
//
//
//	template <class T, class Container = vector<T>, class cmp = Less<T>>
//	class priority_queue
//	{
//	public:
//		priority_queue() {}
//
//		void AdjustDown(int parent)
//		{
//			int child = 2 * parent + 1;
//			while (child < _con.size())
//			{
//				if (child + 1 < _con.size() && com(_con[child + 1], _con[child]))
//				{
//					child++;
//				}
//				if (com(_con[child], _con[parent]))
//				{
//					swap(_con[child], _con[parent]);
//					parent = child;
//					child = 2 * child + 1;
//				}
//				else break;
//			}
//		}
//
//		void AdjustUp(int child)
//		{
//			int parent = (child - 1) / 2;
//			while (child > 0)
//			{
//				if (com(_con[child], _con[parent]))
//				{
//					swap(_con[child], _con[parent]);
//					child = parent;
//					parent = (child - 1) / 2;
//				}
//				else break;
//			}
//		}
//
//		T& top()
//		{
//			return _con[0];
//		}
//
//		void pop()
//		{
//			swap(_con[0], _con[_con.size() - 1]);
//			_con.pop_back();
//			AdjustDown(0);
//		}
//
//		void push(const T& val)
//		{
//			_con.push_back(val);
//			AdjustUp(_con.size() - 1);
//		}
//
//		size_t size()
//		{
//			return _con.size();
//		}
//	private:
//		Container _con;
//		cmp com;
//	};
//}
//
//class Solution {
//public:
//	ListNode* mergeKLists(vector<ListNode*>& lists) {
//		yyh::priority_queue<ListNode*> pq;
//		for (auto& e : lists)
//		{
//			if (e) pq.push(e);
//		}
//		ListNode* head = new ListNode, * tail = head;
//		while (pq.size())
//		{
//			ListNode* tmp = pq.top();
//			pq.pop();
//			tail->next = tmp;
//			tail = tmp;
//			if (tmp->next) pq.push(tmp->next);
//		}
//		return head->next;
//	}
//};

//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int(*p)(int, int)(add);
//	cout << p(1, 2);
//	return 0;
//}


//enum A
//{
//	a, b, c, d, e, f
//};
//
//int main()
//{
//	A a;
//	cout << sizeof(a);
//	return 0;
//}



//class MyQueue
//{
//public:
//	int pop()
//	{
//		if (Popst.empty() && Pushst.empty()) return -1;
//		if (Popst.empty())
//		{
//			while (Pushst.size())
//			{
//				Popst.push(Pushst.top());
//				Pushst.pop();
//			}
//		}
//		int val = Popst.top();
//		Popst.pop();
//		return val;
//	}
//
//	bool push(int val)
//	{
//		Pushst.push(val);
//	}
//private:
//	stack<int> Pushst;
//	stack<int> Popst;
//};


//class MyStack {
//public:
//    MyStack() {
//
//    }
//
//    void push(int x) {
//        if (q1.size())
//        {
//            q1.push(x);
//        }
//        else q2.push(x);
//    }
//
//    int pop() {
//        if (q1.size())
//        {
//            while (q1.size() > 1)
//            {
//                q2.push(q1.front());
//                q1.pop();
//            }
//            int val = q1.front();
//            q1.pop();
//            return val;
//        }
//        else
//        {
//            while (q2.size() > 1)
//            {
//                q1.push(q2.front());
//                q2.pop();
//            }
//            int val = q2.front();
//            q2.pop();
//            return val;
//        }
//    }
//
//    int top() {
//        if (q1.size())
//        {
//            while (q1.size() > 1)
//            {
//                q2.push(q1.front());
//                q1.pop();
//            }
//            int val = q1.front();
//            q2.push(q1.front());
//            q1.pop();
//            while (q2.size())
//            {
//                q1.push(q2.front());
//                q2.pop();
//            }
//            return val;
//        }
//        else
//        {
//            while (q2.size() > 1)
//            {
//                q1.push(q2.front());
//                q2.pop();
//            }
//            int val = q2.front();
//            q1.push(q2.front());
//            q2.pop();
//            while (q1.size())
//            {
//                q2.push(q1.front());
//                q1.pop();
//            }
//            return val;
//        }
//    }
//
//    bool empty() {
//        return q1.empty() && q2.empty();
//    }
//
//    queue<int> q1, q2;
//};


//class Solution {
//public:
//    vector<string> res;
//    int n;
//    string tmp;
//
//    bool istrue(string s)
//    {
//        int m = s.size();
//        if (m > 3) return false;
//        if (m > 1 && s[0] == '0') return false;
//        if (stoi(s) > 255) return false;
//        return true;
//    }
//
//    void dfs(string& s, int i, int cnt)
//    {
//        if (i >= n || cnt < 0) return;
//        string rtmp = tmp;
//        if (cnt == 0)
//        {
//            if (istrue(s.substr(i)))
//            {
//                tmp += s.substr(i);
//                res.push_back(tmp);
//                tmp = rtmp;
//                return;
//            }
//        }
//        // 一个
//        tmp += s[i];
//        tmp += '.';
//        dfs(s, i + 1, cnt - 1);
//        tmp = rtmp;
//        // 两个
//        if (n - i >= 2)
//        {
//            if (istrue(s.substr(i, 2)))
//            {
//                tmp += s.substr(i, 2);
//                tmp += '.';
//                dfs(s, i + 2, cnt - 1);
//                tmp = rtmp;
//            }
//        }
//        // 三个
//        if (n - i >= 3)
//        {
//            if (istrue(s.substr(i, 3)))
//            {
//                tmp += s.substr(i, 3);
//                tmp += '.';
//                dfs(s, i + 3, cnt - 1);
//                tmp = rtmp;
//            }
//        }
//    }
//
//    vector<string> restoreIpAddresses(string s) {
//        n = s.size();
//        dfs(s, 0, 3);
//        return res;
//    }
//};



//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<int> f(n), g(n);
//        f[0] = -prices[0];
//        for (int i = 1; i < n; i++)
//        {
//            f[i] = max(f[i - 1], g[i - 1] - prices[i]);
//            g[i] = max(g[i - 1], f[i - 1] + prices[i]);
//        }
//        return g[n - 1];
//    }
//};


