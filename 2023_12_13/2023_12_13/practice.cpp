class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                s[l] = s[r] = min(s[l], s[r]);
            }
            l++, r--;
        }
        return s;
    }
};