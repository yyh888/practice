class Solution {
public:
    bool hasAlternatingBits(int n) {
        int flag = n & 1;
        while (n)
        {
            cout << flag << endl;
            if (((n % 2) & 1) == flag)
            {
                if (flag) flag = 0;
                else flag = 1;
                n /= 2;
            }
            else return false;
        }
        return true;
    }
};