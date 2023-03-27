// 圆圈中最后剩下的数字
//class Solution {
//public:
//    int lastRemaining(int n, int m) {
//        vector<pair<int, bool>> v;
//        for (int i = 0; i < n; i++)
//        {
//            v.push_back(make_pair(i, true));
//        }
//        int cnt = n;
//        int idx = -1;
//        while (cnt != 1)
//        {
//            int tt = m;
//            while (tt--)
//            {
//                idx++;
//                if (idx == n)
//                {
//                    idx = 0;
//                }
//                while (v[idx].second == false)
//                {
//                    idx++;
//                    if (idx == n)
//                    {
//                        idx = 0;
//                    }
//                }
//            }
//            v[idx].second = false;
//            cnt--;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (v[i].second)
//            {
//                return v[i].first;
//            }
//        }
//        return -1;
//    }
//};


// 求1+2+…+n

//class Solution {
//public:
//    int dfs(int n)
//    {
//        n && (n += dfs(n - 1));
//        return n;
//    }
//    int sumNums(int n) {
//        return dfs(n);
//    }
//};