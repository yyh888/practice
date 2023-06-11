// 既不是最小值也不是最大值
//class Solution {
//public:
//    int findNonMinOrMax(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        int n = nums.size();
//        int l = 0, r = n - 1;
//        if (n <= 2 || nums[l] == nums[r]) return -1;
//        while (l < r && nums[l] == nums[l + 1]) l++;
//        while (l < r && nums[r] == nums[r - 1]) r--;
//        if (l == r) return -1;
//        return nums[l + 1];
//    }
//};


// 执行子串操作后的字典序最小字符串
//class Solution {
//public:
//    string smallestString(string s) {
//        int n = s.size();
//        bool begin = false;
//        for (int i = 0; i < n; i++)
//        {
//            if (s[i] == 'a' && begin) break;
//            if (s[i] == 'a') continue;
//            else
//            {
//                s[i]--;
//                begin = true;
//            }
//        }
//        if (begin == false) s[n - 1] = 'z';
//        return s;
//    }
//};


