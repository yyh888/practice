#include <iostream>
using namespace std;

const int N = 1e6 + 10;
int a[N];



int main() {
    int n;
    int m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    while (m--) {
        int x = 0;
        scanf("%d", &x);
        int l = 0, r = n - 1;
        // ◊Û
        while (l < r) {
            int mid = l + r >> 1;
            if (a[mid] >= x) {
                r = mid;
            }
            else {
                l = mid + 1;
            }
        }
        if (a[l] != x) {
            printf("-1 -1\n");
        }
        else { //”“
            printf("%d ", l);
            int l = 0, r = n - 1;
            while (l < r) {
                int mid = l + r + 1 >> 1;
                if (a[mid] <= x) {
                    l = mid;
                }
                else {
                    r = mid - 1;
                }
            }
            printf("%d\n", l);
        }
    }
    return 0;
}



#include <iostream>

using namespace std;

int main()
{
    double x;
    cin >> x;
    double l = -10000, r = 10000;
    while (r - l > 1e-8)
    {
        double mid = (l + r) / 2;
        if (mid * mid * mid >= x)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    printf("%lf", l);
    return 0;
}