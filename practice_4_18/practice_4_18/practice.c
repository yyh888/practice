#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //去重
//    for (i = 0; i < n; i++)
//    {
//        //从i + 1开始找相同元素，找到了就向前挪
//        int j = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                //从j + 1开始挪
//                int k = 0;
//                for (k = j; k < n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;
//                j--;
//            }
//        }
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[51] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int k = 0;
//    scanf("%d", &k);
//    //打印数组时输出k
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] > k && arr[i - 1] < k)
//        {
//            printf("%d ", k);
//            i--;
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
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //俩"箭头"
//    i = 0;
//    int j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    //输出剩余元素
//    if (i < n)
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//    else
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    return 0;
//}


