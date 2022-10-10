class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        digits[n - 1] += 1;
        int add = 0;
        if (digits[n - 1] == 10)
        {
            add = 1;
            digits[n - 1] = 0;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (add)
            {
                digits[i] += 1;
            }
            else
            {
                break;
            }

            if (digits[i] == 10)
            {
                digits[i] = 0;
                add = 1;
            }
            else
            {
                add = 0;
                break;
            }
        }
        if (add)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};