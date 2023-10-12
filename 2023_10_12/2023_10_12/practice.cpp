//class Solution {
//public:
//    long long Num(string s)
//    {
//        int n = s.size();
//        long long ret = 0;
//        for (int i = 0; i < n; i++)
//        {
//            ret = ret * 10 + s[i] - '0';
//        }
//        return ret;
//    }
//
//    long long findTheArrayConcVal(vector<int>& nums) {
//        long long res = 0;
//        int n = nums.size();
//        int i = 0, j = n - 1;
//        while (i < j)
//        {
//            string ret = to_string(nums[i]) + to_string(nums[j]);
//            res += Num(ret);
//            i++;
//            j--;
//        }
//        if (i == j)
//        {
//            res += Num(to_string(nums[i]));
//        }
//        return res;
//    }
//};


