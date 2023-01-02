#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    int m = (int)n;
    if (n - m >= 0.5)
    {
        cout << m + 1 << endl;
    }
    else cout << m << endl;
    return 0;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")


class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while (n >= 5)
        {
            n /= 5;
            count += n;
        }
        return count;
    }
};