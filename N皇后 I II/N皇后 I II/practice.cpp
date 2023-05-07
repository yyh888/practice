// N 皇后 I
//class Solution {
//public:
//    vector<vector<string>> vv;
//    vector<string> v;
//    bool col[10], dg[20], udg[20];
//
//    void dfs(int n, int u)
//    {
//        if (u == n)
//        {
//            vv.push_back(v);
//            return;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (!col[i] && !dg[n + u - i] && !udg[u + i])
//            {
//                v[u][i] = 'Q';
//                col[i] = dg[n + u - i] = udg[u + i] = true;
//                dfs(n, u + 1);
//                v[u][i] = '.';
//                col[i] = dg[n + u - i] = udg[u + i] = false;
//            }
//        }
//    }
//
//    vector<vector<string>> solveNQueens(int n) {
//        v.resize(n);
//        for (int i = 0; i < n; i++)
//        {
//            v[i].resize(n, '.');
//        }
//        dfs(n, 0);
//        return vv;
//    }
//};

//class Solution {
//public:
//    vector<vector<string>> vv;
//    vector<string> v;
//    bool row[10], col[10], dg[20], udg[20];
//
//    void dfs(int n, int x, int y, int u)
//    {
//        if (y == n)
//        {
//            y = 0;
//            x++;
//        }
//        if (x == n)
//        {
//            if (u == n)
//                vv.push_back(v);
//            return;
//        }
//        // 不放
//        dfs(n, x, y + 1, u);
//        // 放
//        if (!row[x] && !col[y] && !dg[n + y - x] && !udg[x + y])
//        {
//            v[x][y] = 'Q';
//            row[x] = col[y] = dg[n + y - x] = udg[x + y] = true;
//            dfs(n, x, y + 1, u + 1);
//            v[x][y] = '.';
//            row[x] = col[y] = dg[n + y - x] = udg[x + y] = false;
//        }
//    }
//
//    vector<vector<string>> solveNQueens(int n) {
//        v.resize(n);
//        for (int i = 0; i < n; i++)
//        {
//            v[i].resize(n, '.');
//        }
//        dfs(n, 0, 0, 0);
//        return vv;
//    }
//};

// N皇后 II
//class Solution {
//public:
//    vector<string> v;
//    bool col[10], dg[20], udg[20];
//    int size;
//
//    void dfs(int n, int u)
//    {
//        if (u == n)
//        {
//            size++;
//            return;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (!col[i] && !dg[n + u - i] && !udg[u + i])
//            {
//                v[u][i] = 'Q';
//                col[i] = dg[n + u - i] = udg[u + i] = true;
//                dfs(n, u + 1);
//                v[u][i] = '.';
//                col[i] = dg[n + u - i] = udg[u + i] = false;
//            }
//        }
//    }
//
//    int totalNQueens(int n) {
//        v.resize(n);
//        size = 0;
//        for (int i = 0; i < n; i++)
//        {
//            v[i].resize(n, '.');
//        }
//        dfs(n, 0);
//        return size;
//    }
//};