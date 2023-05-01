// 回文子字符串的个数
//class Solution {
//public:
//    int countSubstrings(string s) {
//        int res = 0;
//        int n = s.size();
//        for (int i = 0; i < n; i++)
//        {
//            res++;
//            int l = i, r = i;
//            while (r < n - 1 && s[r] == s[r + 1])
//            {
//                res++;
//                r++;
//            }
//            while (l > 0 && r < n - 1 && s[l - 1] == s[r + 1])
//            {
//                res++;
//                l--;
//                r++;
//            }
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    int countSubstrings(string s) {
//        int n = s.size();
//        int res = 0;
//        vector<vector<bool>> dp(n, vector<bool>(n));
//        for (int j = 0; j < n; j++)
//        {
//            for (int i = j; i >= 0; i--)
//            {
//                if (s[i] == s[j] && (j - i < 3 || dp[i + 1][j - 1]))
//                {
//                    dp[i][j] = true;
//                    res++;
//                }
//            }
//        }
//        return res;
//    }
//};


// 删除链表的倒数第 n 个结点
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode* pHead = new ListNode;
//        pHead->next = head;
//        ListNode* fast = head, * slow = head;
//        while (n--)
//        {
//            fast = fast->next;
//        }
//        ListNode* pre = pHead;
//        while (fast)
//        {
//            pre = slow;
//            slow = slow->next;
//            fast = fast->next;
//        }
//        pre->next = slow->next;
//        delete slow;
//        return pHead->next;
//    }
//};


// 链表中环的入口节点
//class Solution {
//public:
//    ListNode* detectCycle(ListNode* head) {
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            slow = slow->next;
//            if (fast == slow)
//            {
//                ListNode* meet = fast;
//                while (head != meet)
//                {
//                    head = head->next;
//                    meet = meet->next;
//                }
//                return head;
//            }
//        }
//        return nullptr;
//
//    }
//};


//class Solution {
//public:
//    ListNode* detectCycle(ListNode* head) {
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            slow = slow->next;
//            if (fast == slow)
//            {
//                ListNode* meet = slow;
//                int lenA = 0, lenB = 0;
//                ListNode* headA = head, * headB = meet->next;
//                while (headA != meet)
//                {
//                    headA = headA->next;
//                    lenA++;
//                }
//                while (headB != meet)
//                {
//                    headB = headB->next;
//                    lenB++;
//                }
//                ListNode* st = head, * lt = meet->next;
//                if (lenA > lenB)
//                {
//                    st = meet->next;
//                    lt = head;
//                }
//                int gap = abs(lenA - lenB);
//                while (gap--)
//                {
//                    lt = lt->next;
//                }
//                while (lt != st)
//                {
//                    lt = lt->next;
//                    st = st->next;
//                }
//                return lt;
//            }
//        }
//        return nullptr;
//    }
//};