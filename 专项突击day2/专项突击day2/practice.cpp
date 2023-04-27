// 单词长度的最大乘积
//class Solution {
//public:
//    int maxProduct(vector<string>& words) {
//        int n = words.size();
//        vector<int> wordbit(n);
//        for (int i = 0; i < n; i++)
//        {
//            string word = words[i];
//            for (int j = 0; j < word.size(); j++)
//            {
//                wordbit[i] |= 1 << (word[j] - 'a');
//            }
//        }
//        int Max = 0;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = i + 1; j < n; j++)
//            {
//                if ((wordbit[i] & wordbit[j]) == 0)
//                {
//                    Max = max(Max, (int)(words[i].size() * words[j].size()));
//                }
//            }
//        }
//        return Max;
//    }
//};


// 排序数组中两个数字之和
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        int n = numbers.size();
//        int i = 0, j = n - 1;
//        while (1)
//        {
//            int ret = numbers[i] + numbers[j];
//            if (ret < target)
//            {
//                i++;
//            }
//            else if (ret > target)
//            {
//                j--;
//            }
//            else
//            {
//                return { i, j };
//            }
//        }
//        return {};
//    }
//};


// 三数之和
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        int n = nums.size();
//        vector<vector<int>> vv;
//        if (n < 3) return vv;
//        sort(nums.begin(), nums.end());
//        for (int i = 0; i < n - 2; i++)
//        {
//            if (i > 0 && nums[i] == nums[i - 1])
//            {
//                continue;
//            }
//            int l = i + 1, r = n - 1;
//            while (l < r)
//            {
//                if (nums[i] + nums[l] > 0) break;
//                if (nums[i] + nums[l] + nums[r] == 0)
//                {
//                    vv.push_back({ nums[i], nums[l], nums[r] });
//                    l++;
//                    r--;
//                    while (l < r && nums[l] == nums[l - 1]) l++;
//                    while (l < r && nums[r] == nums[r + 1]) r--;
//                }
//                else if (nums[i] + nums[l] + nums[r] < 0)
//                {
//                    l++;
//                }
//                else
//                {
//                    r--;
//                }
//            }
//        }
//        return vv;
//    }
//};