// 淘宝网店
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//bool sig(int x)
//{
//    if (x < 2) return false;
//    for (int i = 2; i <= sqrt(x); i++)
//    {
//        if (x % i == 0) return false;
//    }
//    return true;
//}
//
//bool flag(int year)
//{
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//    {
//        return true;
//    }
//    return false;
//}
//
//int main() {
//    const int Day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int y1, m1, d1, y2, m2, d2;
//    while (~scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2))
//    {
//        int ret = 0;
//        d1--;
//        while (y1 < y2 || m1 < m2)
//        {
//            int cnt = sig(m1) ? 1 : 2;
//            // 按月加
//            ret += Day[m1] * cnt;
//            if (m1 == 2 && flag(y1))
//            {
//                ret += 1;
//            }
//            ++m1;
//            if (m1 > 12)
//            {
//                y1++;
//                m1 = 1;
//            }
//        }
//        int fee = sig(m1) ? 1 : 2;
//        while (d1 < d2)
//        {
//            ret += fee;
//            d1++;
//        }
//        cout << ret << endl;
//    }
//}


// 斐波那契凤尾
//#include <iostream>
//using namespace std;
//
//const int N = 1e6;
//int dp[N + 10];
//
//int main() {
//    int n;
//    dp[1] = 1, dp[2] = 2;
//    for (int i = 3; i <= N; i++)
//    {
//        dp[i] = (dp[i - 1] + dp[i - 2]) % N;
//    }
//    while (cin >> n)
//    {
//        if (n < 30)
//            cout << dp[n] << endl;
//        else
//            printf("%06d\n", dp[n]);
//    }
//    return 0;
//}
// 64 位输出请用 printf("%lld")