// 养兔子
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100;
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
//    dp[1] = "1", dp[2] = "2";
//    for (int i = 3; i <= 90; i++)
//    {
//        dp[i] = Add(dp[i - 2], dp[i - 1]);
//    }
//    int n, m;
//    while (cin >> n)
//    {
//        cout << dp[n] << endl;
//    }
//    return 0;
//}


// 收件人列表
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    while (cin >> n)
//    {
//        string res;
//        string tmp;
//        getchar();
//        while (n--)
//        {
//            getline(cin, tmp);
//            if (tmp.find(",") != string::npos || tmp.find(" ") != string::npos)
//            {
//                res += "\"";
//                res += tmp;
//                res += "\"";
//                res += ", ";
//            }
//            else
//            {
//                res += tmp;
//                res += ", ";
//            }
//        }
//        if (res.back() == ' ') res.erase(res.size() - 2);
//        cout << res << endl;
//    }
//    return 0;
//}