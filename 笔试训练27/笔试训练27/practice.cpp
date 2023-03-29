// 不用加减乘除做加法
//class Solution {
//public:
//    int Add(int num1, int num2) {
//        while (num2)
//        {
//            int ret = (num1 & num2) << 1;
//            num1 ^= num2;
//            num2 = ret;
//        }
//        return num1;
//    }
//};


// 三角形
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//bool Cmp(const string& s1, const string& s2)
//{
//    if (s1.size() < s2.size())
//    {
//        return true;
//    }
//    else if (s1.size() > s2.size())
//    {
//        return false;
//    }
//    else
//    {
//        return s1 < s2;
//    }
//}
//
//string Add(const string& s1, const string& s2)
//{
//    string ans;
//    int i = s1.size() - 1, j = s2.size() - 1;
//    int add = 0;
//    while (i >= 0 && j >= 0)
//    {
//        int ret = (s1[i] - '0') + (s2[j] - '0') + add;
//        add = ret / 10;
//        ret %= 10;
//        ans += (ret + '0');
//        --i, --j;
//    }
//    while (i >= 0)
//    {
//        int ret = (s1[i] - '0') + add;
//        add = ret / 10;
//        ret %= 10;
//        ans += (ret + '0');
//        --i;
//    }
//    while (j >= 0)
//    {
//        int ret = (s2[j] - '0') + add;
//        add = ret / 10;
//        ret %= 10;
//        ans += (ret + '0');
//        --j;
//    }
//    if (add)
//    {
//        ans += (add + '0');
//    }
//    reverse(ans.begin(), ans.end());
//    return ans;
//}
//
//int main()
//{
//    string a, b, c;
//    while (cin >> a >> b >> c)
//    {
//        if (Cmp(a, Add(b, c)) && Cmp(b, Add(a, c)) && Cmp(c, Add(a, b)))
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//    return 0;
//}
