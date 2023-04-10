// 下一个排列
//class Solution {
//public:
//    void QuickSort(vector<int>& nums, int begin, int end)
//    {
//        if (begin >= end)
//        {
//            return;
//        }
//        int l = begin, r = end;
//        while (l < r)
//        {
//            while (l < r && nums[r] >= nums[begin])
//            {
//                r--;
//            }
//            while (l < r && nums[l] <= nums[begin])
//            {
//                l++;
//            }
//            if (l < r)
//            {
//                swap(nums[l], nums[r]);
//            }
//        }
//        swap(nums[begin], nums[l]);
//        QuickSort(nums, begin, l);
//        QuickSort(nums, l + 1, end);
//    }
//
//    void nextPermutation(vector<int>& nums) {
//        int i;
//        for (i = nums.size() - 2; i >= 0; i--)
//        {
//            if (nums[i + 1] > nums[i]) break;
//        }
//
//        if (i == -1)
//        {
//            reverse(nums.begin(), nums.end());
//        }
//        else
//        {
//            for (int j = nums.size() - 1; j > i; j--)
//            {
//                if (nums[j] > nums[i])
//                {
//                    swap(nums[i], nums[j]);
//                    break;
//                }
//            }
//            QuickSort(nums, i + 1, nums.size() - 1);
//        }
//    }
//};


// 最长有效括号
//class Solution {
//public:
//    int longestValidParentheses(string s) {
//        stack<int> st;
//        vector<int> idx(s.size());
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] == '(')
//            {
//                // 记录下标
//                st.push(i);
//            }
//            else
//            {
//                if (st.empty())
//                {
//                    idx[i] = 1;
//                }
//                else
//                {
//                    st.pop();
//                }
//            }
//        }
//        while (!st.empty())
//        {
//            int tmp = st.top();
//            idx[tmp] = 1;
//            st.pop();
//        }
//        int res = 0;
//        int ret = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (idx[i] == 1)
//            {
//                ret = 0;
//            }
//            else
//            {
//                ret++;
//                res = max(res, ret);
//            }
//        }
//        return res;
//    }
//};

// 在排序数组中查找元素的第一个和最后一个位置
//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        int n = nums.size();
//        vector<int> v{ -1, -1 };
//        // 找左边界
//        int l = 0, r = n - 1;
//        if (n == 0)
//        {
//            return v;
//        }
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
//        v[0] = l;
//        if (nums[l] != target)
//        {
//            return { -1, -1 };
//        }
//        // 找右边界
//        l = 0, r = n - 1;
//        while (l < r)
//        {
//            int mid = (l + r + 1) >> 1;
//            if (nums[mid] <= target)
//            {
//                l = mid;
//            }
//            else
//            {
//                r = mid - 1;
//            }
//        }
//        v[1] = l;
//        return v;
//    }
//};