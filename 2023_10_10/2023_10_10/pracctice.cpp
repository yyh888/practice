//class Solution {
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        int n = intervals.size();
//        sort(intervals.begin(), intervals.end());
//        vector<vector<int>> res;
//        res.push_back(intervals[0]);
//        for (int i = 1; i < n; i++)
//        {
//            if (res.back()[1] < intervals[i][0])
//            {
//                res.push_back(intervals[i]);
//            }
//            else
//            {
//                res.back()[1] = max(res.back()[1], intervals[i][1]);
//            }
//        }
//        return res;
//    }
//};



//class Solution {
//public:
//    typedef long long LL;
//    const int N = 1e9 + 7;
//
//    int sumDistance(vector<int>& nums, string s, int d) {
//        int n = nums.size();
//        vector<LL> pos(n);
//        for (int i = 0; i < n; i++)
//        {
//            if (s[i] == 'L')
//            {
//                pos[i] = (LL)nums[i] - d;
//            }
//            else
//            {
//                pos[i] = (LL)nums[i] + d;
//            }
//        }
//        sort(pos.begin(), pos.end());
//        int res = 0;
//        for (int i = 1; i < n; i++)
//        {
//            res += (pos[i] - pos[i - 1]) * i % N * (n - i) % N;
//            res %= N;
//        }
//        return res;
//    }
//};