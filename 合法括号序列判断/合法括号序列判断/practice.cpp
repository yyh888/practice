class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == '(')
            {
                st.push(A[i]);
            }
            else if (A[i] == ')')
            {
                if (st.empty())
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};