//含有重复元素集合的组合
//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> v;
//    vector<pair<int, int>> cnt;
//
//    void dfs(int idx, int target)
//    {
//        if (target == 0)
//        {
//            res.push_back(v);
//            return;
//        }
//        if (idx >= cnt.size()) return;
//        if (target < cnt[idx].first) return;
//        int ret = cnt[idx].first;
//        int end = min(target / ret, cnt[idx].second);
//        dfs(idx + 1, target);
//        for (int i = 1; i <= end; i++)
//        {
//            for (int k = 0; k < i; k++)
//            {
//                v.push_back(ret);
//            }
//            dfs(idx + 1, target - i * ret);
//            for (int k = 0; k < i; k++)
//            {
//                v.pop_back();
//            }
//        }
//    }
//
//    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//        sort(candidates.begin(), candidates.end());
//        for (auto& e : candidates)
//        {
//            if (cnt.empty() || e != cnt.back().first)
//            {
//                cnt.push_back({ e, 1 });
//            }
//            else
//            {
//                cnt.back().second++;
//            }
//        }
//        dfs(0, target);
//        return res;
//    }
//};


// 没有重复元素集合的全排列
//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> v;
//    vector<int> flag;
//
//    void dfs(vector<int>& nums, int idx, int n)
//    {
//        if (v.size() == n)
//        {
//            res.push_back(v);
//            return;
//        }
//        if (idx == n) return;
//        for (int i = 0; i < n; i++)
//        {
//            if (flag[i]) continue;
//            flag[i] = true;
//            v.push_back(nums[i]);
//            dfs(nums, idx + 1, n);
//            v.pop_back();
//            flag[i] = false;
//        }
//    }
//
//    vector<vector<int>> permute(vector<int>& nums) {
//        int n = nums.size();
//        flag.resize(n, false);
//        dfs(nums, 0, n);
//        return res;
//    }
//};


// 含有重复元素集合的全排列
//class Solution {
//public:
//    vector<pair<int, int>> cnt;
//    vector<vector<int>> res;
//    vector<int> v;
//
//    void dfs(int n)
//    {
//        if (v.size() == n)
//        {
//            res.push_back(v);
//            return;
//        }
//        for (int i = 0; i < cnt.size(); i++)
//        {
//            if (cnt[i].second > 0)
//            {
//                v.push_back(cnt[i].first);
//                cnt[i].second--;
//                dfs(n);
//                v.pop_back();
//                cnt[i].second++;
//            }
//        }
//    }
//
//    vector<vector<int>> permuteUnique(vector<int>& nums) {
//        int n = nums.size();
//        sort(nums.begin(), nums.end());
//        for (auto& e : nums)
//        {
//            if (cnt.empty() || e != cnt.back().first)
//            {
//                cnt.push_back({ e, 1 });
//            }
//            else
//            {
//                cnt.back().second++;
//            }
//        }
//        dfs(n);
//        return res;
//    }
//};

