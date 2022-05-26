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
//
//void AdjustDown(int* a, int n, int parent)
//{
//    int child = parent * 2 + 1;
//    while (child < n)
//    {
//        if (child + 1 < n && a[child] < a[child + 1])
//        {
//            child++;
//        }
//        if (a[child] > a[parent])
//        {
//            Swap(&a[child], &a[parent]);
//            parent = child;
//            child = parent * 2 + 1;
//        }
//        else
//        {
//            break;
//        }
//    }
//}
//int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize) {
//    if (k == 0)
//    {
//        *returnSize = 0;
//        return 0;
//    }
//    int* RetArr = (int*)malloc(sizeof(int) * k);
//    for (int i = 0; i < k; i++)
//    {
//        RetArr[i] = arr[i];
//    }
//    //´ó¶Ñ
//    for (int j = (k - 2) / 2; j >= 0; j--)
//    {
//        AdjustDown(RetArr, k, j);
//    }
//    //arrsize - k±È½Ï
//    for (int i = k; i < arrSize; i++)
//    {
//        if (arr[i] < RetArr[0])
//        {
//            RetArr[0] = arr[i];
//            AdjustDown(RetArr, k, 0);
//        }
//    }
//    *returnSize = k;
//    return RetArr;
//}



//if (x == NULL)
//{
//	printf("NULL ");
//	return;
//}
//printf("%c ", x->data);
//PrevOrder(x->left);
//PrevOrder(x->right);