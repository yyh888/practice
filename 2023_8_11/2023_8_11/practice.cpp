#include <iostream>

using namespace std;

//int main()
//{
//	volatile const int a = 1;
//	int* pa = (int*)&a;
//	*pa = 100;
//	cout << a;
//	return 0;
//}


//class A
//{
//public:
//	static A& GetSig()
//	{
//		return _a;
//	}
//private:
//	static A _a;
//};
//
//A A::_a;

//class A
//{
//public:
//	static A& GetSig()
//	{
//		/*if (_p == nullptr)
//		{
//			_p = new A;
//		}
//		return *_p;*/
//		static A _a;
//		return _a;
//	}
//private:
//	A(){}
//};
//
//int main()
//{
//	return 0;
//}



// 和为 K 的子数组
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        int n = nums.size();
//        unordered_map<int, int> hash;
//        hash[0] = 1;
//        int res = 0;
//        int cnt = 0;
//        for (int i = 0; i < n; i++)
//        {
//            res += nums[i];
//            cnt += hash[res - k];
//            hash[res]++;
//        }
//        return cnt;
//    }
//};

//int main()
//{
//	const int a = 100;
//	const int* p = &a;
//	int* b = const_cast<int*>(p);
//	*b = 200;
//	cout << a << endl;
//	cout << *p << endl;
//	cout << *b << endl;
//	return 0;
//}\


//class A
//{
//public:
//	A(int a = 1)
//		: _a(1)
//	{}
//
//public:
//	int _a;
//};
//
//int main()
//{
//	A* p = (A*)malloc(sizeof(A));
//	new(p)A;
//	return 0;
//}


//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        unordered_map<char, int> hash;
//        int n = s.size();
//        int len = 0;
//        for (int i = 0, j = 0; i < n; i++)
//        {
//            hash[s[i]]++;
//            while (hash[s[i]] > 1)
//            {
//                hash[s[j]]--;
//                j++;
//            }
//            len = max(len, i - j + 1);
//        }
//        return len;
//    }
//};


//class Solution {
//public:
//    ListNode* Reverse(ListNode* head, ListNode* tail)
//    {
//        if (head == tail || head->next == tail) return head;
//        ListNode* tmp = Reverse(head->next, tail);
//        head->next->next = head;
//        head->next = tail;
//        return tmp;
//    }
//
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        ListNode* pHead = new ListNode;
//        pHead->next = head;
//        ListNode* cur = head, * tail = head;
//        ListNode* pre = pHead;
//        while (tail)
//        {
//            int cnt = k;
//            while (tail && --cnt)
//            {
//                tail = tail->next;
//            }
//            if (tail)
//            {
//                pre->next = Reverse(cur, tail->next);
//                pre = cur;
//                cur = tail = cur->next;
//            }
//        }
//        return pHead->next;
//    }
//};