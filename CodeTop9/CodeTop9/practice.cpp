// 有效的括号
//class Solution {
//public:
//    bool isValid(string s) {
//        stack<char> st;
//        for (auto& e : s)
//        {
//            if (e == '(' || e == '[' || e == '{') st.push(e);
//            else
//            {
//                if (st.empty()) return false;
//                if ((e == ')' && st.top() != '(') || (e == ']' && st.top() != '[') || (e == '}' && st.top() != '{')) return false;
//                else st.pop();
//            }
//        }
//        return st.empty();
//    }
//};


// 二叉树的层序遍历
//class Solution {
//public:
//    vector<vector<int>> vv;
//
//    void dfs(TreeNode* root, int lev)
//    {
//        if (root == nullptr) return;
//        if (vv.size() < lev + 1) vv.push_back({});
//        vv[lev].push_back(root->val);
//        dfs(root->left, lev + 1);
//        dfs(root->right, lev + 1);
//    }
//
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        dfs(root, 0);
//        return vv;
//    }
//};


// 重排链表
//class Solution {
//public:
//    ListNode* reverse(ListNode* head)
//    {
//        if (head == nullptr || head->next == nullptr) return head;
//        ListNode* tmp = reverse(head->next);
//        head->next->next = head;
//        head->next = nullptr;
//        return tmp;
//    }
//
//    void reorderList(ListNode* head) {
//        // 找中间节点
//        ListNode* slow = head, * fast = head;
//        ListNode* pre = nullptr;
//        while (fast && fast->next)
//        {
//            pre = slow;
//            fast = fast->next->next;
//            slow = slow->next;
//        }
//        if (pre == nullptr) return;
//        pre->next = nullptr;
//        ListNode* l1 = head;
//        // 逆序
//        ListNode* l2 = reverse(slow);
//        ListNode* pHead = new ListNode;
//        ListNode* tail = pHead;
//        while (l1 || l2)
//        {
//            if (l1)
//            {
//                tail->next = l1;
//                tail = l1;
//                l1 = l1->next;
//            }
//            if (l2)
//            {
//                tail->next = l2;
//                tail = l2;
//                l2 = l2->next;
//            }
//        }
//    }
//};