// 排序链表
//class Solution {
//public:
//    ListNode* sortList(ListNode* head) {
//        return MergeSort(head, nullptr);
//    }
//
//    ListNode* MergeSort(ListNode* head, ListNode* tail)
//    {
//        if (head == tail)
//        {
//            return head;
//        }
//        if (head->next == tail)
//        {
//            head->next = nullptr;
//            return head;
//        }
//        ListNode* slow = head, * fast = head;
//        while (fast != tail)
//        {
//            slow = slow->next;
//            fast = fast->next;
//            if (fast != tail)
//            {
//                fast = fast->next;
//            }
//        }
//        return merge(MergeSort(head, slow), MergeSort(slow, tail));
//    }
//
//    ListNode* merge(ListNode* head1, ListNode* head2)
//    {
//        ListNode* head = new ListNode;// 哨兵
//        ListNode* tail = head;
//        while (head1 && head2)
//        {
//            if (head1->val < head2->val)
//            {
//                tail->next = head1;
//                tail = head1;
//                head1 = head1->next;
//            }
//            else
//            {
//                tail->next = head2;
//                tail = head2;
//                head2 = head2->next;
//            }
//        }
//        if (head1)
//        {
//            tail->next = head1;
//        }
//        else
//        {
//            tail->next = head2;
//        }
//        return head->next;
//    }
//};


//class Solution {
//public:
//    ListNode* sortList(ListNode* head) {
//        return MergeSort(head, nullptr);
//    }
//
//    ListNode* MergeSort(ListNode* head, ListNode* tail)
//    {
//        if (head == tail)
//        {
//            return head;
//        }
//        if (head->next == tail)// 断开
//        {
//            head->next = nullptr;
//            return head;
//        }
//        ListNode* slow = head, * fast = head;
//        while (fast != tail && fast->next != tail)
//        {
//            fast = fast->next->next;
//            slow = slow->next;
//        }
//        return merge(MergeSort(head, slow), MergeSort(slow, tail));
//    }
//
//    ListNode* merge(ListNode* head1, ListNode* head2)
//    {
//        ListNode* head = new ListNode;// 哨兵
//        ListNode* tail = head;
//        while (head1 && head2)
//        {
//            if (head1->val < head2->val)
//            {
//                tail->next = head1;
//                tail = head1;
//                head1 = head1->next;
//            }
//            else
//            {
//                tail->next = head2;
//                tail = head2;
//                head2 = head2->next;
//            }
//        }
//        if (head1)
//        {
//            tail->next = head1;
//        }
//        else
//        {
//            tail->next = head2;
//        }
//        return head->next;
//    }
//};


//class Solution {
//public:
//    ListNode* sortList(ListNode* head) {
//        if (head == nullptr)
//        {
//            return head;
//        }
//        // 求长度
//        int len = 0;
//        ListNode* cur = head;
//        while (cur)
//        {
//            cur = cur->next;
//            len++;
//        }
//        ListNode* phead = new ListNode(0, head);// 哨兵
//        for (int gap = 1; gap < len; gap *= 2)
//        {
//            ListNode* pre = phead, * cur = phead->next;
//            while (cur)
//            {
//                ListNode* head1 = cur;
//                for (int i = 1; i < gap && cur && cur->next; i++)
//                {
//                    cur = cur->next;
//                }
//                ListNode* head2 = cur->next;
//                cur->next = nullptr;
//                cur = head2;
//                for (int i = 1; i < gap && cur && cur->next; i++)
//                {
//                    cur = cur->next;
//                }
//                ListNode* next = nullptr;
//                if (cur)
//                {
//                    next = cur->next;
//                    cur->next = nullptr;
//                }
//                ListNode* merged = merge(head1, head2);
//                pre->next = merged;
//                while (pre && pre->next)
//                {
//                    pre = pre->next;
//                }
//                cur = next;
//            }
//        }
//        return phead->next;
//    }
//
//    ListNode* merge(ListNode* head1, ListNode* head2)
//    {
//        ListNode* head = new ListNode;// 哨兵
//        ListNode* tail = head;
//        while (head1 && head2)
//        {
//            if (head1->val < head2->val)
//            {
//                tail->next = head1;
//                tail = head1;
//                head1 = head1->next;
//            }
//            else
//            {
//                tail->next = head2;
//                tail = head2;
//                head2 = head2->next;
//            }
//        }
//        if (head1)
//        {
//            tail->next = head1;
//        }
//        else
//        {
//            tail->next = head2;
//        }
//        return head->next;
//    }
//};


// 乘积最大子数组
//class Solution {
//public:
//    int maxProduct(vector<int>& nums) {
//        vector<int> mindp(nums), maxdp(nums);
//        for (int i = 1; i < nums.size(); i++)
//        {
//            mindp[i] = min(maxdp[i - 1] * nums[i], min(nums[i], mindp[i - 1] * nums[i]));
//            maxdp[i] = max(mindp[i - 1] * nums[i], max(nums[i], maxdp[i - 1] * nums[i]));
//        }
//        int res = nums[0];
//        for (int i = 0; i < nums.size(); i++)
//        {
//            res = max(res, max(mindp[i], maxdp[i]));
//        }
//        return res;
//    }
//};


// 打家劫舍
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        if (nums.size() <= 1)
//        {
//            return nums[0];
//        }
//        vector<int> dp(nums.size());
//        dp[0] = nums[0];
//        dp[1] = nums[1];
//        for (int i = 2; i < nums.size(); i++)
//        {
//            for (int j = 0; j < i - 1; j++)
//            {
//                dp[i] = max(nums[i], max(dp[i], dp[j] + nums[i]));
//            }
//        }
//        int res = nums[0];
//        for (int i = 0; i < dp.size(); i++)
//        {
//            res = max(res, dp[i]);
//        }
//        return res;
//    }
//};

//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n);
//        dp[0] = nums[0];
//        for (int i = 1; i < n; i++)
//        {
//            if (i == 1)
//            {
//                dp[i] = max(dp[0], nums[i]);
//            }
//            else
//            {
//                dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
//            }
//        }
//        return dp[n - 1];
//    }
//};


//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        int pre = 0, cur = 0, tmp;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            tmp = cur;
//            cur = max(cur, pre + nums[i]);
//            pre = tmp;
//        }
//        return cur;
//    }
//};


