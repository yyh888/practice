//class Solution {
//public:
//
//    Node* flatten(Node* head) {
//        Node* pHead = new Node;
//        pHead->next = head;
//        while (head)
//        {
//            if (head->child)
//            {
//                Node* next = head->next;
//                Node* last = head->child;
//                head->next = last;
//                last->prev = head;
//                head->child = nullptr;
//                while (last->next)
//                {
//                    last = last->next;
//                }
//                last->next = next;
//                if (next) next->prev =
//            }
//            head = head->next;
//        }
//        return pHead->next;
//    }
//};



class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> f(n, vector<int>(k + 1, -0x3f3f3f3f));// ÂòÈë
        vector<vector<int>> g(n, vector<int>(k + 1, -0x3f3f3f3f));// Âô³ö
        f[0][0] = -prices[0];
        g[0][0] = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
                if (j > 0)
                {
                    g[i][j] = max(g[i - 1][j], f[i - 1][j - 1] + prices[i]);
                }
                else
                {
                    g[i][j] = g[i - 1][j];
                }
            }
        }
        int Max = 0;
        for (int i = 0; i <= k; i++)
        {
            Max = max(Max, g[n - 1][i]);
        }
        return Max;
    }
};