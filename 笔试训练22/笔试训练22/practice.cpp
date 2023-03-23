// 小易的升级思路
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int Num(int a, int b)
//{
//    int tmp = b;
//    while (a % b)
//    {
//        tmp = a % b;
//        a = b;
//        b = tmp;
//    }
//    return tmp;
//}
//
//int main()
//{
//    int n, a;
//    while (cin >> n >> a)
//    {
//        vector<int> v;
//        v.resize(n);
//        for (int i = 0; i < n; i++)
//        {
//            cin >> v[i];
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (a >= v[i])
//            {
//                a += v[i];
//            }
//            else
//            {
//                a += Num(a, v[i]);
//            }
//        }
//        cout << a << endl;
//    }
//    return 0;
//}


// 找出字符串中第一个只出现一次的字符
//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//int main()
//{
//    map<char, int> hash;
//    string s;
//    cin >> s;
//    for (int i = 0; i < s.size(); i++)
//    {
//        hash[s[i]]++;
//    }
//    for (auto e : s)
//    {
//        if (hash[e] == 1)
//        {
//            cout << e;
//            return 0;
//        }
//    }
//    cout << -1;
//    return 0;
//}