// 含有所有字符的最短字符串
//class Solution {
//public:
//    bool check(unordered_map<char, int>& h1, unordered_map<char, int>& h2)
//    {
//        for (auto& e : h2)
//        {
//            if (e.second > h1[e.first])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//
//    string minWindow(string s, string t) {
//        int n = s.size(), m = t.size();
//        if (m > n) return {};
//        unordered_map<char, int> hashs, hasht;
//        for (int i = 0; i < m; i++)
//        {
//            hasht[t[i]]++;
//        }
//        int start = -1, len = n + 1;
//        for (int l = 0, r = 0; r < n; r++)
//        {
//            if (hasht.find(s[r]) != hasht.end())
//            {
//                hashs[s[r]]++;
//            }
//            while (check(hashs, hasht) && l <= r)
//            {
//                if (r - l + 1 < len)
//                {
//                    len = r - l + 1;
//                    start = l;
//                }
//                if (hashs.find(s[l]) != hashs.end())
//                {
//                    hashs[s[l]]--;
//                }
//                l++;
//            }
//        }
//        if (start == -1)
//        {
//            return {};
//        }
//        return s.substr(start, len);
//    }
//};


// 有效的回文
//class Solution {
//public:
//    bool isPalindrome(string s) {
//        int n = s.size();
//        string res;
//        for (int i = 0; i < n; i++)
//        {
//            if (s[i] >= 'a' && s[i] <= 'z')
//            {
//                res += s[i];
//            }
//            if (s[i] >= 'A' && s[i] <= 'Z')
//            {
//                res += s[i] + 'a' - 'A';
//            }
//            if (s[i] >= '0' && s[i] <= '9')
//            {
//                res += s[i];
//            }
//        }
//        int l = 0, r = res.size() - 1;
//        while (l < r)
//        {
//            if (res[l++] != res[r--])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//};


// 最多删除一个字符得到回文
//class Solution {
//public:
//    bool check(const string& s, int l, int r)
//    {
//        while (l < r)
//        {
//            if (s[l++] != s[r--])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//
//    bool validPalindrome(string s) {
//        int n = s.size();
//        int l = 0, r = n - 1;
//        while (l < r)
//        {
//            if (s[l] == s[r])
//            {
//                l++;
//                r--;
//            }
//            else
//            {
//                return check(s, l + 1, r) || check(s, l, r - 1);
//            }
//        }
//        return true;
//    }
//};