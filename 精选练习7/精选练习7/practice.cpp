// 填充每个节点的下一个右侧节点指针
//class Solution {
//public:
//    Node* connect(Node* root) {
//        queue<Node*> qq;
//        qq.push(root);
//        int levelSize = 1;
//        while (qq.size())
//        {
//            while (levelSize--)
//            {
//                Node* tmp = qq.front();
//                qq.pop();
//                if (tmp)
//                {
//                    qq.push(tmp->left);
//                    qq.push(tmp->right);
//                    if (levelSize > 0)tmp->next = qq.front();
//                }
//            }
//            levelSize = qq.size();
//        }
//        return root;
//    }
//};

//
//class Solution {
//public:
//    Node* connect(Node* root) {
//        if (root == nullptr) return root;
//        Node* pre = root;
//        while (pre->left)
//        {
//            Node* tmp = pre;
//            while (tmp)
//            {
//                tmp->left->next = tmp->right;
//                if (tmp->next)
//                {
//                    tmp->right->next = tmp->next->left;
//                }
//                tmp = tmp->next;
//            }
//            pre = pre->left;
//        }
//        return root;
//    }
//};


//class Solution {
//public:
//    void dfs(Node* root)
//    {
//        if (root == nullptr) return;
//        Node* left = root->left, * right = root->right;
//        while (left)
//        {
//            left->next = right;
//            left = left->right;
//            right = right->left;
//        }
//        dfs(root->left);
//        dfs(root->right);
//    }
//
//    Node* connect(Node* root) {
//        dfs(root);
//        return root;
//    }
//};


// 二叉树的右视图
//class Solution {
//public:
//    vector<int> res;
//
//    void dfs(TreeNode* root, int lev)
//    {
//        if (root == nullptr) return;
//        if (lev >= res.size()) res.push_back(root->val);
//        dfs(root->right, lev + 1);
//        dfs(root->left, lev + 1);
//    }
//
//    vector<int> rightSideView(TreeNode* root) {
//        dfs(root, 0);
//        return res;
//    }
//};


// 填充每个节点的下一个右侧节点指针 II
//class Solution {
//public:
//    Node* connect(Node* root) {
//        if (root == nullptr) return nullptr;
//        Node* cur = root;
//        while (cur)
//        {
//            Node* head = new Node;
//            Node* pre = head;
//            while (cur)
//            {
//                if (cur->left)
//                {
//                    pre->next = cur->left;
//                    pre = cur->left;
//                }
//                if (cur->right)
//                {
//                    pre->next = cur->right;
//                    pre = cur->right;
//                }
//                cur = cur->next;
//            }
//            cur = head->next;
//        }
//        return root;
//    }
//};