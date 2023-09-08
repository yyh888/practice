#include <iostream>
#include <vector>
#include <string>

using namespace std;

//string Add(string& s1, string& s2)
//{
//	int i = s1.size() - 1, j = s2.size() - 1;
//	string res;
//	int add = 0;
//	while (i >= 0 || j >= 0 || add)
//	{
//		if (i >= 0)
//		{
//			add += s1[i] - '0';
//			i--;
//		}
//		if (j >= 0)
//		{
//			add += s2[j] - '0';
//			j--;
//		}
//		
//		res += (add % 10 + '0');
//		add /= 10;
//	}
//	reverse(res.begin(), res.end());
//	return res;
//}
//
//int main()
//{
//	string s1 = "98989898";
//	string s2 = "23232323";
//	cout << Add(s1, s2);
//	return 0;
//}




//int cnt = 0;
//string res;
//
//int main()
//{
//    string s;
//    cin >> s;
//    int n = s.size();
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 2; j <= n - i; j++)
//        {
//            string tmp = s.substr(i, j);
//            int t = 1;
//            for (int k = i + 1; k <= n - j; k++)
//            {
//                if (tmp == s.substr(k, j))
//                {
//                    t++;
//                }
//                if (cnt < t)
//                {
//                    cnt = t;
//                    res = tmp;
//                }
//            }
//        }
//    }
//    cout << res << " " << cnt;
//    return 0;
//}

//string Del(string& s1, string s2)
//{
//	if (s1 < s2)
//	{
//		cout << "-";
//		return Del(s2, s1);
//	}
//	int i = s1.size() - 1, j = s2.size() - 1;
//	int del = 0;
//	string res;
//	while (i >= 0)
//	{
//		if (j >= 0) del += (s2[j] - '0');
//		del = s1[i] - '0' - del;
//		res += ((del + 10) % 10) + '0';
//		if (del < 0) del = 1;
//		else del = 0;
//		i--;
//		j--;
//	}
//	reverse(res.begin(), res.end());
//	return res;
//}
//
//
//int main()
//{
//	string s1 = "11111";
//	string s2 = "1111115";
//	cout << Del(s1, s2);
//	return 0;
//}
