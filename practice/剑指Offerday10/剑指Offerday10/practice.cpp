// 反转链表

//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        if (head == nullptr || head->next == nullptr) return head;
//        ListNode* tmp = reverseList(head->next);
//        head->next->next = head;
//        head->next = nullptr;
//        return tmp;
//    }
//};


// 合并两个排序的链表
// 迭代
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        ListNode* pre = new ListNode(0);
//        ListNode* tail = pre;
//        while (l1 && l2)
//        {
//            if (l1->val < l2->val)
//            {
//                tail->next = l1;
//                l1 = l1->next;
//            }
//            else
//            {
//                tail->next = l2;
//                l2 = l2->next;
//            }
//            tail = tail->next;
//        }
//        tail->next = !l2 ? l1 : l2;
//        ListNode* head = pre->next;
//        delete pre;
//        return head;
//    }
//};

// 递归
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        if (l1 == nullptr)
//        {
//            return l2;
//        }
//        if (l2 == nullptr)
//        {
//            return l1;
//        }
//        if (l1->val < l2->val)
//        {
//            l1->next = mergeTwoLists(l1->next, l2);
//            return l1;
//        }
//        else
//        {
//            l2->next = mergeTwoLists(l1, l2->next);
//            return l2;
//        }
//    }
//};