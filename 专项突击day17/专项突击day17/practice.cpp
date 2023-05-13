// ÉñÆæµÄ×Öµä
//int son[1000010][26], idx;
//int cnt[1000010];
//
//
//class MagicDictionary {
//public:
//    /** Initialize your data structure here. */
//    MagicDictionary() {
//        memset(son, 0, sizeof son);
//        memset(cnt, 0, sizeof cnt);
//        idx = 0;
//    }
//
//    void insert(const string& s)
//    {
//        int p = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            int u = s[i] - 'a';
//            if (!son[p][u])
//            {
//                son[p][u] = ++idx;
//            }
//            p = son[p][u];
//        }
//        cnt[p]++;
//    }
//
//    void buildDict(vector<string> dictionary) {
//        for (auto& e : dictionary)
//        {
//            insert(e);
//        }
//    }
//
//    bool search(string searchWord) {
//        return dfs(searchWord, 0, 0, 1);
//    }
//
//    bool dfs(const string& s, int i, int p, int lim)
//    {
//        if (lim < 0) return false;
//        if (i == s.size()) return cnt[p] && !lim;
//        int u = s[i] - 'a';
//        for (int t = 0; t < 26; t++)
//        {
//            if (son[p][t] == 0) continue;
//            if (dfs(s, i + 1, son[p][t], u == t ? lim : lim - 1))
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};

// ×î¶ÌµÄµ¥´Ê±àÂë
// class Solution {
//public:
//    int minimumLengthEncoding(vector<string>& words) {
//        unordered_set<string> st(words.begin(), words.end());
//        for (auto& str : words)
//        {
//            for (int len = 1; len < str.size(); len++)
//            {
//                st.erase(str.substr(len));
//            }
//        }
//        int len = 0;
//        for (auto& e : st)
//        {
//            len += e.size() + 1;
//        }
//        return len;
//    }
//};


// ¼üÖµÓ³Éä
//class MapSum {
//public:
//    int son[10010][26], idx;
//    int cnt[10010];
//    map<string, int> mp;
//    MapSum() {
//        memset(son, 0, sizeof son);
//        memset(cnt, 0, sizeof cnt);
//        idx = 0;
//    }
//
//    void insert(string key, int val) {
//        int _val = val;
//        if (mp.count(key)) val -= mp[key];
//        mp[key] = _val;
//        int p = 0;
//        for (int i = 0; i < key.size(); i++)
//        {
//            int u = key[i] - 'a';
//            if (!son[p][u])
//            {
//                son[p][u] = ++idx;
//            }
//            p = son[p][u];
//            cnt[p] += val;
//        }
//    }
//
//    int sum(string prefix) {
//        int p = 0;
//        for (int i = 0; i < prefix.size(); i++)
//        {
//            int u = prefix[i] - 'a';
//            if (!son[p][u]) return 0;
//            p = son[p][u];
//        }
//        return cnt[p];
//    }
//};


