// 合并 K 个升序链表
//class Solution {
//public:
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        int n = lists.size();
//        ListNode* head = nullptr;
//        for (int i = 0; i < n; i++)
//        {
//            ListNode* cur1 = head, * cur2 = lists[i];
//            if (cur1 == nullptr)
//            {
//                head = cur2;
//                continue;
//            }
//            if (cur2 == nullptr)
//            {
//                head = cur1;
//                continue;
//            }
//            // 确认头
//            if (cur1->val < cur2->val)
//            {
//                head = cur1;
//                cur1 = cur1->next;
//            }
//            else
//            {
//                head = cur2;
//                cur2 = cur2->next;
//            }
//            ListNode* tail = head;
//            while (cur1 && cur2)
//            {
//                if (cur1->val < cur2->val)
//                {
//                    tail->next = cur1;
//                    cur1 = cur1->next;
//                }
//                else
//                {
//                    tail->next = cur2;
//                    cur2 = cur2->next;
//                }
//                tail = tail->next;
//            }
//            if (cur1)
//            {
//                tail->next = cur1;
//            }
//            if (cur2)
//            {
//                tail->next = cur2;
//            }
//        }
//        return head;
//    }
//};


//class Solution {
//public:
//    ListNode* MergeTwoList(ListNode* a, ListNode* b)
//    {
//        if (a == nullptr || b == nullptr)
//        {
//            return a == nullptr ? b : a;
//        }
//        // 哨兵位
//        ListNode head;
//        ListNode* tail = &head;
//        while (a && b)
//        {
//            if (a->val < b->val)
//            {
//                tail->next = a;
//                a = a->next;
//            }
//            else
//            {
//                tail->next = b;
//                b = b->next;
//            }
//            tail = tail->next;
//        }
//        tail->next = (a ? a : b);
//        return head.next;
//    }
//
//    ListNode* Merge(vector<ListNode*>& lists, int l, int r)
//    {
//        if (l == r)
//        {
//            return lists[l];
//        }
//        else if (l > r)
//        {
//            return nullptr;
//        }
//        else
//        {
//            int mid = (l + r) >> 1;
//            return MergeTwoList(Merge(lists, l, mid), Merge(lists, mid + 1, r));
//        }
//    }
//
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        return Merge(lists, 0, lists.size() - 1);
//    }
//};


//class Solution {
//public:
//    struct cmp
//    {
//        bool operator()(ListNode* a, ListNode* b)
//        {
//            return a->val > b->val;
//        }
//    };
//
//    priority_queue<ListNode*, vector<ListNode*>, cmp> q;
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        for (auto node : lists)
//        {
//            if (node) q.push(node);
//        }
//        ListNode head;
//        ListNode* tail = &head;
//        while (!q.empty())
//        {
//            ListNode* node = q.top();
//            tail->next = node;
//            tail = tail->next;
//            q.pop();
//            if (node->next)
//            {
//                q.push(node->next);
//            }
//        }
//        return head.next;
//    }
//};