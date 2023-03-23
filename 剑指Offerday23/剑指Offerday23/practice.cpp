// 滑动窗口的最大值
//class Solution {
//public:
//    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        deque<int> dq;
//        vector<int> v;
//        int idx = 0;
//        for (int j = 0, i = 1 - k; j < nums.size(); i++, j++)
//        {
//            if (i > 0 && dq.front() == nums[i - 1])
//            {
//                dq.pop_front();
//            }
//            while (!dq.empty() && dq.back() < nums[j])
//            {
//                dq.pop_back();
//            }
//            dq.push_back(nums[j]);
//            if (i >= 0)
//            {
//                v.push_back(dq.front());
//            }
//        }
//        return v;
//    }
//};


