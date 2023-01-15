int a[45];

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3) return n;
        a[0] = 1, a[1] = 2;
        for (int i = 2; i < n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
        return a[n - 1];
    }
};