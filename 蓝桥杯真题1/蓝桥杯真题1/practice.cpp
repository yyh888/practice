// 修剪灌木
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 10010;
//
//int a[N];
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        a[i] = max(2 * (n - i), 2 * (i - 1));
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        cout << a[i] << endl;
//    }
//    return 0;
//}

//前缀和
//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 100010;
//
//int a[N];
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &a[i]);
//        a[i] += a[i - 1];
//    }
//    while (m--)
//    {
//        int l, r;
//        cin >> l >> r;
//        cout << a[r] - a[l - 1] << endl;
//    }
//    return 0;
//}


// 子矩阵的和
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1010;
//int a[N][N];
//
//int main()
//{
//    int n, m, q;
//    cin >> n >> m >> q;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            cin >> a[i][j];
//            a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + a[i][j];
//        }
//    }
//
//    while (q--)
//    {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        cout << a[x2][y2] - a[x1 - 1][y2] - a[x2][y1 - 1] + a[x1 - 1][y1 - 1] << endl;
//    }
//    return 0;
//}

// 差分
//#include <bits/stdc++.h>
//
//using namespace std;
//const int N = 1e5 + 10;
//int a[N], b[N];
//
//void insert(int l, int r, int val)
//{
//    b[l] += val;
//    b[r + 1] -= val;
//}
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    while (m--)
//    {
//        int l, r, val;
//        cin >> l >> r >> val;
//        insert(l, r, val);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        b[i] += b[i - 1];
//        a[i] += b[i];
//        cout << a[i] << " ";
//    }
//    return 0;
//}

// 二维差分
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1010;
//int a[N][N], d[N][N];
//
//void insert(int x1, int y1, int x2, int y2, int c)
//{
//    d[x1][y1] += c;
//    d[x1][y2 + 1] -= c;
//    d[x2 + 1][y1] -= c;
//    d[x2 + 1][y2 + 1] += c;
//}
//
//int main()
//{
//    int n, m, q;
//    cin >> n >> m >> q;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//    while (q--)
//    {
//        int x1, y1, x2, y2, c;
//        cin >> x1 >> y1 >> x2 >> y2 >> c;
//        insert(x1, y1, x2, y2, c);
//    }
//     前缀和
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            d[i][j] = d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1] + d[i][j];
//            a[i][j] += d[i][j];
//            cout << a[i][j] << " ";
//        }
//        cout << '\n';
//    }
//    return 0;
//}


// 最长连续不重复子序列
//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//int a[N];
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    unordered_map<int, int> hash;
//    int res = 0;
//    for (int i = 0, j = 0; i < n; i++)
//    {
//        hash[a[i]]++;
//        while (hash[a[i]] > 1)
//        {
//            hash[a[j++]]--;
//        }
//        res = max(res, i - j + 1);
//    }
//    cout << res;
//    return 0;
//}

// 数组元素的目标和
//#include <iostream>
//
//using namespace std;
//const int N = 1e5 + 10;
//int a[N], b[N];
//
//int main()
//{
//    int n, m, x;
//    cin >> n >> m >> x;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 0; i < m; i++)
//    {
//        cin >> b[i];
//    }
//
//    int i = 0, j = m - 1;
//    while (1)
//    {
//        if (a[i] + b[j] > x)
//        {
//            j--;
//        }
//        else if (a[i] + b[j] < x)
//        {
//            i++;
//        }
//        else
//        {
//            cout << i << " " << j;
//            break;
//        }
//    }
//    return 0;
//}


// 判断子序列
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int a[N], b[N];
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 0; i < m; i++)
//    {
//        cin >> b[i];
//    }
//    int i = 0, j = 0;
//    while (i < n && j < m)
//    {
//        if (a[i] == b[j])
//        {
//            i++;
//        }
//        j++;
//    }
//    if (i == n)
//    {
//        cout << "Yes";
//    }
//    else
//    {
//        cout << "No";
//    }
//    return 0;
//}


// 统计子矩阵
//#include <iostream>
//
//using namespace std;
//const int N = 510, M = 510;
//int a[N][M], f[N][M];
//
//int main()
//{
//    int n, m, k;
//    cin >> n >> m >> k;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            cin >> a[i][j];
//            a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + a[i][j];
//        }
//    }
//    int res = 0;
//    for (int x1 = 1; x1 <= n; x1++)
//    {
//        for (int y1 = 1; y1 <= m; y1++)
//        {
//            for (int x2 = x1; x2 <= n; x2++)
//            {
//                for (int y2 = y1; y2 <= m; y2++)
//                {
//                    int ret = a[x2][y2] - a[x1 - 1][y2] - a[x2][y1 - 1] + a[x1 - 1][y1 - 1];
//                    if (ret <= k)
//                    {
//                        res++;
//                    }
//                }
//            }
//        }
//    }
//    cout << res;
//    return 0;
//}