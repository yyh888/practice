#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int* singleNumbers(int* nums, int numsSize, int* returnSize) {
//    int* p = (int*)malloc(2 * sizeof(int));
//    if (p == NULL)
//    {
//        perror("malloc");
//        return NULL;
//    }
//    int x = 0;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        x ^= nums[i];
//    }
//    int count = 0;
//    while ((x & 1) != 1)
//    {
//        x >>= 1;
//        count++;
//    }
//    int a = 0;
//    int b = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if ((nums[i] >> count) & 1)
//        {
//            a ^= nums[i];
//        }
//        else
//        {
//            b ^= nums[i];
//        }
//    }
//    p[0] = a;
//    p[1] = b;
//    *returnSize = 2;
//    return p;
//}


//int main()
//{
//    int arr[3][3] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%c", &arr[i][j]);
//            getchar();
//        }
//    }
//    char flag = 'c';
//    for (i = 0; i < 3; i++)
//    {
//        if (arr[i][1] == arr[i][2] && arr[i][0] == arr[i][1])
//        {
//            flag = arr[i][0];
//            break;
//        }
//        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
//        {
//            flag = arr[0][i];
//            break;
//        }
//    }
//    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
//    {
//        flag = arr[1][1];
//    }
//    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
//    {
//        flag = arr[1][1];
//    }
//
//    if (flag == 'K')
//    {
//        printf("KiKi wins!\n");
//    }
//    else if (flag == 'B')
//    {
//        printf("BoBo wins!\n");
//    }
//    else
//    {
//        printf("No winner!\n");
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[64] = { 0 };
//    int i = 0;
//    while (n)
//    {
//        arr[i++] = n % 6;
//        n /= 6;
//    }
//    for (i--; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}



//int main()
//{
//    int hour = 0;
//    int min = 0;
//    scanf("%d:%d", &hour, &min);
//    //k为分钟
//    int k = 0;
//    scanf("%d", &k);
//    hour = (hour + (k + min) / 60) % 24;
//    min = (min + k) % 60;
//    printf("%02d:%02d", hour, min);
//    return 0;
//}



//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    scanf("%lld %lld", &n, &m);
//    //最大公约数
//    long long x = n;
//    long long y = m;
//    long long tmp = 0;
//    while (tmp = x % y)
//    {
//        x = y;
//        y = tmp;
//    }
//    long long max = y;
//    long long min = (n * m) / max;
//    printf("%lld", min + max);
//    return 0;
//}


//int Step(int n)
//{
//    if (n <= 3)
//    {
//        return n;
//    }
//    else
//    {
//        return Step(n - 1) + Step(n - 2);
//    }
//}
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    //递归
//    int ret = Step(n);
//    printf("%d", ret);
//    return 0;
//}


//int main()
//{
//    int arr[100000] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    //打印
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}



//int main()
//{
//    char arr[8000] = { 0 };
//    scanf("%s", &arr);
//    char* p = arr;
//    //统计c,ch,chn的数量
//    long c = 0;
//    long long ch = 0;
//    long long chn = 0;
//    while (*p != '\0')
//    {
//        if (*p == 'C')
//        {
//            c++;
//        }
//        if (*p == 'H')
//        {
//            ch += c;
//        }
//        if (*p == 'N')
//        {
//            chn += ch;
//        }
//        p++;
//    }
//    printf("%lld", chn);
//    return 0;
//}


