#include<stdio.h>

int main()
{
    char arr[1001];
    gets(arr);
    int k = 0;
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}



