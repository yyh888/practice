// 滑动窗口最大值
//class Solution {
//public:
//    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        int n = nums.size();
//        vector<int> res;
//        deque<int> dq;
//        for (int i = 0; i < n; i++)
//        {
//            while (dq.size() && i - dq.front() + 1 > k)
//            {
//                dq.pop_front();
//            }
//            while (dq.size() && nums[i] >= nums[dq.back()])
//            {
//                dq.pop_back();
//            }
//            dq.push_back(i);
//            if (i >= k - 1) res.push_back(nums[dq.front()]);
//        }
//        return res;
//    }
//};


// 旋转图像
//class Solution {
//public:
//    void rotate(vector<vector<int>>& matrix) {
//        int n = matrix.size();
//        // 水平翻转
//        for (int i = 0; i < n / 2; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                swap(matrix[i][j], matrix[n - i - 1][j]);
//            }
//        }
//        // 对角线翻转
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                swap(matrix[i][j], matrix[j][i]);
//            }
//        }
//    }
//};


