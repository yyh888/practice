class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for (int i = 0; i < sentences.size(); i++)
        {
            int ret = 1;
            for (int j = 0; j < sentences[i].size(); j++)
            {
                if (sentences[i][j] == ' ') ++ret;
            }
            ans = max(ans, ret);
        }
        return ans;
    }
};