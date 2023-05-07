// 找出不同元素数目差数组
//class Solution {
//public:
//    vector<int> distinctDifferenceArray(vector<int>& nums) {
//        unordered_map<int, int> left, right;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            right[nums[i]]++;
//        }
//        vector<int> res(n);
//        for (int i = 0; i < n; i++)
//        {
//            left[nums[i]]++;
//            right[nums[i]]--;
//            if (right[nums[i]] == 0)
//            {
//                right.erase(nums[i]);
//            }
//            res[i] = (left.size() - right.size());
//        }
//        return res;
//    }
//};


// 频率跟踪器
//class FrequencyTracker {
//public:
//    unordered_map<int, int> hash;
//    vector<int> cnt;
//
//    FrequencyTracker() {
//        cnt.resize(2e5 + 10);
//    }
//
//    void add(int number) {
//        cnt[hash[number]]--;
//        hash[number]++;
//        cnt[hash[number]]++;
//    }
//
//    void deleteOne(int number) {
//        if (hash.find(number) == hash.end()) return;
//        cnt[hash[number]]--;
//        hash[number]--;
//        cnt[hash[number]]++;
//        if (hash[number] == 0) hash.erase(number);
//    }
//
//    bool hasFrequency(int frequency) {
//        return cnt[frequency];
//    }
//};


// 有相同颜色的相邻元素数目
//class Solution {
//public:
//    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
//        int sz = queries.size();
//        vector<int> color(n);
//        vector<int> res(sz);
//        set<int> st;
//        for (int i = 0; i < sz; i++)
//        {
//            st.insert(queries[i][0]);
//            color[queries[i][0]] = queries[i][1];
//            int ret = 0;
//            int preidx = -1, curidx = -1;
//            for (auto& e : st)
//            {
//                if (curidx == -1)
//                {
//                    curidx = e;
//                    continue;
//                }
//                if (preidx != -1 && curidx - preidx == 1)
//                {
//                    if (color[curidx] == color[preidx])
//                    {
//                        ret++;
//                    }
//                }
//                preidx = curidx;
//                curidx = e;
//            }
//            if (preidx != -1 && curidx - preidx == 1 && color[curidx] == color[preidx]) ret++;
//            res[i] = ret;
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
//        int q = queries.size();
//        vector<int> res;
//        vector<int> color(n);
//        int sum = 0;
//        for (auto& e : queries)
//        {
//            int idx = e[0];
//            if (idx - 1 >= 0 && color[idx - 1] == color[idx] && color[idx]) sum--;
//            if (idx + 1 < n && color[idx + 1] == color[idx] && color[idx]) sum--;
//            color[idx] = e[1];
//            if (idx - 1 >= 0 && color[idx - 1] == color[idx]) sum++;
//            if (idx + 1 < n && color[idx + 1] == color[idx]) sum++;
//            res.push_back(sum);
//        }
//        return res;
//    }
//};


