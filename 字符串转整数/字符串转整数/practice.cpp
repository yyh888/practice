class Solution {
public:
    int StrToInt(string str) {
        int n = str.size();
        if (n == 0) return 0;
        for (int i = 0; i < n; i++)
        {
            if ((str[i] >= '0' && str[i] <= '9') || str[0] == '+' || str[0] == '-');
            else
            {
                return 0;
            }
        }
        int i = 0;
        int flag = 1;
        int ans = 0;
        if (str[0] == '+')
        {
            i++;
        }
        if (str[0] == '-')
        {
            i++;
            flag = -1;
        }
        for (; i < n; i++)
        {
            ans = ans * 10 + (str[i] - '0');
        }
        return ans * flag;
    }
};