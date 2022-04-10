#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//    return 0;int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d,%d", &a, &b);
//    c = b;
//    b = a;
//    a = c;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}
//
////计算体重
//int main()
//{
//    int wight = 0;
//    int hight = 0;
//    float c = 0.0;
//    scanf("%d %d", &wight, &hight);
//    c = wight / ((double)hight * hight / 10000);
//    printf("%.2f", c);
//
//}

//求三角形面积
//int main()
//{
//    double n = 0.0;
//    scanf("%lf", &n);
//    double v = (4.0 / 3.0) * 3.1415926 * (n * n * n);
//    printf("%.3lf", v);
//    return 0;
//}


//球的体积
//int main()
//{
//    double n = 0.0;
//    scanf("%lf", &n);
//    double v = (4.0 / 3.0) * 3.1415926 * (n * n * n);
//    printf("%.3lf", v);
//    return 0;
//}


//int main()
//{
//    printf("printf(\"Hello world!\\n\");");
//    printf("\n");
//    printf("cout << \"Hello world!\" << endl");
//    return 0;
//}




//int search(int arr[4])
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 4; i++)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            j = arr[i + 1];
//            arr[i + 1] = arr[i];
//            arr[i] = j;
//        }
//    }
//    return arr[i];
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    int arr[4] = { a, b, c, d };
//    int big = search(arr);
//    printf("%d", big);
//    return 0;
//}



//int main()
//{
//    int i;
//    int tmp = 0;
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    int arr[4] = { a, b, c, d };
//    for (i = 1; i < 4; i++)
//    {
//        if (arr[i - 1] > arr[i])
//        {
//            tmp = arr[i - 1];
//            arr[i - 1] = arr[i];
//            arr[i] = tmp;
//        }
//    }
//    printf("%d", arr[3]);
//    return 0;
//}

