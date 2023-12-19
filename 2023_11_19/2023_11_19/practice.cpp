class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        stack<int> st;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            while (st.size() && height[st.top()] < height[i])
            {
                int mid = st.top();
                st.pop();
                if (st.size() && height[st.top()] > height[mid])
                {
                    int h = min(height[st.top()], height[i]) - height[mid];
                    int l = i - st.top() - 1;
                    sum += h * l;
                }
            }
            st.push(i);
        }
        return sum;
    }
};