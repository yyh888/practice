class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        v.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            v.push_back(v[i - 1] + nums[i]);
        }
        return v;
    }
};


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            if (nums[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return l;
    }
};