// 最大的异或
//class Solution {
//public:
//    int son[1000010][2], idx;
//
//    void insert(int x)
//    {
//        int p = 0;
//        for (int i = 30; i >= 0; i--)
//        {
//            int u = (x >> i) & 1;
//            if (!son[p][u])
//            {
//                son[p][u] = ++idx;
//            }
//            p = son[p][u];
//        }
//    }
//
//    int search(int x)
//    {
//        int sum = 0;
//        int p = 0;
//        for (int i = 30; i >= 0; i--)
//        {
//            int u = (x >> i) & 1;
//            if (son[p][!u])
//            {
//                p = son[p][!u];
//                sum = sum * 2 + 1;
//            }
//            else
//            {
//                p = son[p][u];
//                sum = sum * 2;
//            }
//        }
//        return sum;
//    }
//
//    int findMaximumXOR(vector<int>& nums) {
//        int Max = 0;
//        for (auto& e : nums)
//        {
//            insert(e);
//            Max = max(Max, search(e));
//        }
//        return Max;
//    }
//};


// 查找插入位置
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int n = nums.size();
//        int l = 0, r = n - 1;
//        while (l < r)
//        {
//            int mid = (l + r) >> 1;
//            if (nums[mid] >= target)
//            {
//                r = mid;
//            }
//            else
//            {
//                l = mid + 1;
//            }
//        }
//        if (l == n - 1 && nums[l] < target)
//        {
//            return l + 1;
//        }
//        return l;
//    }
//};


// 山峰数组的顶部
//class Solution {
//public:
//    int peakIndexInMountainArray(vector<int>& arr) {
//        int n = arr.size();
//        int l = 0, r = n - 1;
//        while (l < r)
//        {
//            int mid = (l + r) >> 1;
//            if (arr[mid] >= arr[mid + 1])
//            {
//                r = mid;
//            }
//            else
//            {
//                l = mid + 1;
//            }
//        }
//        return l;
//    }
//};


