#include <iostream>
#include <string>
using namespace std;

int a, b, c, d;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            ++a;
        }
        else if (s[i] == ' ')
        {
            ++b;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            ++c;
        }
        else
        {
            ++d;
        }
    }
    printf("%d\n%d\n%d\n%d\n", a, b, c, d);
    return 0;
}
// 64 位输出请用 printf("%lld")


#include <iostream>
using namespace std;
const int N = 1e6 + 10;

int a[N];

int main() {
    a[0] = 1;
    a[1] = 2;
    for (int i = 2; i < N; i++)
    {
        a[i] = (2 * a[i - 1] + a[i - 2]) % 32767;
    }
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        cout << a[m - 1] << endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")