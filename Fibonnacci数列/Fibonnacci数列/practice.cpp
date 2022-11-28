#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int a[N];

int main()
{
    a[1] = 1;
    for (int i = 2; i < N; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    int n;
    cin >> n;
    int i = 0;
    for (; i < N; i++)
    {
        if (a[i] > n) break;
    }
    int left = n - a[i - 1];
    int right = a[i] - n;
    cout << (left > right ? right : left) << endl;
    return 0;
}


