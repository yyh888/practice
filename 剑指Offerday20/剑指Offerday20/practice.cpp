// ��������ĵ�һ�������ڵ�
//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//        int len1 = 0, len2 = 0;
//        ListNode* curA = headA, * curB = headB;
//        while (curA)
//        {
//            len1++;
//            curA = curA->next;
//        }
//        while (curB)
//        {
//            len2++;
//            curB = curB->next;
//        }
//        int add = abs(len1 - len2);
//        if (len1 > len2)
//        {
//            while (add--)
//            {
//                headA = headA->next;
//            }
//        }
//        else
//        {
//            while (add--)
//            {
//                headB = headB->next;
//            }
//        }
//        while (headA)
//        {
//            if (headA == headB)
//            {
//                return headA;
//            }
//            headA = headA->next;
//            headB = headB->next;
//        }
//        return nullptr;
//    }
//};


// �����������в������� I
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        int l = 0, r = nums.size() - 1;
//        int left, right;
//        // ��߽�
//        while (l <= r)
//        {
//            int mid = (l + r) >> 1;
//            if (nums[mid] >= target)
//            {
//                r = mid - 1;
//            }
//            else
//            {
//                l = mid + 1;
//            }
//        }
//        left = r;
//        l = 0, r = nums.size() - 1;
//        // �ұ߽�
//        while (l <= r)
//        {
//            int mid = (l + r) >> 1;
//            if (nums[mid] <= target)
//            {
//                l = mid + 1;
//            }
//            else
//            {
//                r = mid - 1;
//            }
//        }
//        right = l;
//        return right - left - 1;
//    }
//};

// 0��n-1��ȱʧ������
//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int l = 0, r = nums.size() - 1;
//        while (l <= r)
//        {
//            int mid = (l + r) >> 1;
//            if (nums[mid] == mid)
//            {
//                l = mid + 1;
//            }
//            else
//            {
//                r = mid - 1;
//            }
//        }
//        return r + 1;
//    }
//};