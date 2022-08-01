int main()
{
    int n = 0;
    scanf("%d", &n);
    int a = 1, b = 1, c = 2;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    printf("%d", c);
    return 0;
}



int main()
{
    int n = 0, m = 0;
    while (~scanf("%d%d", &n, &m))
    {
        double sum = 0;
        double a = n;
        while (m--)
        {
            sum += a;
            a = sqrt(a);
        }
        printf("%.2lf\n", sum);
    }
    return 0;
}