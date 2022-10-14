class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int key = 0;
        for (int& e : nums)
        {
            key ^= e;
        }
        return key;
    }
};