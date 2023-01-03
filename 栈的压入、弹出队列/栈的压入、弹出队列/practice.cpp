class Solution {
public:
    bool IsPopOrder(vector<int> pushV, vector<int> popV) {
        stack<int> st;
        int p = 0;
        for (int i = 0; i < pushV.size(); i++)
        {
            st.push(pushV[i]);
            while (!st.empty() && st.top() == popV[p])
            {
                p++;
                st.pop();
            }
        }
        return st.empty();
    }
};