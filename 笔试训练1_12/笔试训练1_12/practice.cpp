#include <iostream>

using namespace std;

// int lowbit(int x)
// {
//     return x & -x;
// }

int main()
{
    int n;
    cin >> n;
    int ans = 0, ret = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((n >> i) & 1)
        {
            ++ret;
            ans = max(ans, ret);
        }
        else ret = 0;
    }
    cout << ans;
    return 0;
}



class LCA {
public:
    int getLCA(int a, int b) {
        while (a != b)
        {
            if (a < b)
            {
                b /= 2;
            }
            else if (a > b)
            {
                a /= 2;
            }
            else break;
        }
        return a;
    }
};