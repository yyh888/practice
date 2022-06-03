/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


//void Swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//
////大堆
//
//void AdjustDown(int* a, int n, int parent)
//{
//    int child = 2 * parent + 1;
//    while (child < n)
//    {
//        if (child + 1 < n && a[child] < a[child + 1])
//        {
//            child++;
//        }
//        if (a[parent] < a[child])
//        {
//            Swap(&a[parent], &a[child]);
//            parent = child;
//            child = 2 * parent + 1;
//        }
//        else
//        {
//            break;
//        }
//    }
//}
//
//
//
//int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize) {
//    if (k == 0)
//    {
//        *returnSize = 0;
//        return NULL;
//    }
//    //取数前k个数
//    int* a = (int*)malloc(sizeof(int) * k);
//    for (int i = 0; i < k; i++)
//    {
//        a[i] = arr[i];
//    }
//    //建大堆
//    for (int i = (k - 1 - 1) / 2; i >= 0; i--)
//    {
//        AdjustDown(a, k, i);
//    }
//
//    for (int i = k; i < arrSize; i++)
//    {
//        if (a[0] > arr[i])
//        {
//            a[0] = arr[i];
//            AdjustDown(a, k, 0);
//        }
//    }
//    *returnSize = k;
//    return a;
//}