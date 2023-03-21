// 字符串反转
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void dfs(string& s, int i)
//{
//    if (i == s.size())
//        return;
//    dfs(s, i + 1);
//    cout << s[i];
//}
//
//int main()
//{
//    string s;
//    cin >> s;
//    dfs(s, 0);
//    return 0;
//}

// 公共字串计算
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int a[160][160];
//
//int Getstr(string s1, string s2)
//{
//    if (s1.size() > s2.size())
//    {
//        swap(s1, s2);
//    }
//    int len1 = s1.size(), len2 = s2.size();
//    int len = 0;
//    for (int i = 1; i <= len1; i++)
//    {
//        for (int j = 1; j <= len2; j++)
//        {
//            if (s1[i - 1] == s2[j - 1])
//            {
//                a[i][j] = a[i - 1][j - 1] + 1;
//                if (a[i][j] > len)
//                {
//                    len = a[i][j];
//                }
//            }
//        }
//    }
//    return len;
//}
//
//int main()
//{
//    string s1, s2;
//    cin >> s1 >> s2;
//    cout << Getstr(s1, s2);
//    return 0;
//}