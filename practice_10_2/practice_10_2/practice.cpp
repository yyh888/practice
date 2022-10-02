class Solution {
public:
    bool canTransform(string start, string end) {
        int sz = start.size();
        int i = 0, j = 0;
        while (i < sz && j < sz)
        {
            // ����X
            while (i < sz && start[i] == 'X')
            {
                i++;
            }
            while (j < sz && end[j] == 'X')
            {
                j++;
            }
            // �ж��ַ��Ƿ����
            if (i < sz && j < sz)
            {
                if (start[i] != end[j])
                {
                    return false;
                }
                else// �ж���X�����˳��
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
        // ��ѭ�����߱���ȫΪX
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