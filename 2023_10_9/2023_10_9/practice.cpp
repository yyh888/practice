//class Solution {
//public:
//    int splitNum(int num) {
//        string ret = to_string(num);
//        sort(ret.begin(), ret.end());
//        int num1 = 0, num2 = 0;
//        for (int i = 0; i < ret.size(); i++)
//        {
//            if (i % 2 == 0)
//            {
//                num1 = num1 * 10 + ret[i] - '0';
//            }
//            else
//            {
//                num2 = num2 * 10 + ret[i] - '0';
//            }
//        }
//        return num1 + num2;
//    }
//};