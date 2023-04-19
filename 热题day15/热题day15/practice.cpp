// 滑动窗口最大值
//class Solution {
//public:
//    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        deque<int> dq;
//        int n = nums.size();
//        vector<int> res;
//        for (int i = 0; i < n; i++)
//        {
//            if (!dq.empty() && i - dq.front() + 1 > k)
//            {
//                dq.pop_front();
//            }
//            while (!dq.empty() && nums[i] > nums[dq.back()])
//            {
//                dq.pop_back();
//            }
//            dq.push_back(i);
//            if (i >= k - 1)
//                res.push_back(nums[dq.front()]);
//        }
//        return res;
//    }
//};

// 搜索二维矩阵 II
//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int n = matrix.size(), m = matrix[0].size();
//        int i = 0, j = m - 1;
//        while (i < n && j >= 0)
//        {
//            if (matrix[i][j] < target)
//            {
//                i++;
//            }
//            else if (matrix[i][j] > target)
//            {
//                j--;
//            }
//            else
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};


//class Solution {
//public:
//    bool search(vector<int>& nums, int n, int target)
//    {
//        int l = 0, r = n;
//        while (l < r)
//        {
//            int mid = (l + r) >> 1;
//            if (nums[mid] < target)
//            {
//                l = mid + 1;
//            }
//            else
//            {
//                r = mid;
//            }
//        }
//        return nums[l] == target;
//    }
//
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int n = matrix.size(), m = matrix[0].size();
//        for (int i = 0; i < n; i++)
//        {
//            bool flag = search(matrix[i], m - 1, target);
//            if (flag) return true;
//        }
//        return false;
//    }
//};

// 移动零
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int n = nums.size();
//        int l = 0, r = 0;
//        while (r < n)
//        {
//            if (nums[r])
//            {
//                swap(nums[l], nums[r]);
//                l++;
//            }
//            r++;
//        }
//    }
//};