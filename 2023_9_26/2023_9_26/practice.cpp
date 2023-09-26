class Solution {
public:
    vector<vector<int>> vv;
    vector<bool> flag;
    int n;

    void dfs(vector<int>& nums, int i, vector<int>& tmp)
    {
        if (i >= n)
        {
            if (tmp.size() == n) vv.push_back(tmp);
            return;
        }
        for (int k = 0; k < n; k++)
        {
            if (flag[k]) continue;
            flag[k] = true;
            tmp.push_back(nums[k]);
            dfs(nums, i + 1, tmp);
            tmp.pop_back();
            flag[k] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        flag.resize(n, false);
        vector<int> tmp;
        dfs(nums, 0, tmp);
        return vv;
    }
};