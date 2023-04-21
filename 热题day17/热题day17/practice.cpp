// 比特位计数
//class Solution {
//public:
//    int GetBit(int x)
//    {
//        return x & -x;
//    }
//
//    int handler(int x)
//    {
//        int res = 0;
//        while (x)
//        {
//            x -= GetBit(x);
//            res++;
//        }
//        return res;
//    }
//
//    vector<int> countBits(int n) {
//        vector<int> v(n + 1);
//        for (int i = 0; i <= n; i++)
//        {
//            v[i] = handler(i);
//        }
//        return v;
//    }
//};


// 前 K 个高频元素
//class Solution {
//public:
//    // struct cmp
//    // {
//    //     bool opreator(const pair<int, int>& x, const pair<int, int>& y)
//    //     {
//    //         return x.second > y.second;
//    //     }
//    // };
//    static bool cmp(pair<int, int>& m, pair<int, int>& n) {
//        return m.second < n.second;
//    }
//
//    vector<int> topKFrequent(vector<int>& nums, int k) {
//        unordered_map<int, int> hash;
//        for (int& num : nums)
//        {
//            hash[num]++;
//        }
//        //priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(&cmp)> pq(cmp);
//        for (auto e : hash)
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

//class Solution {
//public:
//    struct cmp
//    {
//        bool operator()(const pair<int, int>& x, const pair<int, int>& y)
//        {
//            return x.second < y.second;
//        }
//    };
//
//    vector<int> topKFrequent(vector<int>& nums, int k) {
//        unordered_map<int, int> hash;
//        for (int& num : nums)
//        {
//            hash[num]++;
//        }
//        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//        for (auto e : hash)
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


// 字符串解码
//class Solution {
//public:
//    string decodeString(string s) {
//        stack<pair<int, string>> st;
//        int mul;
//        string res;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] >= '0' && s[i] <= '9')
//            {
//                mul = mul * 10 + (s[i] - '0');
//            }
//            else if (s[i] == '[')
//            {
//                st.push({ mul, res });
//                mul = 0;
//                res.clear();
//            }
//            else if (s[i] == ']')
//            {
//                pair<int, string> kv = st.top();
//                string ret = kv.second;
//                int cnt = kv.first;
//                st.pop();
//                while (cnt--)
//                {
//                    ret += res;
//                }
//                res = ret;
//            }
//            else
//            {
//                res += s[i];
//            }
//        }
//        return res;
//    }
//};