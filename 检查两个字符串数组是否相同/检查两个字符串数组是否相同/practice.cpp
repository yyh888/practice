class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size(), m = word2.size();
        string N, M;
        for (int i = 0; i < n || i < m; i++)
        {
            if (i < n) N += word1[i];
            if (i < m) M += word2[i];
        }
        return N == M;
    }
};