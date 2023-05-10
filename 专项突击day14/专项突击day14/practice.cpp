// 节点之和最大的路径
//class Solution {
//public:
//    int Max = INT_MIN;
//    int dfs(TreeNode* root)
//    {
//        if (root == nullptr) return 0;
//        int left = max(0, dfs(root->left));
//        int right = max(0, dfs(root->right));
//        Max = max(Max, root->val + left + right);
//        return root->val + max(left, right);
//    }
//
//    int maxPathSum(TreeNode* root) {
//        dfs(root);
//        return Max;
//    }
//};


// 展平二叉搜索树
//class Solution {
//public:
//    TreeNode* pre;
//
//    void dfs(TreeNode* root)
//    {
//        if (root == nullptr) return;
//        dfs(root->left);
//        pre->right = root;
//        root->left = nullptr;
//        pre = root;
//        dfs(root->right);
//    }
//
//    TreeNode* increasingBST(TreeNode* root) {
//        TreeNode* p = new TreeNode();
//        pre = p;
//        dfs(root);
//        return p->right;
//    }
//};


// 二叉搜索树中的中序后继
//class Solution {
//public:
//    vector<TreeNode*> v;
//    unordered_map<TreeNode*, int> hash;
//    void dfs(TreeNode* root)
//    {
//        if (root == nullptr) return;
//        dfs(root->left);
//        v.push_back(root);
//        hash[root] = v.size() - 1;
//        dfs(root->right);
//    }
//
//    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
//        dfs(root);
//        int i = hash[p];
//        if (i == v.size() - 1) return nullptr;
//        return v[i + 1];
//    }
//};


// 二叉搜索树中的中序后继
//class Solution {
//public:
//    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
//        TreeNode* minRight = p->right;
//        if (minRight)
//        {
//            while (minRight->left)
//            {
//                minRight = minRight->left;
//            }
//            return minRight;
//        }
//        TreeNode* cur = root;
//        TreeNode* res = nullptr;
//        while (cur)
//        {
//            if (cur->val > p->val)
//            {
//                res = cur;
//                cur = cur->left;
//            }
//            else
//            {
//                cur = cur->right;
//            }
//        }
//        return res;
//    }
//};


//  所有大于等于节点的值之和
//class Solution {
//public:
//    int sum = 0;
//    TreeNode* convertBST(TreeNode* root) {
//        if (root == nullptr) return nullptr;
//        convertBST(root->right);
//        root->val += sum;
//        sum = root->val;
//        convertBST(root->left);
//        return root;
//    }
//};

// 所有大于等于节点的值之和
//class Solution {
//public:
//    int sum = 0;
//    TreeNode* convertBST(TreeNode* root) {
//        if (root == nullptr) return nullptr;
//        convertBST(root->right);
//        root->val += sum;
//        sum = root->val;
//        convertBST(root->left);
//        return root;
//    }
//};


//二叉搜索树迭代器
//class BSTIterator {
//public:
//    BSTIterator(TreeNode* root) {
//        cur = root;
//    }
//
//    int next() {
//        while (cur)
//        {
//            st.push(cur);
//            cur = cur->left;
//        }
//        cur = st.top();
//        st.pop();
//        int res = cur->val;
//        cur = cur->right;
//        return res;
//    }
//
//    bool hasNext() {
//        return !st.empty() || cur != nullptr;
//    }
//private:
//    stack<TreeNode*> st;
//    TreeNode* cur;
//};


// 二叉搜索树中两个节点之和
//class Solution {
//    typedef pair<TreeNode*, bool> PTB;
//public:
//    bool findTarget(TreeNode* root, int k) {
//        unordered_map<int, int> hash;
//        TreeNode* cur = root;
//
//        stack<PTB> st;
//        while (cur || st.size())
//        {
//            while (cur)
//            {
//                st.push({ cur, false });
//                cur = cur->left;
//            }
//            TreeNode* node = st.top().first;
//            if (st.top().second == true)
//            {
//                st.pop();
//                if (hash[k - node->val])
//                {
//                    return true;
//                }
//                hash[node->val]++;
//            }
//            else
//            {
//                st.top().second = true;
//                cur = node->right;
//            }
//        }
//        return false;
//    }
//};

