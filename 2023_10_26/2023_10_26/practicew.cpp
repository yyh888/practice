class Solution {
public:
    int countDigits(int num) {
        int ret = num;
        int ans = 0;
        while (ret)
        {
            int tmp = ret % 10;
            if (num % tmp == 0) ans++;
            ret /= 10;
        }
        return ans;
    }
};