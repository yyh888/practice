// 岛屿的最大面积
//class Solution {
//public:
//    int res = 0;
//    int n, m;
//
//    int dfs(vector<vector<int>>& grid, int i, int j)
//    {
//        grid[i][j] = 0;
//        int ans = 1;
//        int dx[] = { 0, -1, 0, 1 };
//        int dy[] = { -1, 0, 1, 0 };
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 1)
//            {
//                ans += dfs(grid, x, y);
//            }
//        }
//        return ans;
//    }
//
//
//    int maxAreaOfIsland(vector<vector<int>>& grid) {
//        n = grid.size(), m = grid[0].size();
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (grid[i][j] == 1)
//                {
//                    int tmp = dfs(grid, i, j);
//                    res = max(res, tmp);
//                }
//            }
//        }
//        return res;
//    }
//};


// 二分图
//class Solution {
//public:
//    enum Color
//    {
//        UNCOLOR,
//        RED,
//        GREEN,
//    };
//
//    bool flag;
//
//    vector<int> color;
//
//    void dfs(int i, int c, vector<vector<int>>& g)
//    {
//        color[i] = c;
//        int uc = (c == RED ? GREEN : RED);
//        for (auto& e : g[i])
//        {
//            if (color[e] == UNCOLOR)
//            {
//                dfs(e, uc, g);
//            }
//            else if (color[e] != uc)
//            {
//                flag = false;
//                return;
//            }
//        }
//    }
//
//    bool isBipartite(vector<vector<int>>& graph) {
//        int n = graph.size();
//        color.resize(n, UNCOLOR);
//        flag = true;
//        for (int i = 0; i < n && flag; i++)
//        {
//            if (color[i] == UNCOLOR)
//                dfs(i, RED, graph);
//        }
//        return flag;
//    }
//};


// 矩阵中的距离
//class Solution {
//public:
//    typedef pair<int, int> PII;
//    static constexpr int dx[] = { 0, -1, 0, 1 };
//    static constexpr int dy[] = { -1, 0, 1, 0 };
//
//    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//        int n = mat.size(), m = mat[0].size();
//        vector<vector<int>> dist(n, vector<int>(m));
//        vector<vector<bool>> flag(n, vector<bool>(m, false));
//        queue<PII> qq;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (mat[i][j] == 0)
//                {
//                    qq.push({ i, j });
//                    flag[i][j] = true;
//                }
//            }
//        }
//        while (qq.size())
//        {
//            auto [i, j] = qq.front();
//            qq.pop();
//            for (int k = 0; k < 4; k++)
//            {
//                int x = i + dx[k], y = j + dy[k];
//                if (x >= 0 && x < n && y >= 0 && y < m && !flag[x][y])
//                {
//                    qq.push({ x, y });
//                    flag[x][y] = true;
//                    dist[x][y] = dist[i][j] + 1;
//                }
//            }
//        }
//        return dist;
//    }
//};