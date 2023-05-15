// 排序数组中只出现一次的数字
//class Solution {
//public:
//    int singleNonDuplicate(vector<int>& nums) {
//        int n = nums.size();
//        int l = 0, r = n - 1;
//        while (l < r)
//        {
//            int mid = (l + r) >> 1;
//            if (mid % 2 == 0)// 偶数
//            {
//                if (nums[mid] == nums[mid + 1])
//                {
//                    l = mid + 1;
//                }
//                else
//                {
//                    r = mid;
//                }
//            }
//            else
//            {
//                if (nums[mid] == nums[mid - 1])
//                {
//                    l = mid + 1;
//                }
//                else
//                {
//                    r = mid;
//                }
//            }
//        }
//        return nums[l];
//    }
//};


// 求平方根
//class Solution {
//public:
//    int mySqrt(int x) {
//        int l = 0, r = x;
//        while (l < r)
//        {
//            long long mid = l + (r - l) / 2 + 1;
//            if (mid * mid <= x)
//            {
//                l = mid;
//            }
//            else
//            {
//                r = mid - 1;
//            }
//        }
//        return l;
//    }
//};

// 狒狒吃香蕉
//class Solution {
//public:
//    int minEatingSpeed(vector<int>& piles, int h) {
//        int l = 1, r = 0;
//        for (auto& e : piles)
//        {
//            r = max(r, e);
//        }
//        int res = r;
//        while (l < r)
//        {
//            int mid = l + (r - l) / 2;
//            long long time = gettime(piles, mid);
//            if (time <= h)
//            {
//                r = mid;
//                res = mid;
//            }
//            else
//            {
//                l = mid + 1;
//            }
//        }
//        return res;
//    }
//private:
//    long long gettime(vector<int>& piles, int speed)
//    {
//        long time = 0;
//        for (auto& e : piles)
//        {
//            time += (e + speed - 1) / speed;
//        }
//        return time;
//    }
//};


// 合并区间
//struct cmp
//{
//    bool operator()(const vector<int>& v1, const vector<int>& v2)
//    {
//        return v1[0] < v2[0];
//    }
//};
//
//class Solution {
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        sort(intervals.begin(), intervals.end(), cmp());
//        vector<vector<int>> res;
//        res.push_back(intervals[0]);
//        for (int i = 1; i < intervals.size(); i++)
//        {
//            if (intervals[i][0] <= res[res.size() - 1][1])
//            {
//                if (intervals[i][1] > res[res.size() - 1][1])
//                    res[res.size() - 1][1] = intervals[i][1];
//            }
//            else
//            {
//                res.push_back(intervals[i]);
//            }
//        }
//        return res;
//    }
//};


