// ֱ�������ĵ���
//class Solution {
//public:
//    int maxPoints(vector<vector<int>>& points) {
//        int n = points.size();
//        int ans = 1;
//        for (int i = 0; i < n; i++)
//        {
//            vector<int> x = points[i];
//            for (int j = i + 1; j < n; j++)
//            {
//                vector<int> y = points[j];
//                int cnt = 2;
//                for (int k = j + 1; k < n; k++)
//                {
//                    vector<int> z = points[k];
//                    int s1 = (y[1] - x[1]) * (z[0] - y[0]);
//                    int s2 = (y[0] - x[0]) * (z[1] - y[1]);
//                    if (s1 == s2)
//                    {
//                        cnt++;
//                    }
//                }
//                ans = max(ans, cnt);
//            }
//        }
//        return ans;
//    }
//};


// Ѱ�ҷ�ֵ
//class Solution {
//public:
//    int findPeakElement(vector<int>& nums) {
//        int n = nums.size();
//        int l = 0, r = n - 1;
//        while (l < r)
//        {
//            int mid = l + (r - l) / 2;
//            if (nums[mid] > nums[mid + 1])
//            {
//                r = mid;
//            }
//            else
//            {
//                l = mid + 1;
//            }
//        }
//        return l;
//    }
//};


// ������С��
//class Solution {
//public:
//    string fractionToDecimal(int numerator, int denominator) {
//        long long a = numerator, b = denominator;
//        if (a % b == 0) return to_string(a / b);
//        // ��������
//        string res;
//        if (a * b < 0) res += '-';
//        a = abs(a), b = abs(b);
//        res += to_string(a / b) + '.';
//        a %= b;
//        // С������ 
//        unordered_map<int, int> hash;
//        int len = res.size();
//        while (a && hash.count(a) == 0)
//        {
//            hash[a] = len++;
//            a *= 10;
//            res += to_string(a / b);
//            a %= b;
//        }
//        if (a)
//        {
//            int pos = hash[a];
//            res = res.substr(0, pos) + '(' + res.substr(pos) + ')';
//        }
//        return res;
//    }
//};