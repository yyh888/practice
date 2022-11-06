#include <iostream>

using namespace std;

// 最长不重复子序列
//const int N = 1e5 + 10;
//int a[N], s[N];
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//    int res = 0;
//    for (int i = 0, j = 0; i < n; i++)
//    {
//        s[a[i]]++;
//        while (s[a[i]] > 1)
//        {
//            s[a[j]]--;
//            j++;
//        }
//        res = max(res, i - j + 1);
//    }
//    cout << res;
//    return 0;
//}

