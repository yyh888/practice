class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = -1, min = 1e4;
        int n = points.size();
        for (int i = 0; i < n; i++)
        {
            if (points[i][0] == x || points[i][1] == y)
            {
                int ret = abs(points[i][0] - x) + abs(points[i][1] - y);
                if (ret < min)
                {
                    ans = i;
                    min = ret;
                }
            }
        }
        return ans;
    }
};