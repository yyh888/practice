class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        string s;
        int i = 0;
        while (i < n1 && i < n2)
        {
            s += word1[i];
            s += word2[i];
            i++;
        }
        if (i < n1)
        {
            s += word1.substr(i);
        }
        if (i < n2)
        {
            s += word2.substr(i);
        }
        return s;
    }
};