// 机器人的运动范围

//class Solution {
//public:
//    int cnt = 0;
//    int M, N;
//
//    int GetVal(int a, int b)
//    {
//        string s = to_string(a);
//        s += to_string(b);
//        int ret = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            ret += (s[i] - '0');
//        }
//        return ret;
//    }
//
//    void dfs(vector<vector<int>>& vv, int i, int j, int k)
//    {
//        if (GetVal(i, j) > k)
//        {
//            return;
//        }
//        cnt++;
//        vv[i][j] = 1;
//        int dx[] = { 0, -1, 0, 1 };
//        int dy[] = { -1, 0, 1, 0 };
//        for (int q = 0; q < 4; q++)
//        {
//            int x = i + dx[q], y = j + dy[q];
//            if (x >= 0 && x < M && y >= 0 && y < N && vv[x][y] == 0)
//            {
//                dfs(vv, x, y, k);
//            }
//        }
//    }
//
//    int movingCount(int m, int n, int k) {
//        M = m, N = n;
//        vector<vector<int>> vv(m, vector<int>(n));
//        dfs(vv, 0, 0, k);
//        return cnt;
//    }
//};

// 把数组排成最小的数
//class Solution {
//public:
//    string minNumber(vector<int>& nums) {
//        vector<string> v;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            v.push_back(to_string(nums[i]));
//        }
//        sort(v.begin(), v.end(), [](string& x, string& y) {return (x + y) < (y + x); });
//        string ans;
//        for (int i = 0; i < v.size(); i++)
//        {
//            ans += v[i];
//        }
//        return ans;
//    }
//};


//class Solution {
//public:
//    void quick_sort(vector<string>& v, int l, int r)
//    {
//        if (l >= r)
//        {
//            return;
//        }
//        int i = l, j = r;
//        while (i < j)
//        {
//            // 右找小
//            while (i < j && (v[l] + v[j] <= v[j] + v[l])) j--;
//            while (i < j && (v[i] + v[l] <= v[l] + v[i])) i++;
//            if (i < j)
//            {
//                swap(v[i], v[j]);
//            }
//        }
//        swap(v[l], v[i]);
//        quick_sort(v, l, i);
//        quick_sort(v, i + 1, r);
//    }
//
//    string minNumber(vector<int>& nums) {
//        vector<string> v;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            v.push_back(to_string(nums[i]));
//        }
//        quick_sort(v, 0, v.size() - 1);
//        string ans;
//        for (int i = 0; i < v.size(); i++)
//        {
//            ans += v[i];
//        }
//        return ans;
//    }
//};