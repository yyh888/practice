// 从前序与中序遍历序列构造二叉树
//class Solution {
//public:
//    unordered_map<int, int> hash;
//    int n;
//
//    TreeNode* dfs(vector<int>& pre, vector<int>& in, int& i, int begin, int end)
//    {
//        if (begin > end) return nullptr;
//        int mid = hash[pre[i]];
//        TreeNode* root = new TreeNode(pre[i++]);
//        root->left = dfs(pre, in, i, begin, mid - 1);
//        root->right = dfs(pre, in, i, mid + 1, end);
//        return root;
//    }
//
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        n = preorder.size();
//        for (int i = 0; i < n; i++)
//        {
//            hash.insert({ inorder[i], i });
//        }
//        int i = 0;
//        return dfs(preorder, inorder, i, 0, n - 1);
//    }
//};



// 环形链表 II
//class Solution {
//public:
//    ListNode* detectCycle(ListNode* head) {
//        // 找相遇点
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//            if (fast == slow)
//            {
//                ListNode* meet = fast;
//                while (head != meet)
//                {
//                    head = head->next;
//                    meet = meet->next;
//                }
//                return meet;
//            }
//        }
//        return nullptr;
//    }
//};

// 最长有效括号
//class Solution {
//public:
//    int longestValidParentheses(string s) {
//        int n = s.size();
//        int Max = 0;
//        vector<int> dp(n);
//        for (int i = 1; i < n; i++)
//        {
//            if (s[i] == ')')
//            {
//                if (s[i - 1] == '(')
//                {
//                    if (i >= 2) dp[i] = dp[i - 2] + 2;
//                    else dp[i] += 2;
//                }
//                else
//                {
//                    if (i - dp[i - 1] > 0 && s[i - dp[i - 1] - 1] == '(')
//                    {
//                        if (i - dp[i - 1] - 2 > 0)
//                        {
//                            dp[i] = dp[i - 1] + dp[i - dp[i - 1] - 2] + 2;
//                        }
//                        else
//                        {
//                            dp[i] = dp[i - 1] + 2;
//                        }
//                    }
//                }
//                Max = max(Max, dp[i]);
//            }
//        }
//        return Max;
//    }
//};


//class Solution {
//public:
//    int longestValidParentheses(string s) {
//        stack<int> st;
//        st.push(-1);
//        int Max = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] == '(') st.push(i);
//            else
//            {
//                st.pop();
//                if (st.empty())
//                {
//                    st.push(i);
//                }
//                else
//                {
//                    Max = max(Max, i - st.top());
//                }
//            }
//        }
//        return Max;
//    }
//};