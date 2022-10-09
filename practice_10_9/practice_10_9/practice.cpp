class Solution {
public:
    int lengthOfLastWord(string s) {
        std::string::reverse_iterator rit = s.rbegin();
        while (*rit == ' ' && rit != s.rend())
        {
            rit++;
        }
        int sz = 0;
        while (*rit != ' ' && rit != s.rend())
        {
            rit++;
            sz++;
        }
        return sz;
    }
};