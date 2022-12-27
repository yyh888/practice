#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int a[] = { 10, 100, 1000, 10000 };
int bit(int x)
{
    int i = 0;
    for (; i < 4; i++)
    {
        if (x / a[i] == 0) break;
    }
    return i + 1;
}

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        int ans = i * i;
        int b = bit(i);
        int cp = 1;
        for (int i = 0; i < b; i++) cp *= 10;
        if (ans % cp == i) sum++;
    }
    cout << sum << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 2; i < n; i++)
    {
        int flag = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0) {
                flag = 0; break;
            }
        }
        if (flag) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")