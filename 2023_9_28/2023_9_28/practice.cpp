//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        if (head == nullptr) return nullptr;
//        ListNode* tail = nullptr, * cur = head;
//        while (cur)
//        {
//            ListNode* Next = cur->next;
//            cur->next = tail;
//            tail = cur;
//            cur = Next;
//        }
//        return tail;
//    }
//};


