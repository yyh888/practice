// 回环句
//class Solution {
//public:
//    bool isCircularSentence(string sentence) {
//        vector<string> v;
//        int n = sentence.size();
//        if (sentence[0] != sentence[n - 1]) return false;
//        int begin = 0, end = 0;
//        while (end < n)
//        {
//            while (end < n && sentence[end] != ' ')
//            {
//                ++end;
//            }
//            v.push_back(sentence.substr(begin, end - begin));
//            begin = end + 1;
//            end = begin;
//        }
//        for (int i = 1; i < v.size(); i++)
//        {
//            if (v[i][0] != v[i - 1][v[i - 1].size() - 1])
//                return false;
//            if (i + 1 < v.size() && v[i][v[i].size() - 1] != v[i + 1][0])
//                return false;
//        }
//        return true;
//    }
//};



//class Solution {
//public:
//    bool isCircularSentence(string sentence) {
//        if (sentence.front() != sentence.back()) return false;
//        for (int i = 0; i < sentence.size(); i++)
//        {
//            if (sentence[i] == ' ' && sentence[i - 1] != sentence[i + 1])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//};


// 查找和最小的 K 对数字
//class Solution {
//public:
//    typedef pair<int, int> PII;
//    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
//        vector<vector<int>> vv;
//        int n = nums1.size(), m = nums2.size();
//        bool flag = true;
//        if (n > m)
//        {
//            swap(n, m);
//            swap(nums1, nums2);
//            flag = false;
//        }
//        auto cmp = [&](const auto& e1, const auto& e2) {
//            return nums1[e1.first] + nums2[e1.second] > nums1[e2.first] + nums2[e2.second];
//        };
//        priority_queue<PII, vector<PII>, decltype(&cmp)> q(cmp);
//        for (int i = 0; i < min(n, k); i++)
//        {
//            q.push({ i, 0 });
//        }
//        while (vv.size() < k && q.size())
//        {
//            auto [a, b] = q.top();
//            q.pop();
//            flag ? vv.push_back({ nums1[a], nums2[b] }) : vv.push_back({ nums2[b], nums1[a] });
//            if (b < m - 1) q.push({ a, b + 1 });
//        }
//        return vv;
//    }
//};


// 乘法表中第k小的数
//class Solution {
//public:
//    bool count(int m, int n, int mid, int k)
//    {
//        int num = 0;
//        int i = m, j = 1;
//        while (i >= 1 && j <= n)
//        {
//            if (i * j <= mid)
//            {
//                j++;
//                num += i;
//            }
//            else
//            {
//                i--;
//            }
//        }
//        return num >= k;
//    }
//
//    int findKthNumber(int m, int n, int k) {
//        int l = 1, r = m * n;
//        while (l < r)
//        {
//            int mid = l + (r - l) / 2;
//            if (count(m, n, mid, k))
//            {
//                r = mid;
//            }
//            else
//            {
//                l = mid + 1;
//            }
//        }
//        return l;
//    }
//};