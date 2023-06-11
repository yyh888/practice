// 整数反转
//class Solution {
//public:
//    int reverse(int x) {
//        int flag = 1;
//        if (x < 0) flag = -1;
//        string s = to_string(abs(x));
//        while (s.size() > 1 && s.back() == '0') s.pop_back();
//        ::reverse(s.begin(), s.end());
//        string ret = to_string(INT_MAX);
//        if (s.size() > ret.size() || ret.size() == s.size() && s > ret) return 0;
//        return stoi(s) * flag;
//    }
//};


// 字符串转换整数(atoi)
//class Solution {
//public:
//    int myAtoi(string s) {
//        int n = s.size();
//        int flag = -2;
//        bool begin = false;
//        long long res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if ((s[i] < '0' || s[i] > '9') && begin) break;
//            if (s[i] == ' ') continue;
//            else if (s[i] == '-' || s[i] == '+')
//            {
//                begin = true;
//                if (flag == -2) flag = (s[i] == '-') ? -1 : 1;
//                else return 0;
//            }
//            else if ((s[i] >= '0' && s[i] <= '9'))
//            {
//                res = res * 10 + s[i] - '0';
//                begin = true;
//            }
//            else break;
//            if (res > INT_MAX)
//            {
//                res = INT_MAX;
//                if (flag == -1) res += 1;
//            }
//        }
//        if (flag == -2) flag = 1;
//        return res * flag;
//    }
//};


// 最接近的三数之和
//class Solution {
//public:
//    int threeSumClosest(vector<int>& nums, int target) {
//        int n = nums.size();
//        sort(nums.begin(), nums.end());
//        int res = nums[0] + nums[1] + nums[2];
//        for (int i = 0; i < n - 2; i++)
//        {
//            int l = i + 1, r = n - 1;
//            while (l < r)
//            {
//                int val = nums[i] + nums[l] + nums[r];
//                if (abs(target - res) > abs(val - target))
//                {
//                    res = val;
//                }
//                if (target == val) return target;
//                else if (target < val) r--;
//                else l++;
//            }
//        }
//        return res;
//    }
//};