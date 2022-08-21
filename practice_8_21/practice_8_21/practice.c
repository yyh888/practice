void merge(int* data, int* tmp, int left, int right, long* k)
{
    if (left >= right)
    {
        return;
    }
    int mid = (left + right) >> 1;
    merge(data, tmp, left, mid, k);
    merge(data, tmp, mid + 1, right, k);
    int begin1 = left, end1 = mid;
    int begin2 = mid + 1, end2 = right;
    //放入tmp数组
    int i = left;
    while (begin1 <= end1 && begin2 <= end2)
    {
        if (data[begin1] < data[begin2])
        {
            tmp[i++] = data[begin1];
            begin1++;
        }
        else
        {
            tmp[i++] = data[begin2];
            (*k) += (end1 - begin1 + 1);
            begin2++;
        }
    }
    while (begin1 <= end1)
    {
        tmp[i++] = data[begin1++];
        //(*k) += len;
    }
    while (begin2 <= end2)
    {
        tmp[i++] = data[begin2++];
    }
    //把tmp拷贝回去
    for (int j = left; j <= right; j++)
    {
        data[j] = tmp[j];
    }
}

int InversePairs(int* data, int dataLen) {
    int* tmp = (int*)malloc(sizeof(int) * dataLen);
    int left = 0, right = dataLen - 1;
    long k = 0;
    merge(data, tmp, left, right, &k);
    return k % 1000000007;
}



