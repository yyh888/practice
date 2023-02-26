//旋转数组的最小数字

//class Solution {
//public:
//    int minArray(vector<int>& numbers) {
//        if (numbers.size() == 1) return numbers[0];
//        int l = 0, r = numbers.size() - 1;
//        while (l < r)
//        {
//            int mid = (l + r) >> 1;
//            if (numbers[mid] < numbers[r]) r = mid;
//            else if (numbers[mid] > numbers[r]) l = mid + 1;
//            else r--;
//        }
//        return numbers[l];
//    }
//};

// 矩阵中的路径
//class Solution {
//public:
//    bool _exist(vector<vector<char>>& board, string word, int i, int j, int p)
//    {
//        if (p == word.size()) return true;
//        int dx[] = { 0, -1, 0, 1 };
//        int dy[] = { -1, 0, 1, 0 };
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < board.size() && y >= 0 && y < board[0].size() && board[x][y] == word[p])
//            {
//                char tmp = board[i][j];
//                board[i][j] = '.';
//                bool flag = _exist(board, word, x, y, ++p);
//                if (flag) return true;
//                board[i][j] = tmp;
//                --p;
//            }
//        }
//        return false;
//    }
//
//    bool exist(vector<vector<char>>& board, string word) {
//        int n = board.size(), m = board[0].size();
//        if (word.size() > n * m) return false;
//        int i = 0, j = 0, p = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < m; j++)
//            {
//                if (board[i][j] == word[p])
//                {
//                    bool flag = _exist(board, word, i, j, ++p);
//                    if (flag) return true;
//                    p = 0;
//                }
//            }
//        }
//        return false;
//    }
//};

