// µ•¥ À—À˜
//class Solution {
//public:
//
//    bool dfs(vector<vector<char>>& board, string word, int idx, int i, int j)
//    {
//        if (idx == word.size() - 1)
//        {
//            return true;
//        }
//        int dx[] = { 0, -1, 0, 1 };
//        int dy[] = { -1, 0, 1, 0 };
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < board.size() && y >= 0 && y < board[0].size() && board[x][y] == word[idx + 1])
//            {
//                char tmp = board[i][j];
//                board[i][j] = ' ';
//                bool flag = dfs(board, word, idx + 1, x, y);
//                if (flag) return true;
//                board[i][j] = tmp;
//            }
//        }
//        return false;
//    }
//    bool exist(vector<vector<char>>& board, string word) {
//        for (int i = 0; i < board.size(); i++)
//        {
//            for (int j = 0; j < board[0].size(); j++)
//            {
//                if (board[i][j] == word[0])
//                {
//                    bool flag = dfs(board, word, 0, i, j);
//                    if (flag)
//                    {
//                        return true;
//                    }
//                }
//            }
//        }
//        return false;
//    }
//};


// ÷˘◊¥Õº÷–◊Ó¥Ûµƒæÿ–Œ
//class Solution {
//public:
//    int largestRectangleArea(vector<int>& heights) {
//        stack<int> stidx;
//        heights.insert(heights.begin(), 0);
//        heights.push_back(0);
//        int n = heights.size();
//        stidx.push(0);
//        int res = 0;
//        for (int i = 1; i < n; i++)
//        {
//            if (heights[i] < heights[stidx.top()])
//            {
//                while (!stidx.empty() && heights[stidx.top()] > heights[i])
//                {
//                    int mid = stidx.top();
//                    stidx.pop();
//                    if (!stidx.empty())
//                    {
//                        int left = stidx.top();
//                        int right = i;
//                        int w = right - left - 1;
//                        int h = heights[mid];
//                        res = max(res, w * h);
//                    }
//                }
//            }
//            stidx.push(i);
//        }
//        return res;
//    }
//};

//
//class Solution {
//public:
//    int largestRectangleArea(vector<int>& heights) {
//        stack<int> stidx;
//        heights.insert(heights.begin(), 0);
//        heights.push_back(0);
//        int n = heights.size();
//        stidx.push(0);
//        int res = 0;
//        for (int i = 1; i < n; i++)
//        {
//            while (heights[stidx.top()] > heights[i])
//            {
//                int mid = stidx.top();
//                stidx.pop();
//                int left = stidx.top();
//                int right = i;
//                int w = right - left - 1;
//                int h = heights[mid];
//                res = max(res, w * h);
//            }
//            stidx.push(i);
//        }
//        return res;
//    }
//};


// Õ’∑Â Ω∆•≈‰
//class Solution {
//public:
//    vector<bool> camelMatch(vector<string>& queries, string pattern) {
//        vector<bool> v(queries.size(), true);
//        for (int k = 0; k < queries.size(); k++)
//        {
//            string s = queries[k];
//            int i = 0, j = 0;
//            for (; i < s.size(); i++)
//            {
//                if (s[i] == pattern[j])
//                {
//                    ++j;
//                }
//                else if (s[i] >= 'A' && s[i] <= 'Z')
//                {
//                    v[k] = false;
//                    break;
//                }
//            }
//            if (v[k] && j == pattern.size())
//            {
//                v[k] = true;
//            }
//            else
//            {
//                v[k] = false;
//            }
//        }
//        return v;
//    }
//};