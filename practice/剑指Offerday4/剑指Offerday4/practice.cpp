// 쳲���������

//class Solution {
//public:
//    const int N = 1e9 + 7;
//
//    int fib(int n) {
//        if (n < 2)
//        {
//            return n;
//        }
//        int a = 0, b = 1;
//        long long c = 0;
//        for (int i = 2; i <= n; i++)
//        {
//            c = a + b;
//            c %= N;
//            a = b;
//            b = c;
//        }
//        return c;
//    }
//};

// ������̨������
//class Solution {
//public:
//    int numWays(int n) {
//        const int N = 1e9 + 7;
//        if (n == 0) return 1;
//        if (n <= 2) return n;
//        int a = 1, b = 2, c = 0;
//        for (int i = 3; i <= n; i++)
//        {
//            c = (a + b) % N;
//            a = b;
//            b = c;
//        }
//        return c;
//    }
//};