// 重建二叉树
// 递归
//class Solution {
//public:
//    TreeNode* _bulidTree(vector<int>& pre, vector<int>& in, int& pi, int begin, int end)
//    {
//        if (begin > end) return nullptr;
//        int mid = begin;
//        while (mid <= end)
//        {
//            if (in[mid] == pre[pi])
//                break;
//            mid++;
//        }
//        TreeNode* root = new TreeNode(pre[pi++]);
//        root->left = _bulidTree(pre, in, pi, begin, mid - 1);
//        root->right = _bulidTree(pre, in, pi, mid + 1, end);
//        return root;
//    }
//
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        int pi = 0;
//        return _bulidTree(preorder, inorder, pi, 0, preorder.size() - 1);
//    }
//};

//class Solution {
//public:
//    unordered_map<int, int> index;
//
//    TreeNode* _bulidTree(vector<int>& pre, vector<int>& in, int& pi, int begin, int end)
//    {
//        if (begin > end) return nullptr;
//        int mid = index[pre[pi]];
//        TreeNode* root = new TreeNode(pre[pi++]);
//        root->left = _bulidTree(pre, in, pi, begin, mid - 1);
//        root->right = _bulidTree(pre, in, pi, mid + 1, end);
//        return root;
//    }
//
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        int pi = 0;
//        for (int i = 0; i < preorder.size(); i++)
//        {
//            index[inorder[i]] = i;
//        }
//        return _bulidTree(preorder, inorder, pi, 0, preorder.size() - 1);
//    }
//};


// 迭代
//class Solution {
//public:
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        if (preorder.empty()) return nullptr;
//        stack<TreeNode*> st;
//        int inorIndex = 0;
//        TreeNode* root = new TreeNode(preorder[0]);
//        st.push(root);
//        for (int i = 1; i < preorder.size(); i++)
//        {
//            TreeNode* node = st.top();
//            if (node->val != inorder[inorIndex])
//            {
//                node->left = new TreeNode(preorder[i]);
//                st.push(node->left);
//            }
//            else
//            {
//                while (!st.empty() && st.top()->val == inorder[inorIndex])
//                {
//                    node = st.top();
//                    st.pop();
//                    inorIndex++;
//                }
//                node->right = new TreeNode(preorder[i]);
//                st.push(node->right);
//            }
//        }
//        return root;
//    }
//};

// 用两个栈实现队列
//class CQueue {
//public:
//    stack<int> Pushst;
//    stack<int> Popst;
//    CQueue() {
//    }
//
//    void appendTail(int value) {
//        Pushst.push(value);
//    }
//
//    int deleteHead() {
//        if (Pushst.empty() && Popst.empty()) return -1;
//        if (Popst.empty())
//        {
//            while (!Pushst.empty())
//            {
//                int val = Pushst.top();
//                Pushst.pop();
//                Popst.push(val);
//            }
//        }
//        int val = Popst.top();
//        Popst.pop();
//        return val;
//    }
//};