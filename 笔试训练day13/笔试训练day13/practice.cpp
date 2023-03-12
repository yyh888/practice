// 参数解析
//#include <iostream>
//#include <string>
//#include <stack>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    getline(cin, s);
//    stack<char> st;
//    string ret;
//    vector<string> v;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] == 34)
//        {
//            if (st.empty())
//            {
//                st.push(34);
//            }
//            else
//            {
//                st.pop();
//                v.push_back(ret);
//                ret.clear();
//            }
//        }
//        else if (s[i] == ' ')
//        {
//            if (st.empty())
//            {
//                v.push_back(ret);
//                ret.clear();
//            }
//            else
//            {
//                ret += s[i];
//            }
//        }
//        else
//        {
//            ret += s[i];
//        }
//    }
//    if (!ret.empty()) v.push_back(ret);
//    cout << v.size() << endl;
//    for (int i = 0; i < v.size(); i++)
//    {
//        cout << v[i] << endl;
//    }
//    return 0;
//}

// 跳石板
//#include <bits/stdc++.h>
//
//using namespace std;
//
//bool flag(int x)
//{
//    for (int i = 1; i <= x / 2; i++)
//    {
//        if (x % i == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    if (flag(n) || flag(m))
//    {
//        cout << -1 << endl;
//        return 0;
//    }
//    int ans = 0;
//    while (n < m)
//    {
//        n += n / 2;
//        ans++;
//    }
//    cout << ans;
//    return 0;
//}