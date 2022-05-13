#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


//void swap(int* p1, int* p2)
//{
//    int tmp = *p1;
//    *p1 = *p2;
//    *p2 = tmp;
//}


/*void AdJustDown(int* a, int k, int parent)
{
    int child = parent * 2 + 1;
    while(child < k)
    {
        if(child + 1 < k && a[child] < a[child + 1])
        {
            child++;
        }
        if(a[child] > a[parent])
        {
            swap(&a[parent], &a[child]);
            parent = child;
            child = parent * 2 + 1;
        }
        else
        {
            break;
        }
    }
}*/
//
//void AdJustDown(int* a, int parent, int n)
//{
//    int child = parent * 2 + 1;
//    while (child < n)
//    {
//        if (child + 1 < n && a[child + 1] > a[child])
//        {
//            child++;
//        }
//        if (a[child] > a[parent])
//        {
//            swap(&a[child], &a[parent]);
//            parent = child;
//            child = parent * 2 + 1;
//        }
//        else
//        {
//            break;
//        }
//    }
//}
//
//int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize) {
//    if (k == 0)
//    {
//        *returnSize = 0;
//        return NULL;
//    }
//    int* RetArr = (int*)malloc(sizeof(int) * k);
//    for (int i = 0; i < k; i++)
//    {
//        RetArr[i] = arr[i];
//    }
//    //建堆
//    for (int j = (k - 1 - 1) / 2; j >= 0; j--)
//    {
//        AdJustDown(RetArr, j, k);
//    }
//    //比较
//    for (int j = k; j < arrSize; j++)
//    {
//        if (RetArr[0] > arr[j])
//        {
//            RetArr[0] = arr[j];
//            AdJustDown(RetArr, 0, k);
//        }
//    }
//    *returnSize = k;
//    return RetArr;
//}



//int main()
//{
//    int arr[] = { 1,2,3,4,5,6 };
//    for (int i = 0; i < 6; i++)
//    {
//        printf("%d ", *(arr + i));
//    }
//    return 0;
//}



#include<stdio.h>
#include<string.h>




//int main()
//{
//    char ch[10000] = { 0 };
//    gets(ch);
//    int len = strlen(ch);
//    char* start = &ch[0];
//    char* tail = &ch[len - 1];
//    while (start < tail)
//    {
//        int tmp = *start;
//        *start = *tail;
//        *tail = tmp;
//        start++;
//        tail--;
//    }
//    for (int i = 0; i < len; i++)
//    {
//        printf("%c", ch[i]);
//    }
//    return 0;
//}




//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int k = 0;
//    int sum = 0;
//    for (int i = 0; i < 5; i++)
//    {
//        k += 2 * pow(10, i);
//        sum += k;
//    }
//    printf("%d", sum);
//    return 0;
//}




//int main()
//{
//    for (int i = 0; i < 100000; i++)
//    {
//        //判断位数
//        int tmp = i;
//        int place = 0;
//        while (tmp)
//        {
//            tmp /= 10;
//            place++;
//        }
//
//        int sum = 0;
//        int k = place;
//        int cur = i;
//        while (cur)
//        {
//            sum += pow(cur % 10, k);
//            cur /= 10;
//        }
//        if (sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}



int main()
{
    //打印上半部分
    int i = 0;
    for (i = 0; i < 7; i++)
    {
        int j = 0;
        //打印空格
        for (j = 0; j < 6 - i; j++)
        {
            printf("  ");
        }
        //打印*
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    //打印下半部分
    for (i = 0; i < 6; i++)
    {
        int j = 0;
        for (j = 0; j < i + 1; j++)
        {
            printf("  ");
        }
        for (j = 0; j < 11 - 2 * i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}