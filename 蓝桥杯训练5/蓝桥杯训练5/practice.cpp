// ´Êµä
//#include <iostream>
//#include <unordered_map>
//#include <string>
//using namespace std;
//
//int main()
//{
//    unordered_map<string, string> hash;
//    int n, m;
//    cin >> n >> m;
//    string s1, s2;
//    while (n--)
//    {
//        cin >> s1 >> s2;
//        hash[s2] = s1;
//    }
//    string s;
//    while (m--)
//    {
//        cin >> s;
//        if (hash.count(s))
//        {
//            cout << hash[s] << endl;
//        }
//        else cout << "eh" << endl;
//    }
//    return 0;
//}


//ÅÅ¶Ó
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 15010;
//
//struct stu
//{
//    string name;
//    int pos;
//}a[N];
//
//bool cmp(stu& a, stu& b)
//{
//    if (a.name.size() > b.name.size()) return true;
//    else if (a.name.size() == b.name.size() && a.pos < b.pos) return true;
//    else return false;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i].name;
//        a[i].pos = i;
//    }
//    sort(a, a + n, cmp);
//    for (int i = 0; i < n; i++)
//    {
//        cout << a[i].name << endl;
//    }
//    return 0;
//}


