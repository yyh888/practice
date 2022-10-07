class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int i = 1;
        while (i < n)
        {
            int ret = nums[i - 1];
            while (i < n && nums[i] > nums[i - 1])
            {
                ret += nums[i];
                i++;
            }
            if (ret > sum)
            {
                sum = ret;
            }
            i++;
        }
        return sum;
    }
};