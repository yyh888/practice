// 外观数列
//class Solution {
//public:
//    string countAndSay(int n) {
//        string s = "1";
//        while (--n)
//        {
//            int sz = s.size();
//            int i = 0, j = 0;
//            string tmp;
//            while (i < sz)
//            {
//                int cnt = 0;
//                while (j < sz && s[i] == s[j])
//                {
//                    cnt++;
//                    j++;
//                }
//                tmp += to_string(cnt) + s[i];
//                i = j;
//            }
//            s = tmp;
//        }
//        return s;
//    }
//};


// 缺失的第一个正数
//class Solution {
//public:
//    int firstMissingPositive(vector<int>& nums) {
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            while (nums[i] != i + 1)
//            {
//                if (nums[i] <= 0 || nums[i] > n || nums[i] == nums[nums[i] - 1])
//                {
//                    break;
//                }
//                int idx = nums[i] - 1;
//                swap(nums[idx], nums[i]);
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] != i + 1)
//            {
//                return i + 1;
//            }
//        }
//        return n + 1;
//    }
//};


// Pow(x, n)
//class Solution {
//public:
//    double myPow(double x, int n) {
//        double res = 1;
//        long long b = n;
//        if (b < 0)
//        {
//            x = 1 / x;
//            b = -b;
//        }
//        while (b)
//        {
//            if (b & 1)
//            {
//                res = res * x;
//            }
//            b >>= 1;
//            x = x * x;
//        }
//        return res;
//    }
//};