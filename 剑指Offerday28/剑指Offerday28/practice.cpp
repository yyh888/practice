// 圆圈中最后剩下的数字

//class Solution {
//public:
//    int lastRemaining(int n, int m) {
//        int ans = 0;
//        for (int i = 2; i <= n; i++)
//        {
//            ans = (ans + m) % i;
//        }
//        return ans;
//    }
//};

// 不用加减乘除做加法
//class Solution {
//public:
//    int add(int a, int b) {
//        while (b)
//        {
//            int c = (unsigned int)(a & b) << 1;// 进位
//            a = a ^ b;
//            b = c;
//        }
//        return a;
//    }
//};

// 构建乘积数组
//class Solution {
//public:
//    vector<int> constructArr(vector<int>& a) {
//        vector<int> res(a.size(), 1);
//        if (a.empty())
//        {
//            return res;
//        }
//        for (int i = 0; i < a.size() - 1; i++)
//        {
//            res[i + 1] = res[i] * a[i];
//        }
//        int sum = 1;
//        for (int i = a.size() - 2; i >= 0; i--)
//        {
//            sum *= a[i + 1];
//            res[i] *= sum;
//        }
//        return res;
//    }
//};