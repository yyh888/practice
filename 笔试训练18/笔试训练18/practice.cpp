// 剪花布条
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string s1, s2;
//    while (cin >> s1 >> s2)
//    {
//        int cnt = 0;
//        int idx = 0;
//        int n = s1.size(), m = s2.size();
//        while (idx < n && idx + m <= n)
//        {
//            if (s1[idx] == s2[0])
//            {
//                if (s1.substr(idx, m) == s2)
//                {
//                    cnt++;
//                    idx += m;
//                    continue;
//                }
//            }
//            idx++;
//        }
//        cout << cnt << endl;
//    }
//    return 0;
//}

// 客似云来
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//const int N = 90;
//string dp[N];
//
//string Add(string& s1, string& s2)
//{
//    int n = s1.size(), m = s2.size();
//    string res;
//    int i = n - 1, j = m - 1;
//    int add = 0;
//    while (i >= 0 || j >= 0 || add)
//    {
//        int tmp = add;
//        if (i >= 0) tmp += s1[i] - '0';
//        if (j >= 0) tmp += s2[j] - '0';
//        i--;
//        j--;
//        add = tmp / 10;
//        tmp %= 10;
//        res += to_string(tmp);
//    }
//    reverse(res.begin(), res.end());
//    return res;
//}
//
//int main()
//{
//    dp[1] = "1", dp[2] = "1";
//    for (int i = 3; i <= 80; i++)
//    {
//        dp[i] = Add(dp[i - 2], dp[i - 1]);
//    }
//    int n, m;
//    while (cin >> n >> m)
//    {
//        string res = "0";
//        for (int i = n; i <= m; i++)
//        {
//            res = Add(res, dp[i]);
//        }
//        cout << res << endl;
//    }
//    return 0;
//}