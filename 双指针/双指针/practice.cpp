#include <iostream>

using namespace std;

// 数组元素的目标和
//const int N = 1e5 + 10;
//int a[N], b[N];
//
//int main()
//{
//    int n, m, x;
//    cin >> n >> m >> x;
//    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
//    int i = 0, j = m - 1;
//    while (1)
//    {
//        if (a[i] + b[j] < x) i++;
//        else if (a[i] + b[j] > x) j--;
//        else
//        {
//            cout << i << " " << j;
//            break;
//        }
//    }
//    return 0;
//}


// 判断子序列
//const int N = 1e5 + 10;
//int a[N], b[N];
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
//    int i = 0, j = 0;
//    while (i < n && j < m)
//    {
//        if (a[i] == b[j]) i++;
//        j++;
//    }
//    if (i == n) printf("Yes");
//    else printf("No");
//    return 0;
//}