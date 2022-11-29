#include <iostream>
using namespace std;

const int N = 1010;
int a[N][N];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                count++;
                if (i + 2 < n)
                    a[i + 2][j] = 0;
                if (j + 2 < m)
                    a[i][j + 2] = 0;
            }
        }
    }
    cout << count << endl;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")