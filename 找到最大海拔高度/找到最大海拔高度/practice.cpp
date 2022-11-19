class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ret[101] = { 0 };
        int max = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            ret[i + 1] = ret[i] + gain[i];
            if (ret[i + 1] > max) max = ret[i + 1];
        }
        return max;
    }
};