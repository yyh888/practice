class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        map<string, function<int(int, int)>> hash =
        {
            {"+", [](int x, int y)->int {return x + y; }},
            {"-", [](int x, int y)->int {return x - y; }},
            {"*", [](int x, int y)->int {return x * y; }},
            {"/", [](int x, int y)->int {return x / y; }},
        };
        for (auto& e : tokens)
        {
            if (hash.count(e) == 0)
            {
                st.push(stoi(e));
            }
            else
            {
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                st.push(hash[e](left, right));
            }
        }
        return st.top();
    }
};