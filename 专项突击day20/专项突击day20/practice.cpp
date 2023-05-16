// 数组相对排序
//class Solution {
//public:
//    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//        unordered_map<int, int> hash;
//        int idx = 0;
//        for (auto& e : arr2)
//        {
//            hash[e] = idx++;
//        }
//        sort(arr1.begin(), arr1.end(), [&](int a, int b) {
//            if (hash.count(a))
//            {
//                return hash.count(b) ? hash[a] < hash[b] : true;
//            }
//            else
//            {
//                return hash.count(b) ? false : a < b;
//            }
//            });
//        return arr1;
//    }
//};


// 数组中的第 k 大的数字
//class Heap
//{
//public:
//    Heap(const vector<int>& nums)
//        : a(nums)
//        , n(nums.size())
//    {
//        for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//        {
//            AdjustDown(i);
//        }
//    }
//
//    void AdjustDown(int parent)
//    {
//        int child = parent * 2 + 1;
//        while (child < n)
//        {
//            if (child + 1 < n && a[child] < a[child + 1]) child++;
//            if (a[child] > a[parent])
//            {
//                swap(a[child], a[parent]);
//                parent = child;
//                child = 2 * parent + 1;
//            }
//            else break;
//        }
//    }
//
//    void pop()
//    {
//        swap(a[0], a[n - 1]);
//        a.pop_back();
//        n--;
//        AdjustDown(0);
//    }
//
//    int top()
//    {
//        return a[0];
//    }
//private:
//    vector<int> a;
//    int n;
//};
//
//
//class Solution {
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//        Heap hp(nums);
//        while (--k)
//        {
//            hp.pop();
//        }
//        return hp.top();
//    }
//};


// 链表排序
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//class Solution {
//public:
//    ListNode* MergeSort(ListNode* head)
//    {
//        if (head == nullptr || head->next == nullptr)
//        {
//            return head;
//        }
//        ListNode* pre = head;
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            pre = slow;
//            slow = slow->next;
//        }
//        pre->next = nullptr;
//        ListNode* h1 = MergeSort(head);
//        ListNode* h2 = MergeSort(slow);
//        return Merge(h1, h2);
//    }
//
//    ListNode* Merge(ListNode* h1, ListNode* h2)
//    {
//        ListNode* head = new ListNode;
//        ListNode* cur = head;
//        while (h1 && h2)
//        {
//            if (h1->val < h2->val)
//            {
//                cur->next = h1;
//                h1 = h1->next;
//            }
//            else
//            {
//                cur->next = h2;
//                h2 = h2->next;
//            }
//            cur = cur->next;
//        }
//        cur->next = !h1 ? h2 : h1;
//        return head->next;
//    }
//
//    ListNode* sortList(ListNode* head) {
//        ListNode* node = new ListNode;
//        node->next = MergeSort(head);
//        return node->next;
//    }
//};

//class Solution {
//public:
//    ListNode* Merge(ListNode* h1, ListNode* h2)
//    {
//        ListNode* head = new ListNode;
//        ListNode* cur = head;
//        while (h1 && h2)
//        {
//            if (h1->val < h2->val)
//            {
//                cur->next = h1;
//                h1 = h1->next;
//            }
//            else
//            {
//                cur->next = h2;
//                h2 = h2->next;
//            }
//            cur = cur->next;
//        }
//        cur->next = !h1 ? h2 : h1;
//        return head->next;
//    }
//
//    ListNode* sortList(ListNode* head) {
//        int len = 0;
//        ListNode* cur = head;
//        while (cur)
//        {
//            cur = cur->next;
//            len++;
//        }
//        ListNode* node = new ListNode;
//        node->next = head;
//        for (int gap = 1; gap < len; gap *= 2)
//        {
//            ListNode* pre = node, * cur = node->next;
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
//                pre->next = Merge(head1, head2);
//                while (pre && pre->next)
//                {
//                    pre = pre->next;
//                }
//                cur = next;
//            }
//        }
//        return node->next;
//    }
//};