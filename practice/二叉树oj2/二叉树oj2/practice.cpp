//class Solution {
//public:
//	void _Convert(TreeNode*& prev, TreeNode* cur)
//	{
//		if (cur == nullptr) return;
//		_Convert(prev, cur->left);
//		cur->left = prev;
//		if (prev) prev->right = cur;
//		prev = cur;
//		_Convert(prev, cur->right);
//	}
//
//	TreeNode* Convert(TreeNode* pRootOfTree) {
//		TreeNode* prev = nullptr;
//		_Convert(prev, pRootOfTree);
//		TreeNode* head = pRootOfTree;
//		while (head && head->left)
//		{
//			head = head->left;
//		}
//		return head;
//	}
//};


//class Solution {
//public:
//    TreeNode* _buildTree(vector<int>& preorder, vector<int>& inorder, int& pi, int begin, int end)
//    {
//        if (begin > end) return nullptr;
//        int mid = begin;
//        while (mid <= end)
//        {
//            if (preorder[pi] == inorder[mid]) break;
//            else mid++;
//        }
//        TreeNode* cur = new TreeNode(preorder[pi++]);
//        cur->left = _buildTree(preorder, inorder, pi, begin, mid - 1);
//        cur->right = _buildTree(preorder, inorder, pi, mid + 1, end);
//        return cur;
//    }
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        int pi = 0, begin = 0, end = preorder.size() - 1;
//        return _buildTree(preorder, inorder, pi, begin, end);
//    }
//};

//class Solution {
//public:
//    TreeNode* _buildTree(vector<int>& inorder, vector<int>& postorder, int& pi, int begin, int end)
//    {
//        if (begin > end) return nullptr;
//        int mid = begin;
//        while (mid <= end)
//        {
//            if (inorder[mid] == postorder[pi]) break;
//            mid++;
//        }
//        TreeNode* root = new TreeNode(postorder[pi--]);
//        root->right = _buildTree(inorder, postorder, pi, mid + 1, end);
//        root->left = _buildTree(inorder, postorder, pi, begin, mid - 1);
//        return root;
//    }
//
//    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//        int pi = postorder.size() - 1;
//        return _buildTree(inorder, postorder, pi, 0, inorder.size() - 1);
//    }
//};

//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//        vector<int> v;
//        stack<TreeNode*> st;
//        TreeNode* cur = root;
//        while (!st.empty() || cur)
//        {
//            while (cur)
//            {
//                v.push_back(cur->val);
//                st.push(cur);
//                cur = cur->left;
//            }
//            TreeNode* top = st.top();
//            st.pop();
//
//            cur = top->right;
//        }
//        return v;
//    }
//};


//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> v;
//        stack<TreeNode*> st;
//        TreeNode* cur = root;
//        while (!st.empty() || cur)
//        {
//            while (cur)
//            {
//                st.push(cur);
//                cur = cur->left;
//            }
//            TreeNode* top = st.top();
//            st.pop();
//            v.push_back(top->val);
//            cur = top->right;
//        }
//        return v;
//    }
//};


class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> v;
        TreeNode* cur = root;
        TreeNode* prev = nullptr;
        while (cur || !st.empty())
        {
            while (cur)
            {
                st.push(cur);
                cur = cur->left;
            }

            TreeNode* top = st.top();
            if (top->right == nullptr || top->right == prev)
            {
                st.pop();
                v.push_back(top->val);
                prev = top;
            }
            else
            {
                cur = top->right;
            }
        }
        return v;
    }
};