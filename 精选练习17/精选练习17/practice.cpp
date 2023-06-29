// 合并 K 个升序链表
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
//    struct cmp
//    {
//        bool operator()(ListNode* h1, ListNode* h2)
//        {
//            return h1->val > h2->val;
//        }
//    };
//
//    priority_queue<ListNode*, vector<ListNode*>, cmp> q;
//
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        int n = lists.size();
//        for (int i = 0; i < n; i++)
//        {
//            if (lists[i])
//                q.push(lists[i]);
//        }
//        ListNode* head = new ListNode;
//        ListNode* tail = head;
//        while (q.size())
//        {
//            tail->next = q.top();
//            ListNode* cur = nullptr;
//            if (q.top())
//            {
//                cur = q.top()->next;
//                tail = tail->next;
//            }
//            q.pop();
//            if (cur) q.push(cur);
//        }
//        return head->next;
//    }
//};


//class Solution {
//public:
//    bool search(vector<vector<int>>& vv, int n, int target, int k)
//    {
//        int num = 0;
//        int i = n - 1, j = 0;
//        while (i >= 0 && j < n)
//        {
//            if (vv[i][j] <= target)
//            {
//                num += i + 1;
//                j++;
//            }
//            else
//            {
//                i--;
//            }
//        }
//        return num >= k;
//    }
//
//
//    int kthSmallest(vector<vector<int>>& matrix, int k) {
//        int n = matrix.size();
//        int l = matrix[0][0], r = matrix[n - 1][n - 1];
//        while (l < r)
//        {
//            int mid = l + (r - l) / 2;
//            if (search(matrix, n, mid, k))
//            {
//                r = mid;
//            }
//            else
//            {
//                l = mid + 1;
//            }
//        }
//        return l;
//    }
//};