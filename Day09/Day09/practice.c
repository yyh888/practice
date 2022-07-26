/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* ret = (int*)malloc(sizeof(int) * 10000);
    int count = 0;
    for (int i = left; i <= right; i++)
    {
        int flag = 1;
        int itmp = i;
        while (itmp)
        {
            int tmp = itmp % 10;
            if (tmp == 0 || i % tmp != 0)
            {
                flag = 0;
                break;
            }
            itmp /= 10;
        }
        if (flag)
        {
            ret[count] = i;
            count++;
        }
    }
    *returnSize = count;
    return ret;
}