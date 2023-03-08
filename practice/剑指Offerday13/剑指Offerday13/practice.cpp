// ջ��ѹ�롢��������
//class Solution {
//public:
//    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//        stack<int> st;
//        int j = 0;
//        for (int i = 0; i < pushed.size(); i++)
//        {
//            st.push(pushed[i]);
//            while (!st.empty() && st.top() == popped[j])
//            {
//                st.pop();
//                ++j;
//            }
//        }
//        return st.empty();
//    }
//};

// ���ϵ��´�ӡ������
//class Solution {
//public:
//    vector<int> levelOrder(TreeNode* root) {
//        queue<TreeNode*> qq;
//        qq.push(root);
//        vector<int> v;
//        while (!qq.empty())
//        {
//            TreeNode* ret = qq.front();
//            qq.pop();
//            if (ret)
//            {
//                v.push_back(ret->val);
//                qq.push(ret->left);
//                qq.push(ret->right);
//            }
//        }
//        return v;
//    }
//};

// ���ϵ��´�ӡ������ II
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        queue<TreeNode*> qq;
//        qq.push(root);
//        int levelsize = 1;
//        vector<vector<int>> vv;
//        while (!qq.empty())
//        {
//            vector<int> v;
//            while (levelsize--)
//            {
//                TreeNode* ret = qq.front();
//                qq.pop();
//                if (ret)
//                {
//                    v.push_back(ret->val);
//                    qq.push(ret->left);
//                    qq.push(ret->right);
//                }
//            }
//            if (!v.empty()) vv.push_back(v);
//            levelsize = qq.size();
//        }
//        return vv;
//    }
//};


// ���ϵ��´�ӡ������ III
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        deque<TreeNode*> dq;
//        dq.push_back(root);
//        int level = 1;
//        int levelsize = 1;
//        vector<vector<int>> vv;
//        while (!dq.empty())
//        {
//            vector<int> v;
//            while (levelsize--)
//            {
//                if (level % 2)
//                {
//                    TreeNode* ret = dq.front();
//                    dq.pop_front();
//                    if (ret)
//                    {
//                        v.push_back(ret->val);
//                        dq.push_back(ret->left);
//                        dq.push_back(ret->right);
//                    }
//                }
//                else
//                {
//                    TreeNode* ret = dq.back();
//                    dq.pop_back();
//                    if (ret)
//                    {
//                        v.push_back(ret->val);
//                        dq.push_front(ret->right);
//                        dq.push_front(ret->left);
//                    }
//                }
//            }
//            level++;
//            levelsize = dq.size();
//            if (!v.empty()) vv.push_back(v);
//        }
//        return vv;
//    }
//};

