class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> ans, a;
        int k = 0;
        for (auto& s : words) {
            if (s[0] != 'p') { // ���� prev
                a.push_back(stoi(s));
                k = 0;
            }
            else {
                ans.push_back(++k > a.size() ? -1 : a[a.size() - k]); // ������ k ��
            }
        }
        return ans;
    }
};