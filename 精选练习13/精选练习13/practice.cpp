// 寻找重复数
//class Solution {
//public:
//    int findDuplicate(vector<int>& nums) {
//        int n = nums.size();
//        int l = 1, r = n;
//        while (l < r)
//        {
//            int mid = (l + r) >> 1;
//            int count = 0;
//            for (auto& e : nums)
//            {
//                if (e <= mid) count++;
//            }
//            if (count <= mid)
//            {
//                l = mid + 1;
//            }
//            else
//            {
//                r = mid;
//            }
//        }
//        return l;
//    }
//};


//class Solution {
//public:
//    int findDuplicate(vector<int>& nums) {
//        int slow = 0, fast = 0;
//        do {
//            slow = nums[slow];
//            fast = nums[nums[fast]];
//        } while (slow != fast);
//        int p = 0, q = slow;
//        do {
//            p = nums[p];
//            q = nums[q];
//        } while (p != q);
//        return p;
//    }
//};


// 生命游戏
//class Solution {
//public:
//    void gameOfLife(vector<vector<int>>& board) {
//        vector<vector<int>> g(board);
//        int dd[3] = { -1, 0, 1 };
//        int n = board.size(), m = board[0].size();
//        for (int row = 0; row < n; row++)
//        {
//            for (int col = 0; col < m; col++)
//            {
//                // 活细胞
//                int live = 0;
//                for (int i = 0; i < 3; i++)
//                {
//                    for (int j = 0; j < 3; j++)
//                    {
//                        if (!(i == 1 && j == 1))
//                        {
//                            int x = row + dd[i], y = col + dd[j];
//                            if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 1)
//                            {
//                                live++;
//                            }
//                        }
//                    }
//                }
//
//                if (live < 2 || live > 3) board[row][col] = 0;
//                if (live == 3) board[row][col] = 1;
//            }
//        }
//    }
//};


//class Solution {
//public:
//    void gameOfLife(vector<vector<int>>& board) {
//        int n = board.size(), m = board[0].size();
//        int dd[3] = { -1, 0, 1 };
//        for (int row = 0; row < n; row++)
//        {
//            for (int col = 0; col < m; col++)
//            {
//                int live = 0;
//                for (int i = 0; i < 3; i++)
//                {
//                    for (int j = 0; j < 3; j++)
//                    {
//                        if (!(i == 1 && j == 1))
//                        {
//                            int x = row + dd[i], y = col + dd[j];
//                            if (x >= 0 && x < n && y >= 0 && y < m)
//                            {
//                                live += board[x][y] & 1;
//                            }
//                        }
//                    }
//                }
//
//                if (board[row][col])
//                {
//                    if (live == 2 || live == 3) board[row][col] |= 2;
//                }
//                else
//                {
//                    if (live == 3) board[row][col] |= 2;
//                }
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                board[i][j] >>= 1;
//            }
//        }
//    }
//};


// 数据流的中位数
//class MedianFinder {
//public:
//    priority_queue<int, vector<int>, greater<int>> Maxheap;// 小根堆
//    priority_queue<int, vector<int>, less<int>> Minheap;// 大根堆
//
//    MedianFinder() {
//
//    }
//
//    void addNum(int num) {
//        if (Minheap.empty() || num < Minheap.top())
//        {
//            Minheap.push(num);
//            if (Minheap.size() - Maxheap.size() > 1)
//            {
//                Maxheap.push(Minheap.top());
//                Minheap.pop();
//            }
//        }
//        else
//        {
//            Maxheap.push(num);
//            if (Maxheap.size() > Minheap.size())
//            {
//                Minheap.push(Maxheap.top());
//                Maxheap.pop();
//            }
//        }
//    }
//
//    double findMedian() {
//        if (Minheap.size() > Maxheap.size())
//        {
//            return Minheap.top();
//        }
//        else
//        {
//            return (Minheap.top() + Maxheap.top()) / 2.0;
//        }
//    }
//};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */


