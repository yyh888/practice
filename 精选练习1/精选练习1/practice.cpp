// ÂÝÐý¾ØÕó
//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        vector<int> res;
//        int left = 0, right = m - 1, top = 0, end = n - 1;
//        while (left <= right && top <= end)
//        {
//            for (int j = left; j <= right; j++) res.push_back(matrix[top][j]);
//            for (int i = top + 1; i <= end; i++) res.push_back(matrix[i][right]);
//            if (left < right&& top < end)
//            {
//                for (int j = right - 1; j > left; j--) res.push_back(matrix[end][j]);
//                for (int i = end; i > top; i--) res.push_back(matrix[i][left]);
//            }
//            left++;
//            top++;
//            end--;
//            right--;
//        }
//        return res;
//    }
//};


// ÂÝÐý¾ØÕó II
//class Solution {
//public:
//    vector<vector<int>> generateMatrix(int n) {
//        vector<vector<int>> vv(n, vector<int>(n));
//        int left = 0, right = n - 1, top = 0, end = n - 1;
//        int val = 1;
//        while (left <= right && top <= end)
//        {
//            for (int j = left; j <= right; j++) vv[top][j] = val++;
//            for (int i = top + 1; i <= end; i++) vv[i][right] = val++;
//            if (left < right&& top < end)
//            {
//                for (int j = right - 1; j > left; j--) vv[end][j] = val++;
//                for (int i = end; i > top; i--) vv[i][left] = val++;
//            }
//            left++;
//            right--;
//            top++;
//            end--;
//        }
//        return vv;
//    }
//};


// Ðý×ªÁ´±í
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
//    ListNode* rotateRight(ListNode* head, int k) {
//        int len = 0;
//        ListNode* cur = head;
//        while (cur)
//        {
//            len++;
//            cur = cur->next;
//        }
//        if (len <= 1) return head;
//        k %= len;
//        if (k == 0) return head;
//        ListNode* slow = head, * fast = head;
//        while (k--) fast = fast->next;
//        while (fast && fast->next)
//        {
//            slow = slow->next;
//            fast = fast->next;
//        }
//        ListNode* newhead = slow->next;
//        slow->next = nullptr;
//        fast->next = head;
//        return newhead;
//    }
//};