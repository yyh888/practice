#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


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
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    while (n--)
//    {
//        sum += n;
//    }
//    printf("%d", sum);
//    return 0;
//}


//int main()
//{
//    int hour = 0;
//    int min = 0;
//    int k = 0;
//    scanf("%d:%d %d", &hour, &min, &k);
//    hour = ((min + k) / 60 + hour) % 24;
//    min = (min + k) % 60;
//    printf("%02d:%02d", hour, min);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int min = 0;
//    while (n > 13)
//    {
//        n -= 12;
//        min += 4;
//    }
//    min += 2;
//    printf("%d", min);
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


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int tmp = 1;
//    int arr[10] = { 0 };
//    int i = 0;
//    while (n)
//    {
//        tmp = n % 10;
//        if (tmp % 2 == 0)
//        {
//            arr[i++] = 0;
//        }
//        else
//        {
//            arr[i++] = 1;
//        }
//        n /= 10;
//    }
//
//    for (i - 1; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    int i = 0;
//    while (n)
//    {
//        i++;
//        if (n % 2 != 0)
//        {
//            sum += pow(10, i - 1);
//        }
//        n /= 10;
//    }
//    printf("%d", sum);
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
//    char str[8000] = { 0 };
//    scanf("%s", str);
//    char* p = str;
//    char* p1 = p;
//    char* p2 = p1;
//    int count = 0;
//    int i = 0;
//    while (*p)
//    {
//        if (*p == 'C')
//        {
//            
//            
//            while (*p1)
//            {
//                p1++;
//                if (*p1 == 'H')
//                {
//                    
//                    p2++;
//                    while (*p2)
//                    {
//                        if (*p2 == 'N')
//                        {
//                            count++;
//                        }
//                        p2++;
//                    }
//                    
//                }
//                
//            }
//            
//        }
//    }
//    printf("%d", count);
//    return 0;
//}


//int main()
//{
//    char str[8000] = { 0 };
//    scanf("%s", str);
//    char* p = str;//CHHCHNN
//    long long count = 0;
//    long long c = 0;
//    long long ch = 0;
//    long long chn = 0;
//    while (*p)
//    {
//        if (*p == 'C')
//            c++;
//        else if (*p == 'H')
//            ch += c;
//        else if (*p == 'N')
//            chn += ch;
//        p++;
//    }
//    printf("%lld", chn);
//    return 0;
//}


//int max3(int a, int b, int c)
//{
//    int arr[3] = { a, b, c };
//    int max = 0;
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    return max;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    double m = (double)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
//    printf("%.2lf", m);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[100] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int k = 0;
//    scanf("%d", &k);
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == k)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}


//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;");
//    return 0;
//}


//#include<math.h>
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    int j = 0;
//    for (i = 100; i < 1000; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        if (j == i)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

#include<math.h>
int main()
{
    int i = 0;
    while (~scanf("%d", &i))
    {
        int m = sqrt(i);
        printf("%d\n", m);
    }
    return 0;
}