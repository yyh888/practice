// 省份数量
//class Solution {
//public:
//    int p[210];
//    int find(int x)
//    {
//        if (p[x] != x) p[x] = find(p[x]);
//        return p[x];
//    }
//
//    int findCircleNum(vector<vector<int>>& isConnected) {
//        int n = isConnected.size();
//        for (int i = 0; i < n; i++)
//        {
//            p[i] = i;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = i + 1; j < n; j++)
//            {
//                if (isConnected[i][j])
//                {
//                    p[find(i)] = find(j);
//                }
//            }
//        }
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (p[i] == i)
//            {
//                res++;
//            }
//        }
//        return res;
//    }
//};


// 等式方程的可满足性
//class Solution {
//public:
//    int p[26];
//
//    int find(int x)
//    {
//        if (p[x] != x) p[x] = p[find(p[x])];
//        return p[x];
//    }
//
//    bool equationsPossible(vector<string>& equations) {
//        int n = equations.size();
//        for (int i = 0; i < n; i++)
//        {
//            p[equations[i][0] - 'a'] = equations[i][0] - 'a';
//            p[equations[i][3] - 'a'] = equations[i][3] - 'a';
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (equations[i][1] == '=')
//            {
//                p[find(equations[i][0] - 'a')] = find(equations[i][3] - 'a');
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (equations[i][1] == '!')
//            {
//                if (find(equations[i][0] - 'a') == find(equations[i][3] - 'a'))
//                {
//                    return false;
//                }
//            }
//        }
//        return true;
//    }
//};

