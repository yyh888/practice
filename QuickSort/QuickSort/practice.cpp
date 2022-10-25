#include<iostream>
using namespace std;

const int N = 1e6 + 10;

int a[N];

int GetMidIndex(int* a, int left, int right)
{
    int mid = (left + right) >> 1;
    if (a[left] < a[right])
    {
        if (a[mid] < a[left])
        {
            return left;
        }
        else if (a[mid] > a[right])
        {
            return right;
        }
        else
        {
            return mid;
        }
    }
    else
    {
        if (a[mid] < a[right])
        {
            return right;
        }
        else if (a[mid] > a[left])
        {
            return left;
        }
        else
        {
            return mid;
        }
    }
}


void QuickSort(int* a, int begin, int end)
{
    if (begin >= end)
    {
        return;
    }
    int mid = GetMidIndex(a, begin, end);
    int key = a[mid], i = begin - 1, j = end + 1;
    while (i < j)
    {
        do
        {
            i++;
        } while (a[i] < key);
        do
        {
            j--;
        } while (a[j] > key);
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    QuickSort(a, begin, j);
    QuickSort(a, j + 1, end);
}


int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    QuickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}