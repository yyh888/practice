class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string tmp;
        for (auto& e : words)
        {
            tmp += e[0];
        }
        return tmp == s;
    }
};