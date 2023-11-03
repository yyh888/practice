class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> ans, a;
        int k = 0;
        for (auto& s : words) {
            if (s[0] != 'p') { // 不是 prev
                a.push_back(stoi(s));
                k = 0;
            }
            else {
                ans.push_back(++k > a.size() ? -1 : a[a.size() - k]); // 倒数第 k 个
            }
        }
        return ans;
    }
};
