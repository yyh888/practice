class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1, ans = n;
        int mid = 0;
        while (left <= right)
        {
            mid = (left + right) >> 1;
            if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                ans = mid;
                right = mid - 1;
            }
        }
        return ans;
    }
};