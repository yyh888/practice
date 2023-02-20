// 数组中重复的数字

// 1
//class Solution {
//public:
//    int findRepeatNumber(vector<int>& nums) {
//        unordered_map<int, int> hash;
//        for (auto e : nums)
//        {
//            if (hash.count(e)) return e;
//            hash[e]++;
//        }
//        return -1;
//    }
//};

// 2
//class Solution {
//public:
//    int findRepeatNumber(vector<int>& nums) {
//        int i = 0;
//        while (i < nums.size())
//        {
//            if (nums[i] == i)
//            {
//                i++;
//                continue;
//            }
//            if (nums[i] == nums[nums[i]]) return nums[i];
//            swap(nums[i], nums[nums[i]]);
//        }
//        return -1;
//    }
//};


// 二维数组中的查找
//class Solution {
//public:
//    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
//        if (!matrix.size() || !matrix[0].size()) return false;
//        int i = matrix.size() - 1, j = 0;
//        while (i >= 0 && j <= matrix[0].size() - 1)
//        {
//            if (matrix[i][j] < target) j++;
//            else if (matrix[i][j] > target) i--;
//            else return true;
//        }
//        return false;
//    }
//};

// 2
//class Solution {
//public:
//    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
//        for (auto row : matrix)
//        {
//            int l = 0, r = row.size() - 1;
//            while (l <= r)
//            {
//                int mid = (l + r) >> 1;
//                if (row[mid] < target) l = mid + 1;
//                else if (row[mid] > target) r = mid - 1;
//                else return true;
//            }
//        }
//        return false;
//    }
//};


