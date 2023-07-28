// 二叉树最大宽度
//class Solution {
//public:
//    unordered_map<TreeNode*, long long> hash;
//    queue<TreeNode*> qq;
//    int ans = 0;
//
//    int widthOfBinaryTree(TreeNode* root) {
//        qq.push(root);
//        int levelSize = 1;
//        while (qq.size())
//        {
//            long long start = hash[qq.front()];
//            long long end;
//            while (levelSize--)
//            {
//                TreeNode* tmp = qq.front();
//                qq.pop();
//                end = hash[tmp];
//                long long u = end - start + 1;
//                if (tmp->left)
//                {
//                    hash.insert({ tmp->left, u * 2 });
//                    qq.push(tmp->left);
//                }
//                if (tmp->right)
//                {
//                    hash.insert({ tmp->right, u * 2 + 1 });
//                    qq.push(tmp->right);
//                }
//            }
//            ans = max((int)(end - start + 1), ans);
//            levelSize = qq.size();
//        }
//        return ans;
//    }
//};


// 最小栈
//class MinStack {
//public:
//    stack<int> st;
//    stack<int> minSt;
//    MinStack() {
//
//    }
//
//    void push(int val) {
//        st.push(val);
//        if (minSt.empty() || minSt.top() >= val)
//        {
//            minSt.push(val);
//        }
//    }
//
//    void pop() {
//        int ret = st.top();
//        st.pop();
//        if (ret == minSt.top())
//        {
//            minSt.pop();
//        }
//    }
//
//    int top() {
//        return st.top();
//    }
//
//    int getMin() {
//        return minSt.top();
//    }
//};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */