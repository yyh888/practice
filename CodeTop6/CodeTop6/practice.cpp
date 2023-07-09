// 接雨水
//class Solution {
//public:
//    int trap(vector<int>& height) {
//        int n = height.size();
//        int left = 0, right = n - 1;
//        int leftMax = 0, rightMax = 0;
//        int res = 0;
//        while (left < right)
//        {
//            if (height[left] < height[right])
//            {
//                leftMax = max(leftMax, height[left]);
//                res += leftMax - height[left];
//                left++;
//            }
//            else
//            {
//                rightMax = max(rightMax, height[right]);
//                res += rightMax - height[right];
//                right--;
//            }
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    int trap(vector<int>& height) {
//        stack<int> st;
//        int n = height.size();
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            while (st.size() && height[i] > height[st.top()])
//            {
//                int mid = st.top();
//                st.pop();
//                if (st.size())
//                {
//                    int left = st.top();
//                    res += (min(height[i], height[left]) - height[mid]) * (i - left - 1);
//                }
//            }
//            st.push(i);
//        }
//        return res;
//    }
//};

// 两数之和
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        unordered_map<int, int> hash;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            if (hash.count(target - nums[i]))
//            {
//                return { hash[target - nums[i]], i };
//            }
//            hash[nums[i]] = i;
//        }
//        return {};
//    }
//};


// 螺旋矩阵
//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        int left = 0, right = m - 1, top = 0, bot = n - 1;
//        vector<int> res;
//        while (left <= right && top <= bot)
//        {
//            for (int j = left; j <= right; j++) res.push_back(matrix[top][j]);
//            for (int i = top + 1; i <= bot; i++) res.push_back(matrix[i][right]);
//            if (left < right && top < bot)
//            {
//                for (int j = right - 1; j >= left; j--) res.push_back(matrix[bot][j]);
//                for (int i = bot - 1; i > top; i--) res.push_back(matrix[i][left]);
//            }
//            left++;
//            right--;
//            top++;
//            bot--;
//        }
//        return res;
//    }
//};