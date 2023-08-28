#include <iostream>

using namespace std;

//class Solution {
//public:
//    ListNode* detectCycle(ListNode* head) {
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//            if (slow == fast)
//            {
//                ListNode* cur = head;
//                while (cur != slow)
//                {
//                    cur = cur->next;
//                    slow = slow->next;
//                }
//                return cur;
//            }
//        }
//        return nullptr;
//    }
//};


//int main()
//{
//	int a = 100;
//	int b = 2;
//	decltype(a + b) c = 1;
//	return 0;
//}


//class Single
//{
//public:
//	static Single& Get()
//	{
//		static Single _sig;
//		return _sig;
//	}
//
//	Single(const Single&) = delete;
//	Single& operator=(const Single&) = delete;
//private:
//	Single(){}
//};


