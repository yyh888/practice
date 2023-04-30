// 保龄球游戏的获胜者
//class Solution {
//public:
//    int isWinner(vector<int>& player1, vector<int>& player2) {
//        int sum1 = 0, sum2 = 0;
//        int n = player1.size();
//        for (int i = 0; i < n; i++)
//        {
//            if ((i == 1 && player1[0] == 10) || (i > 1 && (player1[i - 2] == 10 || player1[i - 1] == 10)))
//            {
//                sum1 += 2 * player1[i];
//            }
//            else
//            {
//                sum1 += player1[i];
//            }
//            if ((i == 1 && player2[0] == 10) || (i > 1 && (player2[i - 2] == 10 || player2[i - 1] == 10)))
//            {
//                sum2 += 2 * player2[i];
//            }
//            else
//            {
//                sum2 += player2[i];
//            }
//        }
//        if (sum1 > sum2) return 1;
//        else if (sum1 < sum2) return 2;
//        else return 0;
//    }
//};


// 找出叠涂元素
//class Solution {
//public:
//    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
//        int n = mat.size();
//        int m = mat[0].size();
//        vector<int> row(n), col(m);
//        unordered_map<int, pair<int, int>> hash;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                hash[mat[i][j]] = { i, j };
//            }
//        }
//        int idx = 0;
//        for (; idx < arr.size(); idx++)
//        {
//            auto e = hash[arr[idx]];
//            row[e.first]++;
//            col[e.second]++;
//            if (row[e.first] == m || col[e.second] == n)
//            {
//                return idx;
//            }
//        }
//        return idx;
//    }
//};


// 前往目标的最小代价
//class Solution {
//public:
//    int sumMin;
//    int n;
//    int stx, sty;
//    int edx, edy;
//    void dfs(vector<vector<int>>& roads, int x, int y, int ret, int i)
//    {
//        sumMin = min(sumMin, abs(edx - x) + abs(edy - y) + ret);
//        for (int idx = i; idx < n; idx++)
//        {
//            dfs(roads, x, y, ret, i + 1);
//
//            int tmp = ret;
//            int x1 = roads[idx][0], y1 = roads[idx][1], x2 = roads[idx][2], y2 = roads[idx][3];
//            ret += (abs(x1 - x) + abs(y1 - y));
//            ret += min(roads[idx][4], (abs(x1 - x2) + abs(y1 - y2)));
//            dfs(roads, x2, y2, ret, i + 1);
//            ret = tmp;
//            ret += (abs(x2 - x), +abs(y2 - y));
//            ret += min(roads[idx][4], abs(x1 - x2) + abs(y1 - y2));
//            dfs(roads, x1, y1, ret, i + 1);
//            ret = tmp;
//        }
//    }
//    int minimumCost(vector<int>& start, vector<int>& target, vector<vector<int>>& specialRoads) {
//        // 直接过去
//        stx = start[0], sty = start[1], edx = target[0], edy = target[1];
//        sumMin = abs(stx - edx) + abs(sty - edy);
//        n = specialRoads.size();
//        dfs(specialRoads, stx, sty, 0, 0);
//        return sumMin;
//    }
//};