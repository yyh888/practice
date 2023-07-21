// 二叉树的中序遍历
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        stack<TreeNode*> st;
//        vector<int> res;
//        TreeNode* cur = root;
//        while (st.size() || cur)
//        {
//            while (cur)
//            {
//                st.push(cur);
//                cur = cur->left;
//            }
//            TreeNode* tmp = st.top();
//            res.push_back(tmp->val);
//            st.pop();
//            cur = tmp->right;
//        }
//        return res;
//    }
//};


// 二叉树的后序遍历
//class Solution {
//public:
//    typedef pair<TreeNode*, bool> TB;
//    vector<int> postorderTraversal(TreeNode* root) {
//        vector<int> res;
//        stack<TB> st;
//        TreeNode* cur = root;
//        while (st.size() || cur)
//        {
//            while (cur)
//            {
//                st.push({ cur, false });
//                cur = cur->left;
//            }
//            auto& [node, flag] = st.top();
//            if (flag)
//            {
//                st.pop();
//                res.push_back(node->val);
//            }
//            else
//            {
//                flag = true;
//                cur = node->right;
//            }
//        }
//        return res;
//    }
//};

// 最小覆盖子串
    //class Solution {
    //public:
    //    unordered_map<char, int> hashs;
    //    unordered_map<char, int> hasht;

    //    bool check()
    //    {
    //        for (auto& e : hasht)
    //        {
    //            if (hashs[e.first] < e.second) return false;
    //        }
    //        return true;
    //    }

    //    string minWindow(string s, string t) {
    //        int maxLen = INT_MAX;
    //        int begin = 0;
    //        for (auto& e : t)
    //        {
    //            hasht[e]++;
    //        }
    //        for (int i = 0, j = 0; i < s.size(); i++)
    //        {
    //            hashs[s[i]]++;
    //            while (check())
    //            {
    //                if (i - j + 1 < maxLen)
    //                {
    //                    begin = j;
    //                    maxLen = i - j + 1;
    //                }
    //                hashs[s[j++]]--;
    //            }
    //        }
    //        if (maxLen == INT_MAX) return "";
    //        return s.substr(begin, maxLen);
    //    }
    //};