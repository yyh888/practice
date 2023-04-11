// 组合总和
//class Solution {
//public:
//    vector<vector<int>> res;
//
//    void dfs(int begin, vector<int>& candidates, int target, vector<int>& ret)
//    {
//        if (target == 0)
//        {
//            res.push_back(ret);
//            return;
//        }
//        if (target < 0)
//        {
//            return;
//        }
//        for (int i = begin; i < candidates.size(); i++)
//        {
//            ret.push_back(candidates[i]);
//            dfs(i, candidates, target - candidates[i], ret);
//            ret.pop_back();
//        }
//    }
//
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        vector<int> v;
//        int begin = 0;
//        dfs(begin, candidates, target, v);
//        return res;
//    }
//};


//class Solution {
//public:
//    int trap(vector<int>& height) {
//        int n = height.size();
//        vector<int> dpL(n);
//        vector<int> dpR(n);
//        dpL[0] = height[0];
//        dpR[n - 1] = height[n - 1];
//        for (int i = 1; i < n; i++)
//        {
//            dpL[i] = dpL[i - 1];
//            if (height[i] > dpL[i])
//            {
//                dpL[i] = height[i];
//            }
//        }
//        for (int i = n - 2; i >= 0; i--)
//        {
//            dpR[i] = dpR[i + 1];
//            if (height[i] > dpR[i])
//            {
//                dpR[i] = height[i];
//            }
//        }
//
//        int sum = 0;
//        for (int i = 1; i < n - 1; i++)
//        {
//            int Min = min(dpL[i - 1], dpR[i + 1]);
//            if (height[i] < Min)
//            {
//                sum += (Min - height[i]);
//            }
//        }
//        return sum;
//    }
//};

// 全排列
//class Solution {
//public:
//    vector<vector<int>> res;
//    void dfs(vector<int>& nums, vector<int>& tmp, vector<bool>& flag)
//    {
//        if (tmp.size() == nums.size())
//        {
//            res.push_back(tmp);
//            return;
//        }
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (!flag[i])
//            {
//                flag[i] = true;
//                tmp.push_back(nums[i]);
//                dfs(nums, tmp, flag);
//                flag[i] = false;
//                tmp.pop_back();
//            }
//        }
//    }
//
//    vector<vector<int>> permute(vector<int>& nums) {
//        vector<bool> flag(nums.size(), false);
//        vector<int> tmp;
//        dfs(nums, tmp, flag);
//        return res;
//    }
//};

