class Solution {
public:
    bool canTransform(string start, string end) {
        int sz = start.size();
        int i = 0, j = 0;
        while (i < sz && j < sz)
        {
            // 跳过X
            while (i < sz && start[i] == 'X')
            {
                i++;
            }
            while (j < sz && end[j] == 'X')
            {
                j++;
            }
            // 判断字符是否相等
            if (i < sz && j < sz)
            {
                if (start[i] != end[j])
                {
                    return false;
                }
                else// 判断与X的相对顺序
                {
                    if (start[i] == 'L' && i < j)
                    {
                        return false;
                    }
                    if (start[i] == 'R' && i > j)
                    {
                        return false;
                    }
                }
                i++;
                j++;
            }
        }
        // 出循环后后边必须全为X
        while (i < sz)
        {
            if (start[i] != 'X')
            {
                return false;
            }
            i++;
        }
        while (j < sz)
        {
            if (end[j] != 'X')
            {
                return false;
            }
            j++;
        }
        return true;
    }
};