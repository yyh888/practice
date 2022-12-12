#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const int N = 1e5 + 10;
int a[N], n, ph[N], hp[N], idx;

void heap_swap(int x, int y)
{
    swap(a[x], a[y]);
    swap(ph[hp[x]], ph[hp[y]]);
    swap(hp[x], hp[y]);
}

void down(int p)
{
    int c = 2 * p;
    while (c <= n)
    {
        if (c + 1 <= n && a[c] > a[c + 1]) ++c;
        if (a[c] < a[p])
        {
            heap_swap(c, p);
            p = c;
            c = 2 * p;
        }
        else break;
    }
}

void up(int c)
{
    int p = c / 2;
    while (p)
    {
        if (a[p] > a[c])
        {
            heap_swap(c, p);
            c = p;
            p = c / 2;
        }
        else break;
    }
}

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string s;
        int x, k;
        cin >> s;
        if (s == "I")
        {
            scanf("%d", &x);
            a[++n] = x;
            ph[++idx] = n;
            hp[n] = idx;
            up(n);
        }
        else if (s == "PM")
        {
            printf("%d\n", a[1]);
        }
        else if (s == "DM")
        {
            heap_swap(1, n);
            --n;
            down(1);
        }
        else if (s == "D")
        {
            scanf("%d", &k);
            k = ph[k];
            heap_swap(k, n);
            --n;
            down(k);
            up(k);
        }
        else
        {
            scanf("%d%d", &k, &x);
            k = ph[k];
            a[k] = x;
            up(k);
            down(k);
        }
    }
    return 0;
}