class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        int n = columnTitle.size();
        for (int i = 0; i < n; i++)
        {
            int tmp = columnTitle[i] - 'A' + 1;
            sum = sum * 26 + tmp;
        }
        return sum;
    }
};