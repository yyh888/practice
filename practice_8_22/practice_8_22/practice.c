int compare(char* version1, char* version2) {
    int sz1 = strlen(version1), sz2 = strlen(version2);
    int i = 0, j = 0;
    while (i < sz1 || j < sz2)
    {
        //统计.之前的数字
        long long num1 = 0, num2 = 0;
        while (i < sz1 && version1[i] != '.')
        {
            num1 = num1 * 10 + (version1[i] - '0');
            i++;
        }
        //跳过.
        i++;
        while (j < sz2 && version2[j] != '.')
        {
            num2 = num2 * 10 + (version2[j] - '0');
            j++;
        }
        //跳过.
        j++;
        //比较大小
        if (num1 < num2)
        {
            return -1;
        }
        else if (num1 > num2)
        {
            return 1;
        }
    }
    return 0;
}