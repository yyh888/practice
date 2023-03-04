// 删除链表的节点
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//class Solution {
//public:
//    ListNode* deleteNode(ListNode* head, int val) {
//        ListNode* pre = nullptr, * cur = head;
//        while (cur)
//        {
//            if (cur->val == val)
//            {
//                if (pre == nullptr)
//                {
//                    pre = cur;
//                    cur = cur->next;
//                    head = cur;
//                }
//                else
//                {
//                    pre->next = cur->next;
//                }
//                break;
//            }
//            else
//            {
//                pre = cur;
//                cur = cur->next;
//            }
//        }
//        return head;
//    }
//};


// 调整数组顺序使奇数位于偶数前面
//class Solution {
//public:
//    vector<int> exchange(vector<int>& nums) {
//        vector<int> v;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] % 2)
//            {
//                v.push_back(nums[i]);
//            }
//        }
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] % 2 == 0)
//            {
//                v.push_back(nums[i]);
//            }
//        }
//        return v;
//    }
//};

// 原地交换
//class Solution {
//public:
//    vector<int> exchange(vector<int>& nums) {
//        int l = 0, r = nums.size() - 1;
//        while (l < r)
//        {
//            while (l < r && nums[r] % 2 == 0)
//            {
//                r--;
//            }
//            while (l < r && nums[l] % 2)
//            {
//                l++;
//            }
//            if (l < r) swap(nums[l], nums[r]);
//        }
//        return nums;
//    }
//};