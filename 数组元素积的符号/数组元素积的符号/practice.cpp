class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        if (sum == 0)
        {
            return 0;
        }
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == 0)
            {
                return 0;
            }
            else if (nums[i] > 0)
            {
                nums[i] = 1;
            }
            else
            {
                nums[i] = -1;
            }
            sum *= nums[i];
        }
        if (sum > 0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
};