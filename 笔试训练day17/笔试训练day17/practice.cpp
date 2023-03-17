// 计算字符串出现的次数
//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    getline(cin, s);
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] >= 'A' && s[i] <= 'Z')
//        {
//            s[i] -= ('A' - 'a');
//        }
//    }
//    char target;
//    cin >> target;
//    if (target >= 'A' && target <= 'Z')
//    {
//        target -= ('A' - 'a');
//    }
//    unordered_map<char, int> hash;
//    for (int i = 0; i < s.size(); i++)
//    {
//        hash[s[i]]++;
//    }
//    cout << hash[target];
//    return 0;
//}

// 杨辉三角变形
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector<vector<int>> vv;
//    vv.reserve(n);
//    for (int i = 0; i < n; i++)
//    {
//        vv[i].resize(2 * i + 1);
//    }
//    vv[0][0] = 1;
//    for (int i = 1; i < n; i++)
//    {
//        for (int k = 0; k < 2 * i + 1; k++)
//        {
//            for (int j = k - 2; j <= k; j++)
//            {
//                if (j >= 0 && j < vv[i].size())
//                {
//                    vv[i][k] += vv[i - 1][j];
//                }
//            }
//        }
//    }
//    for (int i = 0; i < vv[n - 1].size(); i++)
//    {
//        if (vv[n - 1][i] % 2 == 0)
//        {
//            cout << i + 1 << endl;
//            return 0;
//        }
//    }
//    cout << -1;
//    return 0;
//}