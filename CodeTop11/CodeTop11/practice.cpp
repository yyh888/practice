// 二叉树中的最大路径和
//class Solution {
//public:
//    int Max = INT_MIN;
//
//    int dfs(TreeNode* root)
//    {
//        if (!root) return 0;
//        int left = max(0, dfs(root->left));
//        int right = max(0, dfs(root->right));
//        int ret = root->val + left + right;
//        Max = max(Max, ret);
//        return max(root->val + left, root->val + right);
//    }
//
//    int maxPathSum(TreeNode* root) {
//        dfs(root);
//        return Max;
//    }
//};


// 字符串相加
//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        int n = num1.size(), m = num2.size();
//        int i = n - 1, j = m - 1;
//        int add = 0;
//        string res;
//        while (i >= 0 || j >= 0 || add)
//        {
//            if (i >= 0) add += num1[i--] - '0';
//            if (j >= 0) add += num2[j--] - '0';
//            res += add % 10 + '0';
//            add /= 10;
//        }
//        reverse(res.begin(), res.end());
//        return res;
//    }
//};


// 反转链表 II
//class Solution {
//public:
//    ListNode* Reverse(ListNode* head, ListNode* tail)
//    {
//        if (head == tail || head->next == tail) return head;
//        ListNode* tmp = Reverse(head->next, tail);
//        head->next->next = head;
//        head->next = tail;
//        return tmp;
//    }
//
//    ListNode* reverseBetween(ListNode* head, int left, int right) {
//        if (left == right) return head;
//        ListNode* cur = head;
//        ListNode* pHead = new ListNode;
//        ListNode* end = nullptr, * pre = pHead;
//        pHead->next = head;
//        while (--right)
//        {
//            --left;
//            if (left > 0)
//            {
//                pre = cur;
//            }
//            cur = cur->next;
//        }
//        end = cur->next;
//        pre->next = Reverse(pre->next, end);
//        return pHead->next;
//    }
//};