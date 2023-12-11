class Solution {
public:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start += 1;
            end -= 1;
        }
    }

    void Reverse(vector<int>& nums, int k)
    {
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }

    bool fun(vector<int>& nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] <= nums[i - 1]) return false;
        }
        return true;
    }

    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            vector<int> tmp = nums;
            Reverse(tmp, i);
            if (fun(tmp)) return i;
        }
        return -1;
    }
};