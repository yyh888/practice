// 值和下标之差都在给定的范围内
//class Solution {
//public:
//    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
//        int n = nums.size();
//        set<long> st;
//        for (int i = 0; i < n; i++)
//        {
//            auto it = st.lower_bound((long)nums[i] - t);
//            if (it != st.end() && *it <= ((long)nums[i] + t))
//            {
//                return true;
//            }
//            st.insert(nums[i]);
//            if (i >= k)
//            {
//                st.erase(nums[i - k]);
//            }
//        }
//        return false;
//    }
//};


// 数据流的第 K 大数值
//class KthLargest {
//public:
//    KthLargest(int k, vector<int>& nums) {
//        _k = k;
//        for (auto& e : nums)
//        {
//            pq.push(e);
//        }
//    }
//
//    int add(int val) {
//        pq.push(val);
//        while (pq.size() > _k)
//        {
//            pq.pop();
//        }
//        return pq.top();
//    }
//private:
//    priority_queue<int, vector<int>, greater<int>> pq;
//    int _k;
//};


//class KthLargest {
//public:
//    KthLargest(int k, vector<int>& nums) {
//        _k = k;
//        hp = nums;
//        for (int i = (nums.size() - 1 - 1) / 2; i >= 0; i--)
//        {
//            AdjustDown(i);
//        }
//    }
//
//    int add(int val) {
//        insert(val);
//        while (hp.size() > _k)
//        {
//            pop();
//        }
//        return hp[0];
//    }
//private:
//    void AdjustDown(int parent)
//    {
//        int end = hp.size();
//        int child = 2 * parent + 1;
//        while (child < end)
//        {
//            if (child + 1 < end && hp[child] > hp[child + 1]) ++child;
//            if (hp[parent] > hp[child])
//            {
//                swap(hp[parent], hp[child]);
//                parent = child;
//                child = 2 * parent + 1;
//            }
//            else break;
//        }
//    }
//
//    void insert(int val)
//    {
//        hp.push_back(val);
//        int child = hp.size() - 1;
//        int parent = (child - 1) / 2;
//        while (child)
//        {
//            if (hp[parent] > hp[child])
//            {
//                swap(hp[parent], hp[child]);
//                child = parent;
//                parent = (child - 1) / 2;
//            }
//            else break;
//        }
//    }
//
//    void pop()
//    {
//        swap(hp[0], hp[hp.size() - 1]);
//        hp.pop_back();
//        AdjustDown(0);
//    }
//
//    vector<int> hp;// 小堆
//    int _k;
//};


// 出现频率最高的 k 个数字
//struct cmp
//{
//    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2)
//    {
//        return p1.second < p2.second;
//    }
//};
//
//class Solution {
//public:
//    vector<int> topKFrequent(vector<int>& nums, int k) {
//        unordered_map<int, int> hash;
//        for (auto& e : nums)
//        {
//            hash[e]++;
//        }
//        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//        for (auto& e : hash)
//        {
//            pq.push(e);
//        }
//        vector<int> res;
//        while (k--)
//        {
//            res.push_back(pq.top().first);
//            pq.pop();
//        }
//        return res;
//    }
//};


