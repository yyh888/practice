#include <iostream>
using namespace std;
// 进制转换
//int main() {
//    int a, b, c, d, A, B1, B2, C;
//    cin >> a >> b >> c >> d;
//    A = (a + c) >> 1;
//    C = (d - b) >> 1;
//    B1 = A - a;
//    B2 = d - C;
//    if (B1 != B2) cout << "No";
//    else cout << A << " " << B1 << " " << C;
//}
// 64 位输出请用 printf("%lld")


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char a[] = { 'A', 'B', 'C', 'D', 'E', 'F' };

int main() {
    int m, n;
    cin >> m >> n;
    vector<char> ans;
    int flag = 1;
    if (m < 0)
    {
        m = -m;
        flag = -1;
    }
    while (m)
    {
        int ret = m % n;
        char ch;
        if (ret >= 10)
        {
            ch = a[ret - 10];
        }
        else
        {
            ch = ret + '0';
        }
        ans.push_back(ch);
        m /= n;
    }
    if (ans.empty()) cout << 0;
    else
    {
        if (flag == -1) cout << '-';
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
}
// 64 位输出请用 printf("%lld")