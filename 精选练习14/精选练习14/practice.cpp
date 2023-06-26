// 找出中枢整数
//class Solution {
//public:
//    int pivotInteger(int n) {
//        int sum = n * (n + 1) / 2;
//        int cur = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            cur += i;
//            if (cur == sum - cur + i)
//            {
//                return i;
//            }
//        }
//        return -1;
//    }
//};


// 丑数
//class Solution {
//public:
//    bool isUgly(int n) {
//        if (n <= 0) return false;
//        while (n % 2 == 0) n /= 2;
//        while (n % 3 == 0) n /= 3;
//        while (n % 5 == 0) n /= 5;
//        return n == 1;
//    }
//};


// 丑数 II
//class Solution {
//public:
//    int nthUglyNumber(int n) {
//        vector<int> dp(n + 1);
//        dp[1] = 1;
//        int n2 = 1, n3 = 1, n5 = 1;
//        for (int i = 2; i <= n; i++)
//        {
//            dp[i] = min(2 * dp[n2], min(3 * dp[n3], 5 * dp[n5]));
//            if (dp[i] == 2 * dp[n2]) n2++;
//            if (dp[i] == 3 * dp[n3]) n3++;
//            if (dp[i] == 5 * dp[n5]) n5++;
//        }
//        return dp[n];
//    }
//};