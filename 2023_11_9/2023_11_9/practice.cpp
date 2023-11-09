class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int n = num.size();
        for (int i = 0; i < n; ++i) {
            // Ѱ�ҵ�һ��ͻ�����ֵ�����λ��Ϊ��߽�
            if (change[num[i] - '0'] > num[i] - '0') {
                // ���Ը����ұ߽�
                while (i < n && change[num[i] - '0'] >= num[i] - '0') {
                    num[i] = '0' + change[num[i] - '0'];
                    ++i;
                }
                break;
            }
        }
        return num;
    }
};
