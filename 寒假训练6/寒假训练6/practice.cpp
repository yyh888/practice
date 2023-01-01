#include <iostream>
using namespace std;

//int main() {
//    int n;
//    cin >> n;
//    int count = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        int j = i;
//        if (j % 7 == 0)
//        {
//            count++;
//            continue;
//        }
//        while (j)
//        {
//            if (j / 10 == 7 || j % 10 == 7)
//            {
//                ++count;
//                break;
//            }
//            j /= 10;
//        }
//    }
//    cout << count;
//    return 0;
//}
// 64 Î»Êä³öÇëÓÃ printf("%lld")




class Solution {
public:
    int multiply(int A, int B) {
        int a = A, b = B;
        if (A < B)
        {
            while ((A--) != 1)
                B += b;
        }
        else
        {
            while ((B--) != 1)
                A += a;
        }
        if (!A) return B;
        return A;
    }
};