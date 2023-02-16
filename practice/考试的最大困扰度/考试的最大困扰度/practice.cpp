class Solution {
public:
    int maxanswer(string& s, int k, char c)
    {
        int l = 0, r = 0;
        int other = 0;
        int Max = 0;
        for (int i = 0; i < s.size(); i++)
        {
            r++;
            if (s[i] != c) other++;
            while (other > k)
            {
                if (s[l] != c) other--;
                l++;
            }
            Max = max(Max, r - l);
        }
        return Max;
    }

    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(maxanswer(answerKey, k, 'T'), maxanswer(answerKey, k, 'F'));
    }
};