// 二进制中1的个数
//class Solution {
//public:
//    int lowbit(uint32_t x)
//    {
//        return x & -x;
//    }
//
//    int hammingWeight(uint32_t n) {
//        int ans = 0;
//        while (n > 0)
//        {
//            n -= lowbit(n);
//            ans++;
//        }
//        return ans;
//    }
//};

//数值的整数次方
//class Solution {
//public:
//    double _myPow(double x, int n)
//    {
//        if (n == 0) return 1.0;
//        double y = _myPow(x, n / 2);
//        return n % 2 == 0 ? y * y : y * y * x;
//    }
//
//    double myPow(double x, int n) {
//        return n > 0 ? _myPow(x, n) : 1 / _myPow(x, n);
//    }
//};