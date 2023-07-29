// ËÑË÷¶þÎ¬¾ØÕó
//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int n = matrix.size(), m = matrix[0].size();
//        int l = 0, r = n - 1;
//        while (l < r)
//        {
//            int mid = (l + r) / 2 + 1;
//            if (matrix[mid][0] <= target)
//            {
//                l = mid;
//            }
//            else r = mid - 1;
//        }
//        int idx = l;
//        l = 0, r = m - 1;
//        cout << idx << endl;
//        while (l < r)
//        {
//            int mid = (l + r) >> 1;
//            if (matrix[idx][mid] < target)
//            {
//                l = mid + 1;
//            }
//            else r = mid;
//        }
//        return matrix[idx][l] == target;
//    }
//};


// ËÑË÷¶þÎ¬¾ØÕó II
//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int n = matrix.size(), m = matrix[0].size();
//        int i = 0, j = m - 1;
//        while (i < n && j >= 0)
//        {
//            if (matrix[i][j] < target)
//            {
//                i++;
//            }
//            else if (matrix[i][j] > target)
//            {
//                j--;
//            }
//            else
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};


