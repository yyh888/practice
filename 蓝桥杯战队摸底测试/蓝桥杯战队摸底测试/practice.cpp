#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int a[10];
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//            int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (i == j) continue;
//            sum += a[i] * 10 + a[j];
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}



//int main()
//{
//    int n;
//    double m;
//    cin >> n >> m;
//    if (n <= 50)
//    {
//        printf("%.2f", 0.53 * n);
//    }
//    else
//    {
//        double sum = 50 * 0.53;
//        sum += (n - 50) * m;
//        printf("%.2f", sum);
//    }
//    return 0;
//}


//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int sum = 0;
//    while (n > 0)
//    {
//        if (n % 2 != 0)
//        {
//            sum += n;
//        }
//        scanf("%d", &n);
//    }
//    cout << sum << endl;
//    return 0;
//}




//int a[100], b[100];
//
//int main()
//{
//    int T;
//    cin >> T;
//    int win = 200;
//    while (T--)
//    {
//        int n;
//        int sum = 0;
//        cin >> n;
//        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//        for (int i = 0; i < n; i++) scanf("%d", &b[i]);
//        sort(a, a + n);
//        sort(b, b + n);
//        int i = 0, j = 0;
//        for (; i < n; i++)
//        {
//            while (i < n && a[i] < b[j])
//            {
//                i++;
//                sum -= win;
//            }
//            if (i < n && a[i] > b[j])
//            {
//                sum += win;
//                j++;
//            }
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    if (n < 100 || n > 999) printf("Please input a three digits number.");
//    vector<int> v;
//    int ret = n;
//    while (n)
//    {
//        v.push_back(n % 10);
//        n /= 10;
//    }
//    printf("%d = %d + %d*10 + %d*100", ret, v[0], v[1], v[2]);
//    return 0;
//}



//int main()
//{
//    double x;
//    while (~scanf("%lf", &x))
//    {
//        if (x > 0)
//        {
//            printf("%.2f\n", x * x + 1);
//        }
//        else if (x < 0)
//        {
//            printf("%.2f\n", -x);
//        }
//        else
//        {
//            printf("100.0\n");
//        }
//    }
//    return 0;
//}



//#include <string.h>


//struct A
//{
//    char name[10];
//    double grade;
//};
//
//vector<A> v;
//
//void Swap(A& a1, A& a2)
//{
//    std::swap(a1.name, a2.name);
//    std::swap(a1.grade, a2.grade);
//}
//
//void QuickSort(int l, int r)
//{
//    if (l >= r) return;
//    int i = l - 1, j = r + 1;
//    double key = v[l].grade;
//    while (i < j)
//    {
//        do i++; while (v[i].grade > key);
//        do j--; while (v[j].grade < key);
//        if (i < j) Swap(v[i], v[j]);
//    }
//    QuickSort(l, j);
//    QuickSort(j + 1, r);
//}
//
//int main()
//{
//    char a[10];
//    scanf("%s", a);
//    while (strcmp(a, "quit") != 0)
//    {
//        A tmp;
//        strcpy(tmp.name, a);
//        cin >> tmp.grade;
//        v.push_back(tmp);
//        scanf("%s", a);
//    }
//    QuickSort(0, v.size() - 1);
//    for (int i = 0; i < v.size(); i++)
//    {
//        printf("第%d名：%s,成绩为%.1f分\n", i + 1, v[i].name, v[i].grade);
//    }
//    return 0;
//}


//const int N = 1010;
//int a[N][N], b[N][N];
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    // 前缀和
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
//        }
//    }
//    int q;
//    cin >> q;
//    while (q--)
//    {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        cout << b[x2][y2] - b[x2][y1 - 1] - b[x1 - 1][y2] + b[x1 - 1][y1 - 1] << endl;
//    }
//    return 0;
//}


int a[] = { 1, 4, 9, 16, 25, 36 };

int main()
{
    int x1, x2, x3, x4, x5, x6;
    cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
    while (x1 + x2 + x3 + x4 + x5 + x6 > 0)
    {
        int sum = x1 * a[0] + x2 * a[1] + x3 * a[2] + x4 * a[3] + x5 * a[4] + x6 * a[5];
        int n = sum / 36;
        if (sum % 36) n++;
        cout << n << endl;
        cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
    }
    return 0;
}

//#include <math.h>
//
//bool check(int n)
//{
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0) return false;
//    }
//    return true;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    int sum = 0;
//    for (int i = 2; i <= n / 2; i++)
//    {
//        if (check(i) && check(n - i)) sum++;
//    }
//    cout << sum << endl;
//    return 0;
//}