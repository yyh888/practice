class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++)
        {
            string ret = tokens[i];
            if (ret == "+" || ret == "-" || ret == "*" || ret == "/")
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                switch (ret[0])
                {
                case '+':
                    st.push(x + y);
                    break;
                case '-':
                    st.push(y - x);
                    break;
                case '*':
                    st.push(x * y);
                    break;
                case '/':
                    st.push(y / x);
                    break;
                }
            }
            else
            {
                st.push(stoi(ret));
            }
        }
        return st.top();
    }
};