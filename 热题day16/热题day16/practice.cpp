// 二叉树的序列化与反序列化
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//class Codec {
//public:
//
//    void dfs(TreeNode* root, string& res)
//    {
//        if (root == nullptr)
//        {
//            res += '*';
//            res += ' ';
//            return;
//        }
//        res += to_string(root->val);
//        res += ' ';
//        dfs(root->left, res);
//        dfs(root->right, res);
//    }
//
//    // Encodes a tree to a single string.
//    string serialize(TreeNode* root) {
//        string res;
//        dfs(root, res);
//        return res;
//    }
//
//    TreeNode* Create(list<string>& lt)
//    {
//        if (lt.empty())
//        {
//            return nullptr;
//        }
//        if (lt.front() == "*")
//        {
//            lt.pop_front();
//            return nullptr;
//        }
//        TreeNode* root = new TreeNode(stoi(lt.front()));
//        lt.pop_front();
//        root->left = Create(lt);
//        root->right = Create(lt);
//        return root;
//    }
//
//    // Decodes your encoded data to tree.
//    TreeNode* deserialize(string data) {
//        int i = 0;
//        list<string> lt;
//        string ret;
//        for (auto& ch : data)
//        {
//            if (ch == ' ')
//            {
//                lt.push_back(ret);
//                ret.clear();
//            }
//            else
//            {
//                ret += ch;
//            }
//        }
//        return Create(lt);
//    }
//};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));



// 最长递增子序列
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n, 1);
//        int res = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (nums[j] < nums[i])
//                {
//                    dp[i] = max(dp[i], dp[j] + 1);
//                    res = max(res, dp[i]);
//                }
//            }
//        }
//        return res;
//    }
//};


// 删除无效的括号
//class Solution {
//public:
//    set<string> st;
//    int Max, n, len;
//
//    vector<string> removeInvalidParentheses(string s) {
//        int l = 0, r = 0;
//        n = s.size();
//        for (int i = 0; i < n; i++)
//        {
//            if (s[i] == '(') l++;
//            else if (s[i] == ')') r++;
//        }
//        Max = min(l, r);
//        dfs(s, 0, "", 0);
//        vector<string> v(st.begin(), st.end());
//        return v;
//    }
//
//    void dfs(string& s, int i, string res, int score)
//    {
//        if (score > Max || score < 0) return;
//        if (i == n)
//        {
//            // 判断最大长度
//            if (score == 0 && res.size() >= len)
//            {
//                if (res.size() > len) st.clear();
//                len = res.size();
//                st.insert(res);
//            }
//            return;
//        }
//        char ch = s[i];
//        if (ch == '(')
//        {
//            // 两种情况
//            dfs(s, i + 1, res + ch, score + 1);
//            dfs(s, i + 1, res, score);
//        }
//        else if (ch == ')')
//        {
//            dfs(s, i + 1, res + ch, score - 1);
//            dfs(s, i + 1, res, score);
//        }
//        else
//        {
//            dfs(s, i + 1, res + ch, score);
//        }
//    }
//};


