int minNumberInRotateArray(int* a, int rotateArrayLen) {
    //从左向右找最大值
    int MaxIndex = 0;
    while (MaxIndex < rotateArrayLen - 1)
    {
        if (a[MaxIndex] <= a[MaxIndex + 1])
        {
            MaxIndex++;
        }
        else
        {
            break;
        }
    }
    if (MaxIndex < rotateArrayLen - 1)
    {
        return a[MaxIndex + 1];
    }
    else
    {
        return a[0];
    }
}