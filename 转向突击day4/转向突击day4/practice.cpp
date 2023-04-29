// 字符串中的变位词
//class Solution {
//public:
//    bool checkInclusion(string s1, string s2) {
//        vector<int> cnts1(26), cnts2(26);
//        int n = s1.size();
//        int ret = 0;
//        for (int i = 0; i < s1.size(); i++)
//        {
//            cnts1[s1[i] - 'a']++;
//        }
//        for (int l = 0, r = 0; r < s2.size(); r++)
//        {
//            cnts2[s2[r] - 'a']++;
//            ret++;
//            while (ret > n)
//            {
//                cnts2[s2[l++] - 'a']--;
//                ret--;
//            }
//            if (cnts1 == cnts2)
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};

// 字符串中的所有变位词
//class Solution {
//public:
//    vector<int> findAnagrams(string s, string p) {
//        if (s.size() < p.size())
//        {
//            return {};
//        }
//        vector<int> res;
//        vector<int> cs(26), cp(26);
//        int n = p.size();
//        for (int i = 0; i < n; i++)
//        {
//            cs[s[i] - 'a']++;
//            cp[p[i] - 'a']++;
//        }
//        if (cs == cp) {
//            res.push_back(0);
//        }
//        for (int l = 0, r = n; r < s.size(); r++)
//        {
//            cs[s[r] - 'a']++;
//            cs[s[l] - 'a']--;
//            l++;
//            if (cs == cp)
//            {
//                res.push_back(l);
//            }
//        }
//        return res;
//    }
//};


// 不含重复字符的最长子字符串
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        unordered_map<char, int> hash;
//        int n = s.size();
//        int maxLen = 0;
//        for (int l = 0, r = 0; r < n; r++)
//        {
//            hash[s[r]]++;
//            while (hash[s[r]] > 1)
//            {
//                hash[s[l]]--;
//                l++;
//            }
//            maxLen = max(maxLen, r - l + 1);
//        }
//        return maxLen;
//    }
//};