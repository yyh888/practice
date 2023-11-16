class Solution {
public:
    bool isSatisfied(vector<int>& nums, int l, int r, int threshold) {
        if (nums[l] % 2 != 0) {
            return false;
        }
        for (int i = l; i <= r; i++) {
            if (nums[i] > threshold || (i < r && nums[i] % 2 == nums[i + 1] % 2)) {
                return false;
            }
        }
        return true;
    }

    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int res = 0, n = nums.size();
        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                if (isSatisfied(nums, l, r, threshold)) {
                    res = max(res, r - l + 1);
                }
            }
        }
        return res;
    }
};

