//class Solution {
//public:
//    int minimumCost(vector<int>& cost) {
//        int n = cost.size();
//        sort(cost.begin(), cost.end());
//        int cnt = 2;
//        int ans = 0;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            ans += cost[i];
//            cnt--;
//            if (cnt == 0)
//            {
//                if (i == 0 || i == 1) break;
//                cnt = 2;
//                i--;
//            }
//        }
//        return ans;
//    }
//};


//class Solution {
//public:
//    int largestSumAfterKNegations(vector<int>& nums, int k) {
//        int n = nums.size();
//        priority_queue<int, vector<int>, greater<int>> pq;
//        for (auto& e : nums) pq.push(e);
//        while (k--)
//        {
//            int tmp = pq.top();
//            pq.pop();
//            tmp *= -1;
//            pq.push(tmp);
//        }
//        int ans = 0;
//        while (pq.size())
//        {
//            ans += pq.top();
//            pq.pop();
//        }
//        return ans;
//    }
//};



//class Solution {
//public:
//    typedef pair<int, string> PSI;
//
//    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//        int n = names.size();
//        vector<PSI> nums;
//        for (int i = 0; i < n; i++)
//        {
//            nums.push_back({ heights[i], names[i] });
//        }
//        sort(nums.begin(), nums.end());
//        vector<string> ans;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            ans.push_back(nums[i].second);
//        }
//        return ans;
//    }
//};


