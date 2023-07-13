// 合并两个有序数组
//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        int i = m - 1, j = n - 1;
//        int idx = m + n - 1;
//        while (i >= 0 && j >= 0)
//        {
//            if (nums1[i] > nums2[j])
//            {
//                nums1[idx--] = nums1[i];
//                i--;
//            }
//            else
//            {
//                nums1[idx--] = nums2[j];
//                j--;
//            }
//        }
//        while (i >= 0)
//        {
//            nums1[idx--] = nums1[i--];
//        }
//        while (j >= 0)
//        {
//            nums1[idx--] = nums2[j--];
//        }
//    }
//};


// 缺失的第一个正数
//class Solution {
//public:
//    int firstMissingPositive(vector<int>& nums) {
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            while (nums[i] != i + 1)
//            {
//                if (nums[i] <= 0 || nums[i] > n || nums[i] == nums[nums[i] - 1])
//                {
//                    break;
//                }
//                swap(nums[i], nums[nums[i] - 1]);
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] != i + 1)
//            {
//                return i + 1;
//            }
//        }
//        return n + 1;
//    }
//};


// 环形链表
//class Solution {
//public:
//    bool hasCycle(ListNode* head) {
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//            if (fast == slow) return true;
//        }
//        return false;
//    }
//};