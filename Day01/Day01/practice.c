//int* printNumbers(int n, int* returnSize) {
//    // write code here
//    int count = pow(10, n);
//    int* arr = (int*)malloc(sizeof(int) * (count - 1));
//    for (int i = 1; i < count; i++)
//    {
//        arr[i - 1] = i;
//    }
//    *returnSize = count - 1;
//    return arr;
//}



//int main()
//{
//    int GetDay[] = { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
//    int year, month, day;
//    scanf("%d %d %d", &year, &month, &day);
//    int total = GetDay[month] + day;
//    if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
//    {
//        total++;
//    }
//    printf("%d", total);
//    return 0;
//}



