class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int Max = 0, other = 0;
        for (int l = 0, r = 0; r < nums.size(); r++)
        {
            if (nums[r] == 0) other++;
            while (other > k)
            {
                if (nums[l++] == 0) other--;
            }
            Max = max(Max, r - l + 1);
        }
        return Max;
    }
};