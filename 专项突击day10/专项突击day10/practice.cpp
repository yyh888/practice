// Õ‚–«”Ô—‘ «∑Ò≈≈–Ú
//class Solution {
//public:
//    bool isAlienSorted(vector<string>& words, string order) {
//        unordered_map<char, int> hash;
//        for (int i = 0; i < order.size(); i++)
//        {
//            hash[order[i]] = i;
//        }
//        for (int i = 1; i < words.size(); i++)
//        {
//            bool flag = false;
//            for (int j = 0; j < words[i - 1].size() && j < words[i].size(); j++)
//            {
//                int pre = hash[words[i - 1][j]];
//                int cur = hash[words[i][j]];
//                if (pre > cur)
//                {
//                    return false;
//                }
//                else if (pre < cur)
//                {
//                    flag = true;
//                    break;
//                }
//            }
//            if (!flag)
//            {
//                if (words[i - 1].size() > words[i].size())
//                {
//                    return false;
//                }
//            }
//        }
//        return true;
//    }
//};


// ◊Ó–° ±º‰≤Ó
//class Solution {
//public:
//    int GetTime(const string& s)
//    {
//        return ((s[0] - '0') * 10 + (s[1] - '0')) * 60 + ((s[3] - '0') * 10 + (s[4] - '0'));
//    }
//
//    int findMinDifference(vector<string>& timePoints) {
//        sort(timePoints.begin(), timePoints.end());
//        int Min = INT_MAX;
//        for (int i = 1; i < timePoints.size(); i++)
//        {
//            Min = min(Min, GetTime(timePoints[i]) - GetTime(timePoints[i - 1]));
//        }
//        Min = min(Min, GetTime(timePoints[0]) + 1440 - GetTime(timePoints[timePoints.size() - 1]));
//        return Min;
//    }
//};

// ƒÊ≤®¿º
//class Solution {
//public:
//    int evalRPN(vector<string>& tokens) {
//        stack<int> st;
//        unordered_map<string, function<int(int, int)>> hash{
//            {"+", [](int x, int y) {return x + y; }},
//            {"-", [](int x, int y) {return x - y; }},
//            {"*", [](int x, int y) {return x * y; }},
//            {"/", [](int x, int y) {return x / y; }},
//        };
//        for (int i = 0; i < tokens.size(); i++)
//        {
//            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
//            {
//                int right = st.top();
//                st.pop();
//                int left = st.top();
//                st.pop();
//                int res = hash[tokens[i]](left, right);
//                st.push(res);
//            }
//            else
//            {
//                st.push(stoi(tokens[i]));
//            }
//        }
//        return st.top();
//    }
//};


// –°–––«≈ˆ◊≤
//class Solution {
//public:
//    vector<int> asteroidCollision(vector<int>& asteroids) {
//        vector<int> res;
//        for (auto& aster : asteroids)
//        {
//            bool alieve = true;
//            while (alieve && aster < 0 && res.size() && res.back() > 0)
//            {
//                if (res.back() + aster > 0)
//                {
//                    alieve = false;
//                }
//                else if (res.back() + aster == 0)
//                {
//                    res.pop_back();
//                    alieve = false;
//                }
//                else
//                {
//                    res.pop_back();
//                }
//            }
//            if (alieve)
//            {
//                res.push_back(aster);
//            }
//        }
//        return res;
//    }
//};