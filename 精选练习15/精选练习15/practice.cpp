// 计算右侧小于当前元素的个数
//class Solution {
//public:
//    vector<int> ans;
//    vector<int> idx;
//    vector<int> idxtmp;
//
//    void _Merge(vector<int>& a, int l, int mid, int r)
//    {
//        int i = l, j = mid + 1, p = l;
//        while (i <= mid && j <= r)
//        {
//            if (a[idx[i]] <= a[idx[j]])
//            {
//                idxtmp[p] = idx[i];
//                ans[idx[i]] += (j - mid - 1);
//                ++i;
//                ++p;
//            }
//            else
//            {
//                idxtmp[p] = idx[j];
//                ++j;
//                ++p;
//            }
//        }
//
//        while (i <= mid)
//        {
//            idxtmp[p] = idx[i];
//            ans[idx[i]] += (j - mid - 1);
//            ++i;
//            ++p;
//        }
//
//        while (j <= r)
//        {
//            idxtmp[p] = idx[j];
//            ++j;
//            ++p;
//        }
//
//        for (int k = l; k <= r; ++k)
//        {
//            idx[k] = idxtmp[k];
//        }
//    }
//
//    void Merge(vector<int>& nums, int begin, int end)
//    {
//        if (begin >= end) return;
//        int mid = (begin + end) >> 1;
//        Merge(nums, begin, mid);
//        Merge(nums, mid + 1, end);
//        _Merge(nums, begin, mid, end);
//    }
//
//    vector<int> countSmaller(vector<int>& nums) {
//        int n = nums.size();
//        ans.resize(n);
//        idx.resize(n);
//        for (int i = 0; i < n; i++) idx[i] = i;
//        idxtmp = idx;
//        Merge(nums, 0, n - 1);
//        return ans;
//    }
//};


// 3 的幂
//class Solution {
//public:
//    bool isPowerOfThree(int n) {
//        while (n && n % 3 == 0)
//        {
//            n /= 3;
//        }
//        return n == 1;
//    }
//};

// 奇偶链表
//class Solution {
//public:
//    ListNode* oddEvenList(ListNode* head) {
//        int idx = 1;
//        ListNode* head1 = new ListNode;
//        ListNode* head2 = new ListNode;
//        ListNode* tail1 = head1, * tail2 = head2;
//        ListNode* cur = head;
//        while (cur)
//        {
//            if (idx % 2)
//            {
//                tail1->next = cur;
//                tail1 = cur;
//            }
//            else
//            {
//                tail2->next = cur;
//                tail2 = cur;
//            }
//            cur = cur->next;
//            idx++;
//        }
//        tail2->next = nullptr;
//        tail1->next = head2->next;
//        return head1->next;
//    }
//};