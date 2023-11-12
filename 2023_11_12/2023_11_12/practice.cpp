class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;
    stack<int> Min;
    MinStack() {

    }

    void push(int x) {
        st.push(x);
        if (Min.empty())
            Min.push(x);
        else
        {
            if (x <= Min.top())
                Min.push(x);
        }
    }

    void pop() {
        int x = st.top();
        if (x == Min.top())
        {
            Min.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int min() {
        return Min.top();
    }
};