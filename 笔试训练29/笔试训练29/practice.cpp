// ���������е���С������ɺ�
//class Solution {
//public:
//    /**
//     *	���������е���С������ɺ�
//     *	���룺��������arr
//     *	���أ����������е���С������ɺ�
//     */
//    int getFirstUnFormedNum(vector<int> arr, int len) {
//        int Min = arr[0], Max = arr[0];
//        for (int i = 1; i < arr.size(); i++)
//        {
//            Max += arr[i];
//            if (Min > arr[i])
//            {
//                Min = arr[i];
//            }
//        }
//        vector<int> dp(Max + 1, 0);
//        for (int i = 0; i < len; i++)
//        {
//            for (int j = Max; j >= arr[i]; j--)
//            {
//                if (dp[j - arr[i]] + arr[i] > dp[j])
//                {
//                    dp[j] = dp[j - arr[i]] + arr[i];
//                }
//            }
//        }
//        for (int i = Min; i <= Max; i++)
//        {
//            if (dp[i] != i)
//            {
//                return i;
//            }
//        }
//        return Max + 1;
//    }
//};

// ��Ӳ��
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    while (cin >> n)
//    {
//        if (n == 0)
//        {
//            break;
//        }
//        int cnt = 0;
//        while (n > 1)
//        {
//            cnt++;
//            n = (n / 3) + (n % 3 != 0);
//        }
//        cout << cnt << endl;
//    }
//}