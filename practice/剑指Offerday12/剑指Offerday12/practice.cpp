// 顺时针打印矩阵

//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        vector<int> ret;
//        if (matrix.empty()) return ret;
//        // 确认边界
//        int l = 0;
//        int r = matrix[0].size() - 1;
//        int t = 0;
//        int b = matrix.size() - 1;
//        while (true)
//        {
//            for (int i = l; i <= r; i++) ret.push_back(matrix[t][i]);
//            if (++t > b) break;
//            for (int i = t; i <= b; i++) ret.push_back(matrix[i][r]);
//            if (--r < l) break;
//            for (int i = r; i >= l; i--) ret.push_back(matrix[b][i]);
//            if (--b < t) break;
//            for (int i = b; i >= t; i--) ret.push_back(matrix[i][l]);
//            if (++l > r) break;
//        }
//        return ret;
//    }
//};


// 包含min函数的栈
//class MinStack {
//public:
//    /** initialize your data structure here. */
//    stack<int> st;
//    stack<int> Min;
//    MinStack() {
//
//    }
//
//    void push(int x) {
//        st.push(x);
//        if (Min.empty())
//            Min.push(x);
//        else
//        {
//            if (x <= Min.top())
//                Min.push(x);
//        }
//    }
//
//    void pop() {
//        int x = st.top();
//        if (x == Min.top())
//        {
//            Min.pop();
//        }
//        st.pop();
//    }
//
//    int top() {
//        return st.top();
//    }
//
//    int min() {
//        return Min.top();
//    }
//};

