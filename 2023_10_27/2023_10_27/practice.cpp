class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        const int N = 1e9 + 7;
        int n = horizontalCuts.size(), m = verticalCuts.size();
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int Maxr = max(horizontalCuts[0], h - horizontalCuts[n - 1]);
        int Maxc = max(verticalCuts[0], w - verticalCuts[m - 1]);
        for (int i = 1; i < n; i++)
        {
            Maxr = max(Maxr, horizontalCuts[i] - horizontalCuts[i - 1]);
        }
        for (int i = 1; i < m; i++)
        {
            Maxc = max(Maxc, verticalCuts[i] - verticalCuts[i - 1]);
        }
        return 1L * Maxc * Maxr % N;
    }
};