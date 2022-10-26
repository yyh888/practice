#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

const int N = 1e6 + 10;
int arr[N];

void _MergeSort(int* a, int left, int right, int* tmp)
{
    if (left >= right)
    {
        return;
    }
    int mid = (left + right) >> 1;
    _MergeSort(a, left, mid, tmp);
    _MergeSort(a, mid + 1, right, tmp);
    int i = left, j = mid + 1;
    int p = left;
    while (i <= mid && j <= right)
    {
        if (a[i] < a[j])
        {
            tmp[p++] = a[i++];
        }
        else
        {
            tmp[p++] = a[j++];
        }
    }
    while (i <= mid)
    {
        tmp[p++] = a[i++];
    }
    while (j <= right)
    {
        tmp[p++] = a[j++];
    }
    for (int e = left; e <= right; e++)
    {
        a[e] = tmp[e];
    }
}

void MergeSort(int* a, int n)
{
    int tmp[n];
    _MergeSort(a, 0, n - 1, tmp);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    MergeSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


#include<iostream>
using namespace std;

const int N = 1e6 + 10;
int arr[N];
int tmp[N];

void MergeSort(int* a, int left, int right, long long& count)
{
    if (left >= right)
    {
        return;
    }
    int mid = (left + right) >> 1;
    MergeSort(a, left, mid, count);
    MergeSort(a, mid + 1, right, count);
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right)
    {
        if (a[i] <= a[j])
        {
            tmp[k++] = a[i++];
        }
        else
        {
            tmp[k++] = a[j++];
            count += (mid - i + 1);
        }
    }
    while (i <= mid)
    {
        tmp[k++] = a[i++];
    }
    while (j <= right)
    {
        tmp[k++] = a[j++];
    }
    for (i = left, j = 0; i <= right; i++, j++)
    {
        a[i] = tmp[j];
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long count = 0;
    MergeSort(arr, 0, n - 1, count);
    printf("%lld", count);
    return 0;
}