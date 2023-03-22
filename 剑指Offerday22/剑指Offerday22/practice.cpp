// 和为s的连续正数序列
//class Solution {
//public:
//    vector<vector<int>> findContinuousSequence(int target) {
//        vector<vector<int>> vv;
//        for (int i = 1; i < target; i++)
//        {
//            int sum = 0;
//            vector<int> v;
//            for (int j = i; j < target; j++)
//            {
//                sum += j;
//                v.push_back(j);
//                if (sum >= target)
//                {
//                    break;
//                }
//            }
//            if (sum == target)
//            {
//                vv.push_back(v);
//            }
//            else v.clear();
//        }
//        return vv;
//    }
//};


//class Solution {
//public:
//    vector<vector<int>> findContinuousSequence(int target) {
//        vector<vector<int>> vv;
//        int l = 1, r = 1;
//        int sum = 0;
//        while (l <= target / 2)
//        {
//            if (sum < target)
//            {
//                sum += r;
//                r++;
//            }
//            else if (sum > target)
//            {
//                sum -= l;
//                l++;
//            }
//            else
//            {
//                vector<int> v;
//                for (int i = l; i < r; i++)
//                {
//                    v.push_back(i);
//                }
//                vv.push_back(v);
//                sum -= l;
//                l++;
//            }
//        }
//        return vv;
//    }
//};


// 翻转单词顺序
//class Solution {
//public:
//    string reverseWords(string s) {
//        while (s.size() > 0 && s[s.size() - 1] == ' ')
//        {
//            s.pop_back();
//        }
//        vector<string> v;
//        int start = 0, end = 0;
//        while (end < s.size())
//        {
//            // 找start位置
//            while (s[start] == ' ')
//            {
//                start++;
//            }
//            end = start + 1;
//            while (end < s.size() && s[end] != ' ')
//            {
//                end++;
//            }
//            cout << start << " " << end << endl;
//            string ret = s.substr(start, end - start);
//            v.push_back(ret);
//            start = end;
//        }
//        string ans;
//        for (int i = v.size() - 1; i >= 0; i--)
//        {
//            ans += v[i];
//            if (i > 0) ans += " ";
//        }
//        return ans;
//    }
//};


//class Solution {
//public:
//    string reverseWords(string s) {
//        // 去除首尾空格
//        while (s.size() > 0 && s[0] == ' ')
//        {
//            s.erase(s.begin());
//        }
//        while (s.size() > 0 && s[s.size() - 1] == ' ')
//        {
//            s.pop_back();
//        }
//        int l = s.size() - 1, r = l;
//        string ans;
//        while (l >= 0)
//        {
//            while (l >= 0 && s[l] != ' ')
//            {
//                l--;
//            }
//            ans += s.substr(l + 1, r - l);
//            ans += " ";
//            // 跳过空格
//            while (l >= 0 && s[l] == ' ')
//            {
//                l--;
//            }
//            r = l;
//        }
//        ans.pop_back();
//        return ans;
//    }
//};

// 左旋转字符串
//class Solution {
//public:
//    string reverseLeftWords(string s, int n) {
//        string ret = s.substr(0, n);
//        while (n--)
//        {
//            s.erase(s.begin());
//        }
//        s += ret;
//        return s;
//    }
//};


//class Solution {
//public:
//    void myreverse(string& s, int start, int end)
//    {
//        while (start < end)
//        {
//            swap(s[start], s[end]);
//            ++start;
//            --end;
//        }
//    }
//
//    string reverseLeftWords(string s, int n) {
//        myreverse(s, 0, n - 1);
//        myreverse(s, n, s.size() - 1);
//        myreverse(s, 0, s.size() - 1);
//        return s;
//    }
//};