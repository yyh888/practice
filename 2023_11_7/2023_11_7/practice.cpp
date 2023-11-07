class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        unordered_map<char, int> hash{ {'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1} };
        int ans = 0;
        for (int i = left; i <= right; i++)
        {
            if (hash[words[i].front()] && hash[words[i].back()]) ans++;
        }
        return ans;
    }
};