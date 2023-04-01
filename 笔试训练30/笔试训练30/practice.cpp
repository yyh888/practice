// 最难的问题
//#include <iostream>
//#include <unordered_map>
//#include <string>
//using namespace std;
//
//int main()
//{
//    unordered_map<char, char> hash;
//    for (char ch = 'A'; ch <= 'Z'; ch++)
//    {
//        if (ch >= 'F')
//        {
//            hash[ch] = (ch - 5);
//        }
//        else
//        {
//            hash[ch] = 'Z' - ('E' - ch);
//        }
//    }
//    string s;
//    while (getline(cin, s))
//    {
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] >= 'A' && s[i] <= 'Z')
//            {
//                s[i] = hash[s[i]];
//            }
//        }
//        cout << s << endl;
//    }
//    return 0;
//}


// 因子个数
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int cnt = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    n = n / i;
                }
                cnt++;
            }
        }
        if (n != 1)
        {
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")