//#include <bits/stdc++.h>
//
//using namespace std;
//const int N = 1010;
//int a[N];
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//    sort(a, a + n);
//    int sum = 0;
//    int cnt = 0;
//    for (int i = 0; i < n; i++)
//    {
//        sum += a[i];
//        ++cnt;
//        if (sum > m) break;
//    }
//    cout << cnt - 1;
//    return 0;
//}


//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//    float f;
//    while (t--)
//    {
//        cin >> f;
//        if (f < 0.000001) printf("gugugu\n");
//        else
//        {
//            printf("%.2f\n", 100 / f);
//        }
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int lowbit(int x)
//{
//    return x & -x;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    long long x, y;
//    while (n--)
//    {
//        cin >> x >> y;
//        if (lowbit(x) > lowbit(y)) cout << "xiaodong" << endl;
//        else if (lowbit(x) < lowbit(y)) cout << "xiaoming" << endl;
//        else cout << "same" << endl;
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e7 + 10;
//int a[N];
//
//int main()
//{
//    int n;
//    cin >> n;
//    while (n--)
//    {
//        int m;
//        cin >> m;
//        a[m]++;
//    }
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int m;
//        cin >> m;
//        if (a[m]) cout << "Yes" << endl;
//        else cout << "No" << endl;
//    }
//    return 0;
//}

