//class Solution {
//public:
//    int minimumOperations(vector<int>& nums) {
//        int n = nums.size();
//        sort(nums.begin(), nums.end());
//        int cnt = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i])
//            {
//                cnt++;
//                int del = nums[i];
//                for (int j = i; j < n; j++)
//                {
//                    nums[j] -= del;
//                }
//            }
//        }
//        return cnt;
//    }
//};

//class Solution {
//public:
//    int minimumOperations(vector<int>& nums) {
//        unordered_set<int> hash;
//        for (auto& e : nums)
//        {
//            if (e)
//            {
//                hash.insert(e);
//            }
//        }
//        return hash.size();
//    }
//};