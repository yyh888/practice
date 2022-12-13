#include <iostream>
#include <cstring>
using namespace std;




//拉链法
//const int N = 1e5 + 3;
//int h[N], e[N], ne[N], idx;
//
//void insert(int x)
//{
//    int k = (x % N + N) % N;
//    e[idx] = x;
//    ne[idx] = h[k];
//    h[k] = idx++;
//}
//
//bool quire(int x)
//{
//    int k = (x % N + N) % N;
//    for (int i = h[k]; i != -1; i = ne[i])
//    {
//        if (e[i] == x)
//            return true;
//    }
//    return false;
//}
//
//int main()
//{
//    memset(h, -1, sizeof h);
//    int n;
//    cin >> n;
//    while (n--)
//    {
//        char op[2];
//        int x;
//        scanf("%s%d", op, &x);
//        if (*op == 'I')
//        {
//            insert(x);
//        }
//        else
//        {
//            if (quire(x)) printf("Yes\n");
//            else printf("No\n");
//        }
//    }
//    return 0;
//}




//开放寻址法
//const int N = 2e5 + 3, null = 0x3f3f3f3f;
//int h[N];
//
//int find(int x)
//{
//    int k = (x % N + N) % N;
//    while (h[k] != null && h[k] != x)
//    {
//        ++k;
//        if (k == N) k = 0;
//    }
//    return k;
//}
//
//int main()
//{
//    memset(h, 0x3f, sizeof h);
//    int n;
//    cin >> n;
//    while (n--)
//    {
//        char op[2];
//        int x;
//        scanf("%s%d", op, &x);
//        int k = find(x);
//        if (*op == 'I')
//        {
//            h[k] = x;
//        }
//        else
//        {
//            if (h[k] == null) printf("No\n");
//            else printf("Yes\n");
//        }
//    }
//    return 0;
//}