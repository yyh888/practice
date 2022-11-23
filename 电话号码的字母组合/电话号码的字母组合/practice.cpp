class Solution {
    string v[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    vector<string> ans;
public:
    void _letterCombinations(const string& digits, size_t i, string s)
    {
        if (i == digits.size())
        {
            ans.push_back(s);
            return;
        }
        string ret = v[digits[i] - '0'];
        for (int j = 0; j < ret.size(); j++)
        {
            _letterCombinations(digits, i + 1, s + ret[j]);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty())
        {
            return ans;
        }
        string s;
        _letterCombinations(digits, 0, s);
        return ans;
    }
};