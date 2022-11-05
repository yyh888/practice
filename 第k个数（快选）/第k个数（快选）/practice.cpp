#include<iostream>

using namespace std;

const int N = 1e6 + 10;
int a[N];

int QuickSelect(int l, int r, int k)
{
    if (l == r) return a[l];
    int key = a[l], i = l - 1, j = r + 1;
    while (i < j)
    {
        do ++i; while (a[i] < key);
        do --j; while (a[j] > key);
        if (i < j) swap(a[i], a[j]);
    }
    int ls = j - l + 1;
    if (k <= ls) return QuickSelect(l, j, k);
    else return QuickSelect(j + 1, r, k - ls);
}

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    cout << QuickSelect(0, n - 1, k) << endl;
    return 0;
}