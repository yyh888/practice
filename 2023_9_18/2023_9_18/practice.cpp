#include <iostream>

using namespace std;

//struct A
//{
//	double data[0];
//};
//
//struct B
//{
//	char a : 5;
//	char b : 5;
//};
//
//int main()
//{
//	cout << sizeof(B) << endl;
//	return 0;
//}


//int main()
//{
//	int a = 0x12345678;
//	int* p = &a;
//	char* c = (char*)p;
//	cout << (*c == 0x78) << endl;
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
//	A a;
//	a.a = 0x12345678;
//	if (a.b == 0x78) cout << "Ğ¡¶Ë" << endl;
//}


//int main()
//{
//	char a = 'B';
//	cout << sizeof('B') << endl;
//	cout << sizeof(a) << endl;
//	return 0;
//}


//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        ListNode* pre = nullptr, * cur = head;
//        while (cur)
//        {
//            ListNode* Next = cur->next;
//            cur->next = pre;
//            pre = cur;
//            cur = Next;
//        }
//        return pre;
//    }
//};

//
//class Solution {
//public:
//    bool isPalindrome(ListNode* head) {
//        if (!head || !head->next) return true;
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            if (fast) slow = slow->next;
//        }
//        ListNode* tmp = slow->next;
//        slow->next = nullptr;
//        ListNode* pre = slow, * cur = tmp;
//        while (cur)
//        {
//            ListNode* Next = cur->next;
//            cur->next = pre;
//            pre = cur;
//            cur = Next;
//        }
//        while (pre != head && head)
//        {
//            if (pre->val != head->val) return false;
//            pre = pre->next;
//            head = head->next;
//        }
//        return true;
//    }
//};


