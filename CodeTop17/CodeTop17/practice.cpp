// 路径总和
//class Solution {
//public:
//    bool flag = false;
//
//    void dfs(TreeNode* root, int targetSum, int tmp)
//    {
//        if (root == nullptr) return;
//        tmp += root->val;
//        if (!root->left && !root->right && targetSum == tmp)
//        {
//            flag = true;
//            return;
//        }
//        dfs(root->left, targetSum, tmp);
//        dfs(root->right, targetSum, tmp);
//    }
//
//    bool hasPathSum(TreeNode* root, int targetSum) {
//        dfs(root, targetSum, 0);
//        return flag;
//    }
//};


// 复原 IP 地址
//class Solution {
//public:
//    vector<string> v;
//    string tmp;
//    int n;
//
//    bool isrule(string s)
//    {
//        if (s.size() == 0) return false;
//        if (s.size() > 1 && s[0] == '0') return false;
//        if (s.size() > 3) return false;
//        if (stoi(s) > 255) return false;
//        return true;
//    }
//
//    void dfs(const string& s, int idx, int cnt)
//    {
//        if (cnt < 0 || idx >= n) return;
//        string ttmp = tmp;
//        if (cnt == 0)
//        {
//            if (isrule(s.substr(idx)))
//            {
//                tmp += s.substr(idx);
//                v.push_back(tmp);
//                tmp = ttmp;
//                return;
//            }
//        }
//        // 一个
//        tmp += s[idx];
//        tmp += '.';
//        dfs(s, idx + 1, cnt - 1);
//        tmp = ttmp;
//        // 两个
//        if (idx + 1 < n && isrule(s.substr(idx, 2)))
//        {
//            tmp += s.substr(idx, 2);
//            tmp += '.';
//            dfs(s, idx + 2, cnt - 1);
//            tmp = ttmp;
//        }
//        // 三个
//        if (idx + 2 < n && isrule(s.substr(idx, 3)))
//        {
//            tmp += s.substr(idx, 3);
//            tmp += '.';
//            dfs(s, idx + 3, cnt - 1);
//            tmp = ttmp;
//        }
//    }
//
//    vector<string> restoreIpAddresses(string s) {
//        n = s.size();
//        dfs(s, 0, 3);
//        return v;
//    }
//};


// 用栈实现队列
//class MyQueue {
//public:
//    stack<int> pushSt;
//    stack<int> popSt;
//
//    MyQueue() {
//
//    }
//
//    void push(int x) {
//        pushSt.push(x);
//    }
//
//    int pop() {
//        if (popSt.size())
//        {
//            int ret = popSt.top();
//            popSt.pop();
//            return ret;
//        }
//        while (pushSt.size())
//        {
//            popSt.push(pushSt.top());
//            pushSt.pop();
//        }
//        int ret = popSt.top();
//        popSt.pop();
//        return ret;
//    }
//
//    int peek() {
//        if (popSt.size()) return popSt.top();
//        while (pushSt.size())
//        {
//            popSt.push(pushSt.top());
//            pushSt.pop();
//        }
//        return popSt.top();
//    }
//
//    bool empty() {
//        return pushSt.empty() && popSt.empty();
//    }
//};
