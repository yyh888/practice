// 完全数计算
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    int res = 0;
//    for (int i = 1; i < n; i++)
//    {
//        int sum = 0;
//        for (int j = 1; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                sum += j;
//            }
//        }
//        if (sum == i)
//        {
//            res++;
//        }
//    }
//    cout << res;
//    return 0;
//}


// 扑克牌大小
//#include <iostream>
//#include <string>
//#include <vector>
//#include <cstdio>
//using namespace std;
//string cmp[] = { "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2", "joker", "JOKER" };
//
//int main()
//{
//    string s;
//    getline(cin, s);
//    vector<string> v1;
//    vector<string> v2;
//    int idx = s.find('-');
//    string ret;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] == ' ')
//        {
//            if (i < idx)
//            {
//                v1.push_back(ret);
//                ret.clear();
//            }
//            else
//            {
//                v2.push_back(ret);
//                ret.clear();
//            }
//        }
//        else if (s[i] != '-')
//        {
//            ret += s[i];
//        }
//        else
//        {
//            v1.push_back(ret);
//            ret.clear();
//        }
//    }
//    v2.push_back(ret);
//    if ((v1.size() == 2 && v1[0] == "joker") || (v2.size() == 2 && v2[0] == "joker"))// 王炸
//    {
//        cout << "joker JOKER";
//        return 0;
//    }
//    if (v1.size() != v2.size() && (v1.size() == 4 || v2.size() == 4))// 有炸弹情况
//    {
//        if (v1.size() == 4)
//        {
//            cout << v1[0] << " " << v1[1] << " " << v1[2] << " " << v1[3];
//        }
//        else
//        {
//            cout << v2[0] << " " << v2[1] << " " << v2[2] << " " << v2[3];
//        }
//        return 0;
//    }
//    if (v1.size() == v2.size())
//    {
//        int idx1 = 0, idx2 = 0;
//        for (int i = 0; i < 15; i++)
//        {
//            if (v1[0] == cmp[i])
//            {
//                idx1 = i;
//            }
//            if (v2[0] == cmp[i])
//            {
//                idx2 = i;
//            }
//        }
//        if (idx1 < idx2)
//        {
//            if (v1.size() == 1)// 单
//            {
//                cout << v2[0];
//            }
//            else if (v1.size() == 2)// 双
//            {
//                cout << v2[0] << " " << v2[1];
//            }
//            else if (v1.size() == 3)// 三
//            {
//                cout << v2[0] << " " << v2[1] << " " << v2[2];
//            }
//            else if (v1.size() == 4)// 四
//            {
//                cout << v2[0] << " " << v2[1] << " " << v2[2] << " " << v2[3];
//            }
//            else
//            {
//                cout << v2[0] << " " << v2[1] << " " << v2[2] << " " << v2[3] << " " << v2[4];
//            }
//        }
//        else
//        {
//            if (v1.size() == 1)// 单
//            {
//                cout << v1[0];
//            }
//            else if (v1.size() == 2)// 双
//            {
//                cout << v1[0] << " " << v1[1];
//            }
//            else if (v1.size() == 3)// 三
//            {
//                cout << v1[0] << " " << v1[1] << " " << v1[2];
//            }
//            else if (v1.size() == 4)// 四
//            {
//                cout << v1[0] << " " << v1[1] << " " << v1[2] << " " << v1[3];
//            }
//            else//顺子
//            {
//                cout << v1[0] << " " << v1[1] << " " << v1[2] << " " << v1[3] << " " << v1[4];
//            }
//        }
//    }
//    else
//    {
//        cout << "ERROR";
//    }
//
//    return 0;
//}