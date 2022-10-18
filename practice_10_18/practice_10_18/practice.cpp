class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        int n = nums.size();
        int i = 0;
        while (i < n)
        {
            int left = i;
            i++;
            while (i < n && nums[i] == nums[i - 1] + 1)
            {
                i++;
            }
            int right = i - 1;// 循环后加了1
            string ret;
            if (left == right)
            {
                ret = to_string(nums[left]);
            }
            else
            {
                ret += to_string(nums[left]);
                ret += "->";
                ret += to_string(nums[right]);
            }
            v.push_back(ret);
        }
        return v;
    }
};