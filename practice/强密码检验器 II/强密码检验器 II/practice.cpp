class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int len = password.size();
        if (len < 8) return false;
        string s = "!@#$%^&*()-+";
        bool f1 = false, f2 = false, f3 = false, f4 = false;
        for (int i = 0; i < len; i++)
        {
            if (i && password[i] == password[i - 1]) return false;
            if (password[i] >= 'a' && password[i] <= 'z') f1 = true;
            if (password[i] >= 'A' && password[i] <= 'Z') f2 = true;
            if (password[i] >= '0' && password[i] <= '9') f3 = true;
            for (int j = 0; j < s.size(); j++)
            {
                if (password[i] == s[j]) f4 = true;
            }
        }
        return f1 && f2 && f3 && f4;
    }
};