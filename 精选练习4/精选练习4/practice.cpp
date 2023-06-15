// 找出字符串中第一个匹配项的下标
//class Solution {
//public:
//    int strStr(string haystack, string needle) {
//        int n = haystack.size(), m = needle.size();
//        if (n < m) return -1;
//        for (int i = 0; i <= n - m; i++)
//        {
//            if (haystack[i] == needle[0])
//            {
//                if (haystack.substr(i, m) == needle) return i;
//            }
//        }
//        return -1;
//    }
//};


// 两数相除
//class Solution {
//public:
//    typedef long long LL;
//    int divide(int dividend, int divisor) {
//        if (dividend == 0) return 0;
//        if (divisor == 1) return dividend;
//        if (divisor == -1)
//        {
//            if (dividend > INT_MIN) return -dividend;
//            return INT_MAX;
//        }
//        LL a = dividend, b = divisor;
//        int op = 1;
//        if (a < 0 && b > 0 || a > 0 && b < 0) op = -1;
//        a = abs(a), b = abs(b);
//        LL res = div(a, b);
//        if (op > 0) return res > INT_MAX ? INT_MAX : res;
//        return -res;
//    }
//
//    LL div(LL a, LL b)
//    {
//        if (a < b) return 0;
//        LL tb = b;
//        LL count = 1;
//        while ((tb + tb) <= a)
//        {
//            count = count + count;
//            tb = tb + tb;
//        }
//        return count + div(a - tb, b);
//    }
//};


// 有效的数独
//class Solution {
//public:
//    const int N = 9;
//    bool isValidSudoku(vector<vector<char>>& board) {
//        for (int i = 0; i < N; i++)
//        {
//            unordered_set<char> st;
//            for (auto& e : board[i])
//            {
//                if (e != '.')
//                {
//                    if (st.count(e)) return false;
//                    st.insert(e);
//                }
//            }
//        }
//        for (int j = 0; j < N; j++)
//        {
//            unordered_set<char> st;
//            for (int i = 0; i < N; i++)
//            {
//                if (board[i][j] != '.')
//                {
//                    if (st.count(board[i][j])) return false;
//                    st.insert(board[i][j]);
//                }
//            }
//        }
//        int len = 0, begin = 0;
//        int k = 9;
//        while (k--)
//        {
//            unordered_set<int> st;
//            for (int j = begin; j < begin + 3; j++)
//            {
//                for (int i = len; i < len + 3; i++)
//                {
//                    if (board[i][j] != '.')
//                    {
//                        if (st.count(board[i][j])) return false;
//                        st.insert(board[i][j]);
//                    }
//                }
//            }
//            begin += 3;
//            if (begin >= N)
//            {
//                begin = 0;
//                len += 3;
//            }
//        }
//        return true;
//    }
//};



//class Solution {
//public:
//    bool isValidSudoku(vector<vector<char>>& board) {
//        int row[9][9];
//        int col[9][9];
//        int rc[3][3][9];
//        memset(row, 0, sizeof row);
//        memset(col, 0, sizeof col);
//        memset(rc, 0, sizeof rc);
//        for (int i = 0; i < 9; i++)
//        {
//            for (int j = 0; j < 9; j++)
//            {
//                int c = board[i][j];
//                if (c != '.')
//                {
//                    int idx = c - '1';
//                    row[i][idx]++;
//                    col[idx][j]++;
//                    rc[i / 3][j / 3][idx]++;
//                    if (row[i][idx] > 1 || col[idx][j] > 1 || rc[i / 3][j / 3][idx] > 1)
//                        return false;
//                }
//            }
//        }
//        return true;
//    }
//};