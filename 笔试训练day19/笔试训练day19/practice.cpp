// ��ˮƿ
//#include <iostream>
//
//using namespace std;
//typedef long long LL;
//
//int main()
//{
//    int n;
//    while (cin >> n)
//    {
//        if (n == 0) break;
//        LL sum = n / 3;// �ܺȵ�
//        LL empty = n - sum * 2;// ��
//        LL ret = sum;// ���κȵ�
//        int b = 0;// ��
//        while (empty >= 2)
//        {
//            ret = empty / 3;
//            empty = empty - ret * 2;
//            sum += ret;
//            if (empty == 2)
//            {
//                b += 1;
//                empty += 1;
//            }
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}