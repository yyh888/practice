class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for (auto& e : gifts) pq.push(e);
        while (k--)
        {
            int tmp = pq.top();
            pq.pop();
            tmp = sqrt(tmp);
            pq.push(tmp);
        }
        long long ans = 0;
        while (pq.size())
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};