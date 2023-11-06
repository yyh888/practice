class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int> pq(nums.begin(), nums.end());
        long long ans = 0;
        while (k--)
        {
            int tmp = pq.top();
            pq.pop();
            ans += tmp;
            tmp = (tmp + 2) / 3;
            pq.push(tmp);
        }
        return ans;
    }
};