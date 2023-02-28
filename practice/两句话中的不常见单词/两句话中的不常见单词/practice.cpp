class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> hash1;
        unordered_map<string, int> hash2;
        string ret1;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != ' ')
            {
                ret1 += s1[i];
            }
            else
            {
                hash1[ret1]++;
                ret1.clear();
            }
        }
        hash1[ret1]++;
        string ret2;
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] != ' ')
            {
                ret2 += s2[i];
            }
            else
            {
                hash2[ret2]++;
                ret2.clear();
            }
        }
        hash1[ret2]++;
        vector<string> v;
        for (auto& e : hash1)
        {
            if (e.second == 1 && !hash2.count(e.first))
            {
                v.push_back(e.first);
            }

        }
        for (auto& e : hash2)
        {
            if (e.second == 1 && !hash1.count(e.first))
            {
                v.push_back(e.first);
            }
        }
        return v;
    }
};