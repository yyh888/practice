class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string n;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '-')
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    s[i] -= 'a' - 'A';
                }
                n += s[i];
            }
        }
        int end = n.size();
        while (end > 0)
        {
            int cnt = k;
            while (cnt--) end--;
            if (end > 0)
            {
                n.insert(end, "-");
            }
        }
        return n;
    }
};