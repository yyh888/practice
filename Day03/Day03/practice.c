#include<stdio.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int minus = 0;//负数
//    int positive = 0;//正数
//    double count = 0.0;
//    for (int i = 0; i < n; i++)
//    {
//        int q = 0;
//        scanf("%d", &q);
//        if (q < 0)
//        {
//            minus++;
//        }
//        else if (q > 0)
//        {
//            positive += q;
//            count++;
//        }
//    }
//    double val;
//    if (count == 0)
//    {
//        val = 0.0;
//    }
//    else
//    {
//        val = positive / count;
//    }
//    printf("%d %.1lf", minus, val);
//    return 0;
//}


void reverse(int* a, int x, int y)
{
    while (x < y)
    {
        int tmp = a[x];
        a[x] = a[y];
        a[y] = tmp;
        x++;
        y--;
    }
}


int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    // write code here
    //变成有序
    int i = 0;
    while (rotateArray[rotateArrayLen - 1] <= rotateArray[0])
    {
        reverse(rotateArray, 0, i);
        reverse(rotateArray, i + 1, rotateArrayLen - 1);
        reverse(rotateArray, 0, rotateArrayLen - 1);
    }
    return rotateArray[0];
}