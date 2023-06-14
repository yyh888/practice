// 2 的幂
//class Solution {
//public:
//    bool isPowerOfTwo(int n) {
//        return n > 0 && (n & (n - 1)) == 0;
//    }
//};

//class Solution {
//public:
//    long long lowbit(long long x)
//    {
//        return x & -x;
//    }
//
//    bool isPowerOfTwo(int n) {
//        return n && (~lowbit(n) & n) == 0;
//    }
//};


// 二叉搜索树的最近公共祖先
//class Solution {
//public:
//    TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q)
//    {
//        if (root == nullptr) return root;
//
//        if (root->val < p->val && root->val < q->val) return dfs(root->right, p, q);
//        else if (root->val > p->val && root->val > q->val) return dfs(root->left, p, q);
//        else return root;
//    }
//
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        return dfs(root, p, q);
//    }
//};


// 删除链表中的节点
//class Solution {
//public:
//    void deleteNode(ListNode* node) {
//        ListNode* next = node->next;
//        ListNode* pre = node;
//        while (next)
//        {
//            node->val = next->val;
//            pre = node;
//            node = next;
//            next = next->next;
//        }
//        pre->next = nullptr;
//    }
//};


