class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        char com = suits[0];
        bool flag1 = true;
        for (char e : suits)
        {
            if (e != com) flag1 = false;
            com = e;
        }
        if (flag1) return "Flush";
        unordered_map<int, int> hash;
        for (auto e : ranks)
        {
            hash[e]++;
        }
        if (hash.size() == 5) return "High Card";
        for (auto e : hash)
        {
            if (e.second >= 3) return "Three of a Kind";
        }
        return "Pair";
    }
};