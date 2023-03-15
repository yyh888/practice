// 最长不含重复字符的子字符串
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        if (s.size() == 0)
//        {
//            return 0;
//        }
//        // 记录最后出现的位置
//        unordered_map<char, int> hash;
//        vector<int> dp(s.size() + 1);
//        dp[0] = 1;
//        int max_val = 1;
//        hash[s[0]] = 0;
//        for (int i = 1; i < s.size(); i++)
//        {
//            if (hash.find(s[i]) == hash.end())
//            {
//                dp[i] = dp[i - 1] + 1;
//            }
//            else
//            {
//                if (hash[s[i]] < i - dp[i - 1])
//                {
//                    dp[i] = dp[i - 1] + 1;
//                }
//                else
//                {
//                    dp[i] = i - hash[s[i]];
//                }
//            }
//            hash[s[i]] = i;
//            max_val = max(max_val, dp[i]);
//        }
//        return max_val;
//    }
//};


// 丑数
//class Solution {
//public:
//    int nthUglyNumber(int n) {
//        int mul[] = { 2, 3, 5 };
//        priority_queue<long long, vector<long long>, greater<long long>> qq;
//        unordered_set<long long> hash;
//        hash.insert(1LL);
//        qq.push(1LL);
//        int ret = 1;
//        for (int i = 0; i < n; i++)
//        {
//            ret = qq.top();
//            qq.pop();
//            for (int j = 0; j < 3; j++)
//            {
//                if (!hash.count((long long)mul[j] * ret))
//                {
//                    qq.push((long long)mul[j] * ret);
//                    hash.insert((long long)mul[j] * ret);
//                }
//            }
//        }
//        return ret;
//    }
//};


//class Solution {
//public:
//    int nthUglyNumber(int n) {
//        vector<int> dp(n + 1);
//        dp[1] = 1;
//        int p2 = 1, p3 = 1, p5 = 1;
//        for (int i = 2; i <= n; i++)
//        {
//            int num2 = dp[p2] * 2, num3 = dp[p3] * 3, num5 = dp[p5] * 5;
//            dp[i] = min(min(num2, num3), num5);
//            if (dp[i] == num2)
//            {
//                p2++;
//            }
//            if (dp[i] == num3)
//            {
//                p3++;
//            }
//            if (dp[i] == num5)
//            {
//                p5++;
//            }
//        }
//        return dp[n];
//    }
//};

// 第一个只出现一次的字符
//class Solution {
//public:
//    char firstUniqChar(string s) {
//        unordered_map<char, int> hash;
//        for (auto& e : s)
//        {
//            hash[e]++;
//        }
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (hash[s[i]] == 1)
//            {
//                return s[i];
//            }
//        }
//        return ' ';
//    }
//};


// 数组中的逆序对
//class Solution {
//public:
//    void Merge(vector<int>& nums, int begin, int end, vector<int>& tmp, int& cnt)
//    {
//        if (begin >= end) return;
//        int mid = (begin + end) >> 1;
//        Merge(nums, begin, mid, tmp, cnt);
//        Merge(nums, mid + 1, end, tmp, cnt);
//        int start1 = begin, start2 = mid + 1;
//        int idx = start1;
//        while (start1 <= mid && start2 <= end)
//        {
//            if (nums[start1] <= nums[start2])
//            {
//                tmp[idx++] = nums[start1++];
//            }
//            else
//            {
//                tmp[idx++] = nums[start2++];
//                cnt += (mid - start1 + 1);
//            }
//        }
//        while (start1 <= mid)
//        {
//            tmp[idx++] = nums[start1++];
//        }
//        while (start2 <= end)
//        {
//            tmp[idx++] = nums[start2++];
//        }
//        for (int i = begin; i <= end; i++)
//        {
//            nums[i] = tmp[i];
//        }
//    }
//
//    int reversePairs(vector<int>& nums) {
//        vector<int> tmp(nums.size() + 1);
//        int cnt = 0;
//        Merge(nums, 0, nums.size() - 1, tmp, cnt);
//        return cnt;
//    }
//};