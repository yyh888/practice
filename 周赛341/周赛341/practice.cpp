// 一最多的行
//class Solution {
//public:
//    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
//        int n = mat.size(), m = mat[0].size();
//        int idx = 0;
//        int Max = 0;
//        for (int i = 0; i < n; i++)
//        {
//            int ret = 0;
//            for (int j = 0; j < m; j++)
//            {
//                if (mat[i][j] == 1)
//                {
//                    ret++;
//                }
//            }
//            if (ret > Max)
//            {
//                idx = i;
//                Max = ret;
//            }
//        }
//        vector<int> res{ idx, Max };
//        return res;
//    }
//};


// 找出可整除性得分最大的整数
//class Solution {
//public:
//    int addMinimum(string word) {
//        int n = word.size();
//        int res = 0;
//        if (word[0] != 'a')
//        {
//            res += word[0] - 'a';
//        }
//        for (int i = 0; i < n - 1; i++)
//        {
//            if (word[i] > word[i + 1])
//            {
//                res += ('c' - word[i]);
//            }
//            else if ((word[i + 1] - word[i]) == 2)
//            {
//                res += 1;
//            }
//            else if (word[i] == word[i + 1])
//            {
//                res += 2;
//            }
//
//            if (i > 0 && word[i - 1] == 'c' && word[i] != 'c')
//            {
//                res += word[i] - 'a';
//            }
//        }
//        if (n > 1 && word[n - 2] == 'c' && word[n - 1] != 'c')// "acb"
//        {
//            res += 2;
//        }
//        else if (n > 1 && word[n - 1] != 'c')// "aaa"
//        {
//            res += 'c' - word[n - 1];
//        }
//        if (n == 1)
//        {
//            res += 'c' - word[0];
//        }
//        return res;
//    }
//};

//class Solution {
//public:
//    int addMinimum(string word) {
//        int n = word.size();
//        int res = 1;
//        for (int i = 1; i < n; i++)
//        {
//            if (word[i] <= word[i - 1])
//            {
//                res++;
//            }
//        }
//        return res * 3 - n;
//    }
//};


