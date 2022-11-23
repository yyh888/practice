#include <iostream>

using namespace std;
const int N = 1e5 + 10;
int a[N];

int main()
{
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i = 0, j = 1, flag = 1;
    while (j < n)
    {
        if (a[j] - a[i] > 0)
        {
            flag = 1;
        }
        else if (a[j] - a[i] < 0)
        {
            flag = -1;
        }
        else
        {
            i++;
            j++;
            continue;
        }

        if (flag == 1)
        {
            while (j < n && a[j] >= a[j - 1]) j++;
            if (j < n)
            {
                sum++;
                i = j++;
            }
        }
        else
        {
            while (j < n && a[j] <= a[j - 1]) j++;
            if (j < n)
            {
                sum++;
                i = j++;
            }
        }
    }
    if (i != j) sum++;
    cout << sum;
    return 0;
}