#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//上三角判断
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int flag = 1;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            int tmp = 0;
//            scanf("%d", &tmp);
//            if (i > j)
//            {
//                if (tmp != 0)
//                {
//                    flag = 0;
//                }
//            }
//        }
//    }
//    if (flag)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    //五个学生
//    for (i = 0; i < 5; i++)
//    {
//        double n = 0.0;
//        double sum = 0.0;
//        int j = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%lf", &n);
//            sum += n;
//            printf("%.1lf ", n);
//        }
//        printf("%.1lf ", sum);
//        printf("\n");
//    }
//    return 0;
//}



//void Exc(int a[10][10], int t, int x, int y, int n, int m)
//{
//    if (t == 'c')
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int tmp = 0;
//            tmp = a[i][x - 1];
//            a[i][x - 1] = a[i][y - 1];
//            a[i][y - 1] = tmp;
//        }
//    }
//    else
//    {
//        int i = 0;
//        for (i = 0; i < m; i++)
//        {
//            int tmp = 0;
//            tmp = a[x - 1][i];
//            a[x - 1][i] = a[y - 1][i];
//            a[y - 1][i] = tmp;
//        }
//    }
//}
//
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    int k = 0;
//    scanf("%d", &k);
//    getchar();
//    for (i = 0; i < k; i++)
//    {
//        char t = 0;
//        int x = 0;
//        int y = 0;
//        scanf("%c %d %d", &t, &x, &y);
//        if (t == 'c' || t == 'r')
//        {
//            Exc(&arr, t, x, y, n, m);
//        }
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[30][30] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i + 1; j++)
//        {
//            if (j == 0 || i == j)
//            {
//                arr[i][j] = 1;
//            }
//            else
//            {
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//            }
//
//        }
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i + 1; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


