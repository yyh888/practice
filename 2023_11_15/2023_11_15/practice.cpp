class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = nums.back();
        int res = 0;
        while (k--)
        {
            res += ans;
            ans++;
        }
        return res;
    }
};