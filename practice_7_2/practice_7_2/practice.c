#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//    int a[10][10] = { 0 };
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%d ", a[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//
//#include<stdio.h>
//
//int main()
//{
//    int a[10][10] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int flag = 1;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d", &a[i][j]);
//            if (i > j && a[i][j] != 0)
//            {
//                flag = 0;
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


#include<stdio.h>

int main()
{
    int a[50] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int flag1 = 0, flag2 = 0;//记录上升和下降
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i > 0)
        {
            if (a[i] < a[i - 1])
            {
                flag1 = 1;
            }
            else
            {
                flag2 = 1;
            }
        }
    }
    if (flag1 && flag2)
    {
        printf("unsorted\n");
    }
    else
    {
        printf("sorted\n");
    }
    return 0;
}