// 对角线质数
//class Solution {
//public:
//    bool istrue(int x)
//    {
//        if (x < 2)
//        {
//            return false;
//        }
//        for (int i = 2; i <= sqrt(x); i++)
//        {
//            if (x % i == 0)
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//
//    int diagonalPrime(vector<vector<int>>& nums) {
//        int n = nums.size(), m = nums[0].size();
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (istrue(nums[i][i]))
//            {
//                res = max(res, nums[i][i]);
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (istrue(nums[i][n - i - 1]))
//            {
//                res = max(res, nums[i][n - i - 1]);
//            }
//        }
//        return res;
//    }
//};

// 等值距离和
//error
//class Solution {
//public:
//    struct Data
//    {
//        int len = 0;// 距离
//        int pre = -1;
//        int cnt = 0;// 次数
//    };
//
//    vector<long long> distance(vector<int>& nums) {
//        unordered_map<int, Data> hash1;
//        unordered_map<int, Data> hash2;
//        vector<long long> arr(nums.size());
//        for (int i = 0; i < nums.size(); i++)
//        {
//            hash1[nums[i]].cnt++;
//            if (hash1[nums[i]].cnt > 1)
//            {
//                hash1[nums[i]].len = abs(i - hash1[nums[i]].pre);
//                hash1[nums[i]].len += i - hash1[nums[hash1[nums[i]].pre]].len;
//                arr[i] += hash1[nums[i]].len;
//            }
//            hash1[nums[i]].pre = i;
//        }
//        for (int i = nums.size() - 1; i >= 0; i--)
//        {
//            hash2[nums[i]].cnt++;
//            if (hash2[nums[i]].cnt > 1)
//            {
//                hash2[nums[i]].len = abs(i - hash2[nums[i]].pre);
//                hash2[nums[i]].len += hash2[nums[hash2[nums[i]].pre]].len;
//                arr[i] += hash2[nums[i]].len;
//            }
//            hash2[nums[i]].pre = i;
//        }
//        return arr;
//    }
//};

//class Solution {
//public:
//    vector<long long> distance(vector<int>& nums) {
//        int n = nums.size();
//        vector<long long> res(n);
//        vector<long long> tmp(n);
//        unordered_map<int, int> idx;
//        unordered_map<int, int> cnt;
//        for (const int& e : nums)
//        {
//            idx[e] = -1;
//            cnt[e] = 0;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            int u = nums[i];
//            if (idx[u] != -1)
//            {
//                res[i] = res[idx[u]] + cnt[u] * abs(i - idx[u]);
//            }
//            idx[u] = i;
//            cnt[u]++;
//        }
//        for (const int& e : nums)
//        {
//            idx[e] = -1;
//            cnt[e] = 0;
//        }
//        for (int i = nums.size() - 1; i >= 0; i--)
//        {
//            int u = nums[i];
//            if (idx[u] != -1)
//            {
//                tmp[i] = tmp[idx[u]] + cnt[u] * abs(i - idx[u]);
//            }
//            idx[u] = i;
//            cnt[u]++;
//            res[i] += tmp[i];
//        }
//        return res;
//    }
//};


