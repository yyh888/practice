class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> vv;
        for (int i = 0; i < n - 2; i++)
        {
            vector<int> ret;
            for (int j = 0; j < n - 2; j++)
            {
                int Max = grid[i][j];
                for (int x = i; x < i + 3; x++)
                {
                    for (int y = j; y < j + 3; y++)
                    {
                        Max = max(Max, grid[x][y]);
                    }
                }
                ret.push_back(Max);
            }
            vv.push_back(ret);
        }
        return vv;
    }
};