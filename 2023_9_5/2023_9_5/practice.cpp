#include <iostream>

using namespace std;

//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        int top = 0, end = n - 1, left = 0, right = m - 1;
//        vector<int> res;
//        while (top <= end || left <= right)
//        {
//            for (int j = left; j <= right; j++)
//            {
//                res.push_back(matrix[top][j]);
//            }
//            if (++top > end) break;
//            for (int i = top; i <= end; i++)
//            {
//                res.push_back(matrix[i][right]);
//            }
//            if (--right < left) break;
//            for (int j = right; j >= left; j--)
//            {
//                res.push_back(matrix[end][j]);
//            }
//            if (--end < top) break;
//            for (int i = end; i >= top; i--)
//            {
//                res.push_back(matrix[i][left]);
//            }
//            if (++left > right) break;
//        }
//        return res;
//    }
//};

template <class T>
T Add(T a, T b);


int main()
{
	cout << Add(2, 1);
	return 0;
}


template <class T>
T Add(T a, T b)
{
	return a + b;
}
