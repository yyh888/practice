// ÅÅÐòÁ´±í
//class Solution {
//public:
//    ListNode* Merge(ListNode* l1, ListNode* l2)
//    {
//        ListNode* pHead = new ListNode, * tail = pHead;
//        while (l1 && l2)
//        {
//            if (l1->val < l2->val)
//            {
//                tail->next = l1;
//                l1 = l1->next;
//            }
//            else
//            {
//                tail->next = l2;
//                l2 = l2->next;
//            }
//            tail = tail->next;
//        }
//        if (l1) tail->next = l1;
//        else tail->next = l2;
//        return pHead->next;
//    }
//
//    ListNode* MergeSort(ListNode* head)
//    {
//        if (head == nullptr || head->next == nullptr) return head;
//        ListNode* fast = head, * slow = head;
//        ListNode* pre = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            pre = slow;
//            slow = slow->next;
//        }
//        pre->next = nullptr;
//        return Merge(MergeSort(head), MergeSort(slow));
//    }
//
//    ListNode* sortList(ListNode* head) {
//        return MergeSort(head);
//    }
//};


//class Solution {
//public:
//    ListNode* Merge(ListNode* l1, ListNode* l2)
//    {
//        ListNode* pHead = new ListNode, * tail = pHead;
//        while (l1 && l2)
//        {
//            if (l1->val < l2->val)
//            {
//                tail->next = l1;
//                l1 = l1->next;
//            }
//            else
//            {
//                tail->next = l2;
//                l2 = l2->next;
//            }
//            tail = tail->next;
//        }
//        if (l1) tail->next = l1;
//        else tail->next = l2;
//        return pHead->next;
//    }
//
//    int GetLen(ListNode* head)
//    {
//        int len = 0;
//        while (head)
//        {
//            len++;
//            head = head->next;
//        }
//        return len;
//    }
//
//    ListNode* sortList(ListNode* head) {
//        int len = GetLen(head);
//        ListNode* pHead = new ListNode;
//        pHead->next = head;
//        for (int gap = 1; gap < len; gap *= 2)
//        {
//            ListNode* pre = pHead, * cur = pre->next;
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
//                ListNode* Next = nullptr;
//                if (cur)
//                {
//                    Next = cur->next;
//                    cur->next = nullptr;
//                }
//                pre->next = Merge(head1, head2);
//                // ÕÒÎ²
//                while (pre && pre->next)
//                {
//                    pre = pre->next;
//                }
//                cur = Next;
//            }
//        }
//        return pHead->next;
//    }
//};



// ¶Ô³Æ¶þ²æÊ÷
//class Solution {
//public:
//    bool dfs(TreeNode* left, TreeNode* right)
//    {
//        if (left == nullptr && right == nullptr) return true;
//        if (left == nullptr || right == nullptr) return false;
//        if (!dfs(left->left, right->right)) return false;
//        if (!dfs(left->right, right->left)) return false;
//        if (left->val != right->val) return false;
//        return true;
//    }
//
//    bool isSymmetric(TreeNode* root) {
//        if (root == nullptr) return true;
//        return dfs(root->left, root->right);
//    }
//};


//class Solution {
//public:
//    bool isSymmetric(TreeNode* root) {
//        queue<TreeNode*> qq;
//        qq.push(root->left);
//        qq.push(root->right);
//        while (qq.size())
//        {
//            TreeNode* left = qq.front();
//            qq.pop();
//            TreeNode* right = qq.front();
//            qq.pop();
//            if (left == nullptr && right == nullptr) continue;
//            if (left == nullptr || right == nullptr) return false;
//            if (left->val != right->val) return false;
//            qq.push(left->left);
//            qq.push(right->right);
//
//            qq.push(left->right);
//            qq.push(right->left);
//        }
//        return true;
//    }
//};


// ±È½Ï°æ±¾ºÅ
//class Solution {
//public:
//    int compareVersion(string version1, string version2) {
//        int n = version1.size(), m = version2.size();
//        int i = 0, j = 0;
//        while (i < n || j < m)
//        {
//            int x = 0;
//            while (i < n && version1[i] != '.')
//            {
//                x = x * 10 + (version1[i] - '0');
//                i++;
//            }
//            int y = 0;
//            while (j < m && version2[j] != '.')
//            {
//                y = y * 10 + (version2[j] - '0');
//                j++;
//            }
//            if (x < y) return -1;
//            if (x > y) return 1;
//            i++;
//            j++;
//        }
//        return 0;
//    }
//};