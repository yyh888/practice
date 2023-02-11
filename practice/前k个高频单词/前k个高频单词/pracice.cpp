class Solution {
public:
    struct Compare
    {
        bool operator()(const pair<int, string>& p1, const pair<int, string>& p2)
        {
            return p1.first > p2.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> countmap;
        for (auto& e : words)
        {
            countmap[e]++;
        }

        vector<pair<int, string>> v;
        for (auto& e : countmap)
        {
            v.push_back(make_pair(e.second, e.first));
        }
        stable_sort(v.begin(), v.end(), Compare());

        vector<string> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};

