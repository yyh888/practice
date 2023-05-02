// 两个链表的第一个重合节点
//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//        int lenA = 0, lenB = 0;
//        ListNode* cur1 = headA, * cur2 = headB;
//        while (cur1)
//        {
//            cur1 = cur1->next;
//            lenA++;
//        }
//        while (cur2)
//        {
//            cur2 = cur2->next;
//            lenB++;
//        }
//        ListNode* Lnode = headA, * Snode = headB;
//        if (lenA < lenB)
//        {
//            Lnode = headB;
//            Snode = headA;
//        }
//        int gap = abs(lenA - lenB);
//        while (gap--)
//        {
//            Lnode = Lnode->next;
//        }
//        while (Lnode && Snode)
//        {
//            if (Lnode == Snode)
//            {
//                return Lnode;
//            }
//            Lnode = Lnode->next;
//            Snode = Snode->next;
//        }
//        return nullptr;
//    }
//};

//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//        if (!headA || !headB)
//        {
//            return nullptr;
//        }
//        ListNode* cur1 = headA, * cur2 = headB;
//        while (cur1 != cur2)
//        {
//            cur1 == nullptr ? cur1 = headB : cur1 = cur1->next;
//            cur2 == nullptr ? cur2 = headA : cur2 = cur2->next;
//        }
//        return cur1;
//    }
//};


// 反转链表
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        if (head == nullptr || head->next == nullptr)
//        {
//            return head;
//        }
//        ListNode* tmp = reverseList(head->next);
//        head->next->next = head;
//        head->next = nullptr;
//        return tmp;
//    }
//};


// 链表中的两数相加
//class Solution {
//public:
//    ListNode* Reverse(ListNode* head)
//    {
//        if (head == nullptr || head->next == nullptr)
//        {
//            return head;
//        }
//        ListNode* tmp = Reverse(head->next);
//        head->next->next = head;
//        head->next = nullptr;
//        return tmp;
//    }
//
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        l1 = Reverse(l1);
//        l2 = Reverse(l2);
//        ListNode* head = nullptr;
//        int add = 0;
//        while (l1 || l2 || add)
//        {
//            int sum = add;
//            if (l1)
//            {
//                sum += l1->val;
//                l1 = l1->next;
//            }
//            if (l2)
//            {
//                sum += l2->val;
//                l2 = l2->next;
//            }
//            add = sum / 10;
//            sum %= 10;
//            ListNode* node = new ListNode(sum);
//            node->next = head;
//            head = node;
//        }
//        return head;
//    }
//};


//class Solution {
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        stack<int> l1t, l2t;
//        while (l1 || l2)
//        {
//            if (l1)
//            {
//                l1t.push(l1->val);
//                l1 = l1->next;
//            }
//            if (l2)
//            {
//                l2t.push(l2->val);
//                l2 = l2->next;
//            }
//        }
//        int add = 0;
//        ListNode* head = nullptr;
//        while (!l1t.empty() || !l2t.empty() || add)
//        {
//            int sum = add;
//            if (l1t.size())
//            {
//                sum += l1t.top();
//                l1t.pop();
//            }
//            if (l2t.size())
//            {
//                sum += l2t.top();
//                l2t.pop();
//            }
//            add = sum / 10;
//            sum %= 10;
//            ListNode* node = new ListNode(sum);
//            node->next = head;
//            head = node;
//        }
//        return head;
//    }
//};

// 重排链表
//class Solution {
//public:
//    void reorderList(ListNode* head) {
//        if (head == nullptr) return;
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            slow = slow->next;
//        }
//        ListNode* tmp = slow->next;
//        slow->next = nullptr;
//        stack<ListNode*> st;
//        while (tmp)
//        {
//            st.push(tmp);
//            tmp = tmp->next;
//        }
//        ListNode* cur = head, * next = cur->next;
//        while (!st.empty())
//        {
//            ListNode* node = st.top();
//            st.pop();
//            cur->next = node;
//            node->next = next;
//            cur = next;
//            next = cur->next;
//        }
//    }
//};

