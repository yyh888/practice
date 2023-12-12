class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int i = 1;
        for (; i < n; i++)
        {
            if (nums[i - 1] >= nums[i]) break;
        }
        if (i == n) return 0;
        if (nums[0] < nums[n - 1]) return -1;
        int mid = i;
        i += 1;
        while (i < n && nums[i - 1] < nums[i])
        {
            i++;
        }
        if (i < n) return -1;
        return n - mid;
    }
};