class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> hash1;
        unordered_map<int, int> hash2;
        for (auto& e : nums1)
        {
            hash1[e]++;
        }
        for (auto& e : nums2)
        {
            hash2[e]++;
        }
        cout << hash2[2] << endl;
        vector<int> v;
        for (auto& e : hash1)
        {
            int h2 = hash2[e.first];
            if (h2)
            {
                int cnt = min(h2, e.second);
                while (cnt--)
                {
                    v.push_back(e.first);
                }
            }
        }
        return v;
    }
};