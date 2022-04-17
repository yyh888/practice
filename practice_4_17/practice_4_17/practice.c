#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[50] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int tmp = arr[n - 1] - arr[0];
//    int jud = 0;
//    if (0 == tmp)
//    {
//        for (i = 0; i < n - 1; i++)
//        {
//            if (arr[i] != arr[i + 1])
//            {
//                jud = -1;
//                break;
//            }
//        }
//    }
//    else if (tmp > 0)
//    {
//        for (i = 0; i < n - 1; i++)
//        {
//            if (arr[i] > arr[i + 1])
//            {
//                jud = -1;
//                break;
//            }
//        }
//    }
//    else
//        for (i = 0; i < n - 1; i++)
//        {
//            if (arr[i] < arr[i + 1])
//            {
//                jud = -1;
//                break;
//            }
//        }
//    if (jud == 0)
//    {
//        printf("sorted\n");
//    }
//    else
//    {
//        printf("unsorted\n");
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i = 0;
//    int flag1 = 0;
//    int flag2 = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] > arr[i - 1])
//            {
//                flag1 = 1;
//            }
//            else
//            {
//                flag2 = 1;
//            }
//        }
//    }
//
//    if (flag1 + flag2 == 1)
//    {
//        printf("sorted\n");
//    }
//    else
//        printf("unsorted\n");
//    return 0;
//}


//int Search(int arr[], int sz, int k)
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left <= right)
//    {
//        int mid = right - (right - left) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return sz + 1;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[50] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int k = 0;
//    scanf("%d", &k);
//    int ret = Search(arr, n, k);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == k)
//        {
//            continue;
//        }
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[50] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    scanf("%d", &del);
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


