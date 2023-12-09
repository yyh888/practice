class Solution {
public:
    bool IsBanlence(int n)
    {
        string s = to_string(n);
        vector<int> cnt(10);
        for (auto& e : s)
        {
            cnt[e - '0']++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            int num = s[i] - '0';
            if (cnt[num] != num) return false;
        }
        return true;
    }

    int nextBeautifulNumber(int n) {
        while (n++)
        {
            if (IsBanlence(n)) break;
        }
        return n;
    }
};