class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string ret;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                ret += s[i];
            }
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                ret += s[i] + 32;
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                ret += s[i];
            }
        }
        int left = 0, right = ret.size() - 1;
        while (left < right)
        {
            if (ret[left] != ret[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};