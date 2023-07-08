// 快排
//class Solution {
//public:
//    void QuickSort(vector<int>& nums, int begin, int end)
//    {
//        if (begin >= end) return;
//        int keyIdx = begin + (rand() % (end - begin + 1));
//        int key = nums[keyIdx];
//        int l = begin - 1, r = end + 1;
//        while (l < r)
//        {
//            do ++l; while (nums[l] < key);
//            do --r; while (nums[r] > key);
//            if (l < r) swap(nums[l], nums[r]);
//        }
//        QuickSort(nums, begin, r);
//        QuickSort(nums, r + 1, end);
//    }
//    vector<int> sortArray(vector<int>& nums) {
//        QuickSort(nums, 0, nums.size() - 1);
//        return nums;
//    }
//};


// 最大子数组和
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n);
//        dp[0] = nums[0];
//        int Max = nums[0];
//        for (int i = 1; i < n; i++)
//        {
//            dp[i] = max(nums[i], dp[i - 1] + nums[i]);
//            Max = max(Max, dp[i]);
//        }
//        return Max;
//    }
//};


// 合并两个有序链表
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
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//        if (!list1) return list2;
//        if (!list2) return list1;
//        ListNode* pHead = new ListNode;
//        ListNode* tail = pHead;
//        while (list1 && list2)
//        {
//            if (list1->val < list2->val)
//            {
//                tail->next = list1;
//                list1 = list1->next;
//            }
//            else
//            {
//                tail->next = list2;
//                list2 = list2->next;
//            }
//            tail = tail->next;
//        }
//        if (!list1)
//        {
//            tail->next = list2;
//        }
//        if (!list2)
//        {
//            tail->next = list1;
//        }
//        return pHead->next;
//    }
//};