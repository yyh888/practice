#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10;
int h[N], _size;

void down(int parent)
{
    int child = parent * 2;
    while (child <= _size)
    {
        if (child + 1 <= _size && h[child + 1] < h[child]) ++child;
        if (h[child] < h[parent])
        {
            swap(h[child], h[parent]);
            parent = child;
            child = 2 * parent;
        }
        else break;
    }
}

int main()
{
    int m, n;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) scanf("%d", &h[i]);
    _size = n;
    // ½¨¶Ñ
    for (int i = n / 2; i; i--) down(i);
    while (m--)
    {
        printf("%d ", h[1]);
        h[1] = h[_size];
        --_size;
        down(1);
    }
    return 0;
}