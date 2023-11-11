class Solution {
public:
    vector<vector<string>> vv;
    vector<string> v;
    bool row[10], col[10], dg[20], udg[20];

    void dfs(int n, int x, int y, int u)
    {
        if (y == n)
        {
            y = 0;
            x++;
        }
        if (x == n)
        {
            if (u == n)
                vv.push_back(v);
            return;
        }
        // ²»·Å
        dfs(n, x, y + 1, u);
        // ·Å
        if (!row[x] && !col[y] && !dg[n + y - x] && !udg[x + y])
        {
            v[x][y] = 'Q';
            row[x] = col[y] = dg[n + y - x] = udg[x + y] = true;
            dfs(n, x, y + 1, u + 1);
            v[x][y] = '.';
            row[x] = col[y] = dg[n + y - x] = udg[x + y] = false;
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        v.resize(n);
        for (int i = 0; i < n; i++)
        {
            v[i].resize(n, '.');
        }
        dfs(n, 0, 0, 0);
        return vv;
    }
};