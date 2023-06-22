// 数字转换为十六进制数
//class Solution {
//public:
//    string toHex(int num) {
//        if (num == 0) return "0";
//        string res;
//        long long a = num < 0 ? num + pow(2, 32) : num;
//        while (a)
//        {
//            int tmp = a % 16;
//            if (tmp < 10) res += tmp + '0';
//            else res += (tmp - 10) + 'a';
//            a /= 16;
//        }
//        reverse(res.begin(), res.end());
//        return res;
//    }
//};

// 阶乘后的零
//class Solution {
//public:
//    int trailingZeroes(int n) {
//        return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
//    }
//};

// 最大数
//bool cmp(int i, int j)
//{
//    string s1 = to_string(i);
//    string s2 = to_string(j);
//    return s1 + s2 > s2 + s1;
//}
//
//class Solution {
//public:
//    string largestNumber(vector<int>& nums) {
//        sort(nums.begin(), nums.end(), cmp);
//        string res;
//        int i = 0, n = nums.size();
//        while (i < n - 1 && nums[i] == 0) i++;
//        while (i < n)
//        {
//            res += to_string(nums[i]);
//            i++;
//        }
//        return res;
//    }
//};