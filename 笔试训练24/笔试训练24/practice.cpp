// ƒÍ÷’Ω±
//class Bonus {
//public:
//    int getMost(vector<vector<int> > board) {
//        for (int i = 1; i < 6; i++)
//        {
//            board[0][i] += board[0][i - 1];
//        }
//        for (int i = 1; i < 6; i++)
//        {
//            board[i][0] += board[i - 1][0];
//        }
//        for (int i = 1; i < 6; i++)
//        {
//            for (int j = 1; j < 6; j++)
//            {
//                board[i][j] += max(board[i][j - 1], board[i - 1][j]);
//            }
//        }
//        return board[5][5];
//    }
//};


// √‘π¨Œ Ã‚
//#include <iostream>
//#include <vector>
//#include <utility>
//using namespace std;
//
//int n, m;
//
//vector<pair<int, int>> res;
//
//void dfs(vector<vector<int>>& vv, vector<pair<int, int>>& v, int i, int j)
//{
//    if (i < 0 || i >= n || j < 0 || j >= m || vv[i][j] == 1)
//    {
//        return;
//    }
//    int dx[] = { 0, -1, 0, 1 };
//    int dy[] = { -1, 0, 1, 0 };
//    v.push_back(make_pair(i, j));
//    vv[i][j] = 1;
//    if (i == n - 1 && j == m - 1)
//    {
//        res = v;
//        return;
//    }
//    for (int k = 0; k < 4; k++)
//    {
//        int x = i + dx[k], y = j + dy[k];
//        if (x >= 0 && x < n && y >= 0 && y < m && vv[x][y] == 0)
//        {
//            dfs(vv, v, x, y);
//            vv[i][j] = 0;
//        }
//    }
//    vv[i][j] = 0;
//    v.pop_back();
//}
//
//int main()
//{
//    cin >> n >> m;
//    vector<vector<int>> vv(n, vector<int>(m));
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> vv[i][j];
//        }
//    }
//    vector<pair<int, int>> v;
//    dfs(vv, v, 0, 0);
//    for (int i = 0; i < res.size(); i++)
//    {
//        printf("(%d,%d)\n", res[i].first, res[i].second);
//    }
//    return 0;
//}


