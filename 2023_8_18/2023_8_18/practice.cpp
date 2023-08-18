//class Solution {
//public:
//    int threeSumClosest(vector<int>& nums, int target) {
//        sort(nums.begin(), nums.end());
//        int n = nums.size();
//        int res = 0x3f3f3f3f;
//        for (int i = 0; i < n - 2; i++)
//        {
//            int l = i + 1, r = n - 1;
//            while (l < r)
//            {
//                int val = nums[l] + nums[r] + nums[i];
//                if (abs(val - target) < abs(res - target))
//                {
//                    res = val;
//                }
//
//                if (val == target) return target;
//                else if (val < target) l++;
//                else r--;
//            }
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//	int maxArea(vector<int>& height) {
//		int l = 0, r = height.size() - 1;
//		int res = 0;
//		while (l < r)
//		{
//			int h = min(height[l], height[r]);
//			res = max(res, h * (r - l));
//			if (height[l] < height[r]) l++;
//			else r--;
//		}
//		return res;
//	}
//};

#include <iostream>
#include <deque>
#include <list>
#include <vector>

using namespace std;

//namespace q
//{
//	template <class T, class Container = deque<T>>
//	class stack
//	{
//	public:
//		stack() {}
//
//		bool empty() const
//		{
//			return _con.empty();
//		}
//
//		size_t size() const
//		{
//			return _con.size();
//		}
//
//		T& top()
//		{
//			return _con.back();
//		}
//
//		const T& top() const
//		{
//			return _con.back();
//		}
//
//		void pop()
//		{
//			_con.pop_back();
//		}
//
//		void push(const T& val)
//		{
//			_con.push_back(val);
//		}
//	private:
//		Container _con;
//	};
//
//
//	template<class T, class Container = deque<T>>
//	class queue
//	{
//	public:
//		size_t size() const
//		{
//			return _con.size();
//		}
//
//		bool empty() const
//		{
//			return _con.empty();
//		}
//
//		void pop()
//		{
//			_con.pop_front();
//		}
//
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
//		const T& front() const
//		{
//			return _con.front();
//		}
//	private:
//		Container _con;
//	};
//
//}
//
//namespace yyh
//{
//	template<class T>
//	struct less
//	{
//		bool operator()(const T& left, const T& right)
//		{
//			return left < right;
//		}
//	};
//
//	template<class T>
//	struct greater
//	{
//		bool operator()(const T& left, const T& right)
//		{
//			return left > right;
//		}
//	};
//	
//	template<class T, class Container = vector<T>, class Cmp = less<T>>
//	class priority_queue
//	{
//	public:
//		priority_queue() {}
//
//		template <class Inputiterator>
//		priority_queue(Inputiterator first, Inputiterator last)
//		{
//			while (first != last)
//			{
//				push(*first);
//				first++;
//			}
//		}
//
//		void push(const T& val)
//		{
//			_con.push_back(val);
//			AdjustUp(_con.size() - 1);
//		}
//
//		void pop()
//		{
//			swap(_con[0], _con[_con.size() - 1]);
//			_con.pop_back();
//			AdjustDown(0);
//		}
//
//		T& top()
//		{
//			return _con[0];
//		}
//	private:
//		void AdjustDown(int p)
//		{
//			int c = 2 * p + 1;
//			while (c < _con.size())
//			{
//				if (c + 1 < _con.size() && com(_con[c + 1], _con[c]))
//				{
//					c++;
//				}
//				if (com(_con[c], _con[p]))
//				{
//					swap(_con[p], _con[c]);
//					p = c;
//					c = 2 * p + 1;
//				}
//				else break;
//			}
//		}
//
//		void AdjustUp(int c)
//		{
//			int p = (c - 1) / 2;
//			while (c > 0)
//			{
//				if (com(_con[c], _con[p]))
//				{
//					swap(_con[p], _con[c]);
//					c = p;
//					p = (c - 1) / 2;
//				}
//				else break;
//			}
//		}
//
//		Container _con;
//		Cmp com;
//	};
//}
//
//int main()
//{
//	/*yyh::stack<int, vector<int>> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);*/
//	/*yyh::queue<int> qq;
//	qq.push(1);
//	qq.push(1);
//	qq.push(1);*/
//	vector<int> v{ 1, 3, 2, 6, 3, 2 };
//	yyh::priority_queue<int> pq(v.begin(), v.end());
//	return 0;
//}



//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        if (head == nullptr) return nullptr;
//        ListNode* pHead = new ListNode;
//        pHead->next = head;
//        ListNode* cur = head, * tail = head->next;
//        while (tail)
//        {
//            while (tail && cur->val == tail->val)
//            {
//                tail = tail->next;
//            }
//            cur->next = tail;
//            cur = tail;
//        }
//        return pHead->next;
//    }
//};


//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        if (head == nullptr) return nullptr;
//        ListNode* pHead = new ListNode;
//        pHead->next = head;
//        ListNode* cur = head, * tail = head->next;
//        ListNode* pre = pHead;
//        while (tail)
//        {
//            if (cur->val == tail->val)
//            {
//                while (tail && tail->val == cur->val)
//                {
//                    tail = tail->next;
//                }
//                pre->next = tail;
//                cur = tail;
//                if (tail) tail = tail->next;
//            }
//            else
//            {
//                pre = cur;
//                cur = tail;
//                tail = tail->next;
//            }
//        }
//        return pHead->next;
//    }
//};


//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        if (head == nullptr || head->next == nullptr) return head;
//        if (head->val != head->next->val)
//        {
//            head->next = deleteDuplicates(head->next);
//        }
//        else
//        {
//            ListNode* cur = head, * tail = head->next;
//            while (tail && cur->val == tail->val)
//            {
//                tail = tail->next;
//            }
//            return deleteDuplicates(tail);
//        }
//        return head;
//    }
//};


