class Solution {
public:
    int GetMax(int a, int b)
    {
        return a > b ? a : b;
    }

    int FindGreatestSumOfSubArray(vector<int> array) {
        int n = array.size();
        int sum = array[0];
        int max = array[0];
        for (int i = 1; i < n; i++)
        {
            sum = GetMax(sum + array[i], array[i]);
            max = GetMax(max, sum);
        }
        return max;
    }
};