#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

const int N = 1e6 + 10;
int arr[N];

#include <iostream>
using namespace std;

const int N = 1e6 + 10;
int arr[N];

void QucikSort(int* arr, int begin, int end)
{
    if (begin >= end)
    {
        return;
    }
    int key = arr[(begin + end + 1) >> 1], i = begin - 1, j = end + 1;
    while (i < j)
    {
        do i++; while (arr[i] < key);
        do j--; while (arr[j] > key);
        if (i < j) swap(arr[i], arr[j]);
    }
    QucikSort(arr, begin, i - 1);
    QucikSort(arr, i, end);
}



int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    QucikSort(arr, 0, n - 1);
    printf("%d ", arr[k - 1]);
    return 0;
}



int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    QucikSort(arr, 0, n - 1);
    printf("%d ", arr[k - 1]);
    return 0;
}