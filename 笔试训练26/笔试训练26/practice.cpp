// 跳台阶拓展问题
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param number int整型
//     * @return int整型
//     */
//    int jumpFloorII(int number) {
//        vector<int> v(20, 1);
//        v[1] = 1;
//        for (int i = 2; i <= number; i++)
//        {
//            for (int j = 1; j < i; j++)
//            {
//                v[i] += v[j];
//            }
//        }
//        return v[number];
//    }
//};


// 快到碗里来
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string n, r;
//    while (cin >> n >> r)
//    {
//        string sum;
//        // 计算周长
//        int add = 0;
//        for (int i = r.size() - 1; i >= 0; i--)
//        {
//            int ret = 6.28 * (r[i] - '0') + add;
//            add = ret / 10;
//            ret %= 10;
//            sum += (ret + '0');
//        }
//        if (add)
//        {
//            sum += (add + '0');
//        }
//        if (sum.size() > n.size())
//        {
//            cout << "Yes" << endl;
//        }
//        else if (sum.size() < n.size())
//        {
//            cout << "No" << endl;
//        }
//        else
//        {
//            int i = sum.size() - 1;
//            int j = 0;
//            while (i >= 0)
//            {
//                if (n[j] > sum[i])
//                {
//                    cout << "No" << endl;
//                    break;
//                }
//                i--, j++;
//            }
//            if (i < 0)
//            {
//                cout << "Yes" << endl;
//            }
//        }
//    }
//    return 0;
//}
