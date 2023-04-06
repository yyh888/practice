class Solution {
public:
    string baseNeg2(int n) {
        if (n == 0)
        {
            return string("0");
        }
        string ans;
        while (n)
        {
            int ret = n % -2;
            ans += '0' + abs(ret);
            n = ret < 0 ? n / -2 + 1 : n / -2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};