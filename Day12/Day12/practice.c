int main()
{
    int n = 0;
    scanf("%d", &n);
    do {
        printf("%c", n % 10 + '0');
        n /= 10;
    } while (n);
    return 0;
}



int main()
{
    char arr[10001];
    gets(arr);
    int len = strlen(arr);
    int p1 = len - 1, p2 = len - 1;
    while (p1 >= 0)
    {
        while ((arr[p1] <= 'Z' && arr[p1] >= 'A') || (arr[p1] <= 'z' && arr[p1] >= 'a'))
        {
            p1--;
        }
        for (int i = p1 + 1; i <= p2; i++)
        {
            printf("%c", arr[i]);
        }
        printf(" ");
        while (!((arr[p1] <= 'Z' && arr[p1] >= 'A') || (arr[p1] <= 'z' && arr[p1] >= 'a')))
        {
            p1--;
        }
        p2 = p1;
    }
    return 0;
}