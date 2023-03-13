// µ∫”Ï ˝¡ø
//class Solution {
//public:
//    void dfs(vector<vector<char>>& vv, int i, int j)
//    {
//        if (i < 0 || i >= vv.size() || j < 0 || j >= vv[0].size() || vv[i][j] == '0')
//        {
//            return;
//        }
//        vv[i][j] = '0';
//        int dx[] = { 0, -1, 0, 1 };
//        int dy[] = { -1, 0, 1, 0 };
//        for (int k = 0; k < 4; k++)
//        {
//            dfs(vv, i + dx[k], j + dy[k]);
//        }
//    }
//
//    int numIslands(vector<vector<char>>& grid) {
//        int count = 0;
//        for (int i = 0; i < grid.size(); i++)
//        {
//            for (int j = 0; j < grid[0].size(); j++)
//            {
//                if (grid[i][j] == '1')
//                {
//                    dfs(grid, i, j);
//                    count++;
//                }
//            }
//        }
//        return count;
//    }
//};


//class Solution {
//public:
//    int numIslands(vector<vector<char>>& grid) {
//        int count = 0;
//        for (int i = 0; i < grid.size(); i++)
//        {
//            for (int j = 0; j < grid[0].size(); j++)
//            {
//                if (grid[i][j] == '1')
//                {
//                    bfs(grid, i, j);
//                    count++;
//                }
//            }
//        }
//        return count;
//    }
//
//    void bfs(vector<vector<char>>& grid, int i, int j)
//    {
//        queue<pair<int, int>> q;
//        q.push(make_pair(i, j));
//        while (!q.empty())
//        {
//            pair<int, int> ret = q.front();
//            q.pop();
//            int x = ret.first;
//            int y = ret.second;
//            if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == '0')
//            {
//                continue;
//            }
//            grid[x][y] = '0';
//            int dx[] = { 0, -1, 0, 1 };
//            int dy[] = { -1, 0, 1, 0 };
//            for (int i = 0; i < 4; i++)
//            {
//                q.push(make_pair(x + dx[i], y + dy[i]));
//            }
//        }
//    }
//};