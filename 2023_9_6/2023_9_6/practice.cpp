#include <iostream>

using namespace std;

//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> tmp;
//    vector<int> flag;
//    int n;
//
//    void dfs(vector<int>& nums, int i)
//    {
//        if (i == n)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        for (int k = 0; k < n; k++)
//        {
//            if (flag[k])
//            {
//                tmp.push_back(nums[k]);
//                flag[k] = false;
//                dfs(nums, i + 1);
//                flag[k] = true;
//                tmp.pop_back();
//            }
//        }
//    }
//
//    vector<vector<int>> permute(vector<int>& nums) {
//        n = nums.size();
//        flag.resize(n, true);
//        dfs(nums, 0);
//        return res;
//    }
//};


