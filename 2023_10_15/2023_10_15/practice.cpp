//class Solution {
//public:
//    int guessNumber(int n) {
//        int l = 0, r = n;
//        while (l < r)
//        {
//            int mid = l + (r - l) / 2;
//            int res = guess(mid);
//            if (res <= 0)
//            {
//                r = mid;
//            }
//            else l = mid + 1;
//        }
//        return l;
//    }
//};


