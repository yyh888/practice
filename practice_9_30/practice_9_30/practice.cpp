//1
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;
        // ±È¿˙’“0
        for (size_t i = 0; i < matrix.size(); i++)
        {
            for (size_t j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        // ÷√0
        for (size_t i = 0; i < matrix.size(); i++)
        {
            for (size_t j = 0; j < matrix[i].size(); j++)
            {
                // ––
                for (size_t r = 0; r < row.size(); r++)
                {
                    if (row[r] == i)
                    {
                        matrix[i][j] = 0;
                    }
                }
                for (size_t c = 0; c < col.size(); c++)
                {
                    if (col[c] == j)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    }
};

//2
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        size_t m = matrix.size();
        size_t n = matrix[0].size();
        vector<int> row(m), col(n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!matrix[i][j])
                {
                    row[i] = col[j] = true;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (row[i] || col[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};