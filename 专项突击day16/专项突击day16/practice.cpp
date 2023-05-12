//和最小的 k 个数对

//struct cmp
//{
//    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2)
//    {
//        return (p1.first + p1.second) > (p2.first + p2.second);
//    }
//};
//
//class Solution {
//public:
//    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
//        int n = nums1.size(), m = nums2.size();
//        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                pq.push({ nums1[i], nums2[j] });
//            }
//        }
//        vector<vector<int>> vv;
//        while (k-- && pq.size())
//        {
//            auto e = pq.top();
//            pq.pop();
//            vv.push_back({ e.first, e.second });
//        }
//        return vv;
//    }
//};


//class Solution {
//public:
//    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
//        bool flag = true;
//        int n = nums1.size(), m = nums2.size();
//        auto cmp = [&](const auto& a, const auto& b) {
//            return nums1[a.first] + nums2[a.second] > nums1[b.first] + nums2[b.second];
//        };
//        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
//        vector<vector<int>> vv;
//        if (n > m)
//        {
//            swap(nums1, nums2);
//            swap(n, m);
//            flag = false;
//        }
//        for (int i = 0; i < min(k, n); i++)
//        {
//            pq.push({ i, 0 });
//        }
//        while (pq.size() && vv.size() < k)
//        {
//            auto [a, b] = pq.top();
//            pq.pop();
//            flag ? vv.push_back({ nums1[a], nums2[b] }) : vv.push_back({ nums2[b], nums1[a] });
//            if (b + 1 < m) pq.push({ a, b + 1 });
//        }
//        return vv;
//    }
//};

// 实现前缀树
//class Trie {
//public:
//    int son[200010][26];
//    int cnt[200010];
//    int idx;
//
//    /** Initialize your data structure here. */
//    Trie() {
//        memset(son, 0, sizeof son);
//        memset(cnt, 0, sizeof cnt);
//        idx = 0;
//    }
//
//    /** Inserts a word into the trie. */
//    void insert(string word) {
//        int p = 0;
//        for (int i = 0; i < word.size(); i++)
//        {
//            int u = word[i] - 'a';
//            if (!son[p][u])
//            {
//                son[p][u] = ++idx;
//            }
//            p = son[p][u];
//        }
//        cnt[p]++;
//    }
//
//    /** Returns if the word is in the trie. */
//    bool search(string word) {
//        int p = 0;
//        for (int i = 0; i < word.size(); i++)
//        {
//            int u = word[i] - 'a';
//            if (!son[p][u])
//            {
//                return false;
//            }
//            p = son[p][u];
//        }
//        return cnt[p];
//    }
//
//    /** Returns if there is any word in the trie that starts with the given prefix. */
//    bool startsWith(string prefix) {
//        int p = 0;
//        for (int i = 0; i < prefix.size(); i++)
//        {
//            int u = prefix[i] - 'a';
//            if (!son[p][u])
//            {
//                return false;
//            }
//            p = son[p][u];
//        }
//        return true;
//    }
//};


//class Trie {
//public:
//    /** Initialize your data structure here. */
//    Trie()
//        : son(26)
//        , flag(false)
//    {}
//
//    Trie* searchend(string s)
//    {
//        Trie* node = this;
//        for (int i = 0; i < s.size(); i++)
//        {
//            int u = s[i] - 'a';
//            if (!node->son[u])
//            {
//                return nullptr;
//            }
//            node = node->son[u];
//        }
//        return node;
//    }
//
//    /** Inserts a word into the trie. */
//    void insert(string word) {
//        Trie* node = this;
//        for (int i = 0; i < word.size(); i++)
//        {
//            int u = word[i] - 'a';
//            if (!node->son[u])
//            {
//                node->son[u] = new Trie();
//            }
//            node = node->son[u];
//        }
//        node->flag = true;
//    }
//
//    /** Returns if the word is in the trie. */
//    bool search(string word) {
//        Trie* node = searchend(word);
//        if (node && node->flag)
//        {
//            return true;
//        }
//        return false;
//    }
//
//    /** Returns if there is any word in the trie that starts with the given prefix. */
//    bool startsWith(string prefix) {
//        Trie* node = searchend(prefix);
//        if (node)
//        {
//            return true;
//        }
//        return false;
//    }
//private:
//    vector<Trie*> son;
//    bool flag;
//};


// 替换单词
//int son[100000][26], idx;
//int cnt[100000];
//
//void insert(string s)
//{
//    int p = 0;
//    for (int i = 0; i < s.size(); i++)
//    {
//        int u = s[i] - 'a';
//        if (!son[p][u])
//        {
//            son[p][u] = ++idx;
//        }
//        p = son[p][u];
//    }
//    cnt[p]++;
//}
//
//string search(string& s)
//{
//    int p = 0;
//    string ret;
//    for (int i = 0; i < s.size(); i++)
//    {
//        int u = s[i] - 'a';
//        if (!son[p][u])
//        {
//            break;
//        }
//        ret += s[i];
//        p = son[p][u];
//        if (cnt[p])
//        {
//            return ret;
//        }
//    }
//    return s;
//}
//
//class Solution {
//public:
//    string replaceWords(vector<string>& dictionary, string sentence) {
//        memset(cnt, 0, sizeof cnt);
//        for (auto& e : dictionary)
//        {
//            insert(e);
//        }
//        string s, ret;
//        stringstream ss(sentence);
//        while (ss >> s)
//        {
//            ret += search(s);
//            ret += " ";
//        }
//        ret.pop_back();
//        return ret;
//    }
//};


