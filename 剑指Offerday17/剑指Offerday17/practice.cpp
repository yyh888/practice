// 数据流中的中位数
//class MedianFinder {
//public:
//    /** initialize your data structure here. */
//    priority_queue<int, vector<int>, less<int>> maxHeap;// 大堆
//    priority_queue<int, vector<int>, greater<int>> minHeap;// 小堆
//    MedianFinder() {
//
//    }
//
//    void addNum(int num) {
//        if (maxHeap.size() == minHeap.size())
//        {
//            // 大->小
//            maxHeap.push(num);
//            int ret = maxHeap.top();
//            maxHeap.pop();
//            minHeap.push(ret);
//        }
//        else
//        {
//            // 小->大
//            minHeap.push(num);
//            int ret = minHeap.top();
//            minHeap.pop();
//            maxHeap.push(ret);
//        }
//    }
//
//    double findMedian() {
//        double res = 0;
//        if (maxHeap.size() == minHeap.size())
//        {
//            res = (maxHeap.top() + minHeap.top()) / 2.0;
//        }
//        else
//        {
//            res = minHeap.top();
//        }
//        return res;
//    }
//};

// 连续子数组的最大和
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int res = nums[0];
//        for (int i = 1; i < nums.size(); i++)
//        {
//            nums[i] += max(nums[i - 1], 0);
//            res = max(res, nums[i]);
//        }
//        return res;
//    }
//};