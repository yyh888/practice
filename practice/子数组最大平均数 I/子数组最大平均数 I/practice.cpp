class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int len = nums.size();
        int sum = 0;
        for (int i = 0; i < k; i++) sum += nums[i];
        int maxsum = sum;
        for (int i = k; i < len; i++)
        {
            sum = sum - nums[i - k] + nums[i];
            maxsum = max(maxsum, sum);
        }
        return (double)maxsum / k;
    }
};