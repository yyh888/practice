// 两数相加
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
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        ListNode* head = nullptr, * tail = nullptr;
//        int add = 0;
//        while (l1 && l2)
//        {
//            ListNode* newnode = new ListNode((l1->val + l2->val + add) % 10);
//            add = (l1->val + l2->val + add) / 10;
//            if (head == nullptr)
//            {
//                head = newnode;
//                tail = head;
//            }
//            else
//            {
//                tail->next = newnode;
//                tail = tail->next;
//            }
//            l1 = l1->next;
//            l2 = l2->next;
//        }
//        while (l1)
//        {
//            ListNode* newnode = new ListNode((l1->val + add) % 10);
//            add = (l1->val + add) / 10;
//            tail->next = newnode;
//            tail = tail->next;
//            l1 = l1->next;
//        }
//        while (l2)
//        {
//            ListNode* newnode = new ListNode((l2->val + add) % 10);
//            add = (l2->val + add) / 10;
//            tail->next = newnode;
//            tail = tail->next;
//            l2 = l2->next;
//        }
//        if (add)
//        {
//            ListNode* newnode = new ListNode(add);
//            tail->next = newnode;
//        }
//        return head;
//    }
//};


// 无重复字符的最长子串
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        unordered_map<char, int> hash;
//        int res = 0;
//        for (int i = 0, j = 0; i < s.size(); i++)
//        {
//            hash[s[i]]++;
//            while (hash[s[i]] > 1)
//            {
//                hash[s[j]]--;
//                j++;
//            }
//            res = max(res, i - j + 1);
//        }
//        return res;
//    }
//};

// 寻找两个正序数组的中位数
//class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int i = 0, j = 0;
//        int n = nums1.size(), m = nums2.size();
//        vector<int> res(n + m);
//        int idx = 0;
//        while (i < n && j < m)
//        {
//            if (nums1[i] < nums2[j])
//            {
//                res[idx++] = nums1[i++];
//            }
//            else
//            {
//                res[idx++] = nums2[j++];
//            }
//        }
//        while (i < n)
//        {
//            res[idx++] = nums1[i++];
//        }
//        while (j < m)
//        {
//            res[idx++] = nums2[j++];
//        }
//        int mid = (n + m) / 2;
//        if ((n + m) % 2)
//        {
//            return (double)res[mid];
//        }
//        else
//        {
//            return (res[mid - 1] + res[mid]) / 2.0;
//        }
//    }
//};


//class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int i = 0, j = 0;
//        int n = nums1.size() + nums2.size();
//        int t1 = 0, t2 = 0;
//        for (int k = 0; k <= n / 2; k++)
//        {
//            if (i >= nums1.size())
//            {
//                t1 = t2;
//                t2 = nums2[j];
//                j++;
//            }
//            else if (j >= nums2.size())
//            {
//                t1 = t2;
//                t2 = nums1[i];
//                i++;
//            }
//            else if (nums1[i] < nums2[j])
//            {
//                t1 = t2;
//                t2 = nums1[i];
//                i++;
//            }
//            else
//            {
//                t1 = t2;
//                t2 = nums2[j];
//                j++;
//            }
//        }
//        if (n % 2)
//        {
//            return (double)t2;
//        }
//        else
//        {
//            return (t1 + t2) / 2.0;
//        }
//    }
//};

//class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int i = 0, j = 0;
//        int n = nums1.size() + nums2.size();
//        int t1 = 0, t2 = 0;
//        for (int k = 0; k <= n / 2; k++)
//        {
//            t1 = t2;
//            if (i < nums1.size() && (j >= nums2.size() || nums1[i] < nums2[j]))
//            {
//                t2 = nums1[i++];
//            }
//            else
//            {
//                t2 = nums2[j++];
//            }
//        }
//        if (n % 2)
//        {
//            return (double)t2;
//        }
//        else
//        {
//            return (t1 + t2) / 2.0;
//        }
//    }
//};