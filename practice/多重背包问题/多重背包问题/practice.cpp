//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int N = 110;
//int f[N][N];
//int v[N], w[N], s[N];
//
//int main()
//
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i] >> s[i];
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            for (int k = 0; k <= s[i]; k++)
//            {
//                if (j >= k * v[i]) f[i][j] = max(f[i][j], f[i - 1][j - k * v[i]] + k * w[i]);
//            }
//        }
//    }
//    cout << f[n][m];
//    return 0;
//}

// �������Ż�
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 25000;
//int f[N];
//int v[N], w[N];
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    int cnt = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        int a, b, s;
//        cin >> a >> b >> s;
//        int k = 1;
//        while (k <= s)
//        {
//            ++cnt;
//            v[cnt] = k * a;
//            w[cnt] = k * b;
//            s -= k;
//            k *= 2;
//        }
//        if (s)
//        {
//            ++cnt;
//            v[cnt] = s * a;
//            w[cnt] = s * b;
//        }
//    }
//    n = cnt;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = m; j >= v[i]; j--)
//        {
//            f[j] = max(f[j], f[j - v[i]] + w[i]);
//        }
//    }
//    cout << f[m];
//    return 0;
//}