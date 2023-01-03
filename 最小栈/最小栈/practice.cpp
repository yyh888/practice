class MinStack {
public:
    MinStack() {
    }

    void push(int val) {
        st.push(val);
        if (minst.empty() || val <= minst.top())
        {
            minst.push(val);
        }
    }

    void pop() {
        int x = st.top();
        st.pop();
        if (x == minst.top())
        {
            minst.pop();
        }
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minst.top();
    }

    stack<int> st;
    stack<int> minst;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */