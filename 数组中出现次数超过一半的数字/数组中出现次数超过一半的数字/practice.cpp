class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int n = numbers.size();
        int sz = n / 2 + 1;
        int ct[10010] = { 0 };
        int ret = 0;
        for (int i = 0; i < n; i++)
        {
            ct[numbers[i]]++;
        }
        for (int i = 0; i < 10010; i++)
        {
            if (ct[i] >= sz) ret = i;
        }
        return ret;
    }
};