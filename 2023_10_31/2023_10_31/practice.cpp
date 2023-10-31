class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long long ans = 0;
        for (int i = 1; i <= nums.size(); i++)
        {
            if (nums.size() % i == 0)
            {
                ans += nums[i - 1] * nums[i - 1];
            }
        }
        return ans;
    }
};