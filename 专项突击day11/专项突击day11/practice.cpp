// 每日温度
//class Solution {
//public:
//    vector<int> dailyTemperatures(vector<int>& temperatures) {
//        int n = temperatures.size();
//        vector<int> res(n);
//        stack<int> st;
//        for (int i = 0; i < n; i++)
//        {
//            while (st.size() && temperatures[st.top()] < temperatures[i])
//            {
//                int idx = st.top();
//                st.pop();
//                res[idx] = i - idx;
//            }
//            st.push(i);
//        }
//        return res;
//    }
//};


// 接雨水
//class Solution {
//public:
//    int trap(vector<int>& height) {
//        int n = height.size();
//        vector<int> leftMax(n), rightMax(n);
//        int Max = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (height[i] > Max)
//            {
//                Max = height[i];
//            }
//            leftMax[i] = Max;
//        }
//        Max = 0;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            if (height[i] > Max)
//            {
//                Max = height[i];
//            }
//            rightMax[i] = Max;
//        }
//        int sum = 0;
//        for (int i = 0; i < n; i++)
//        {
//            sum += min(leftMax[i], rightMax[i]) - height[i];
//        }
//        return sum;
//    }
//};

// 直方图最大矩形面积
//class Solution {
//public:
//    int largestRectangleArea(vector<int>& heights) {
//        int n = heights.size();
//        stack<int> st;
//        int ans = 0;
//        for (int i = 0; i < n; i++)
//        {
//            while (!st.empty() && heights[i] < heights[st.top()])
//            {
//                int mid = st.top();
//                st.pop();
//                int w = i;
//                if (!st.empty())
//                {
//                    w = i - st.top() - 1;
//                }
//                ans = max(ans, w * heights[mid]);
//            }
//            st.push(i);
//        }
//        while (!st.empty())
//        {
//            int mid = st.top();
//            st.pop();
//            int w = n;
//            if (!st.empty())
//            {
//                w = n - st.top() - 1;
//            }
//            ans = max(ans, w * heights[mid]);
//            cout << w * heights[mid] << endl;
//        }
//        return ans;
//    }
//};


// 矩阵中最大的矩形
//class Solution {
//public:
//    int largestRectangleArea(vector<int>& heights) {
//        int n = heights.size();
//        stack<int> st;
//        st.push(0);
//        int ans = 0;
//        for (int i = 1; i < n; i++)
//        {
//            while (heights[i] < heights[st.top()])
//            {
//                int mid = st.top();
//                st.pop();
//                int left = st.top();
//                int right = i;
//                int w = right - left - 1;
//                ans = max(ans, w * heights[mid]);
//            }
//            st.push(i);
//        }
//        return ans;
//    }
//
//    int maximalRectangle(vector<string>& matrix) {
//        if (matrix.size() == 0) return 0;
//        int res = 0;
//        vector<int> v(matrix[0].size() + 2);
//        for (int i = 0; i < matrix.size(); i++)
//        {
//            for (int j = 0; j < matrix[i].size(); j++)
//            {
//                if (matrix[i][j] == '1')
//                {
//                    v[j + 1] += 1;
//                }
//                else
//                {
//                    v[j + 1] = 0;
//                }
//            }
//            res = max(res, largestRectangleArea(v));
//        }
//        return res;
//    }
//};