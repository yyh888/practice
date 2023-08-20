//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<int> v(n);
//    unordered_map<int, int> hash;
//    int Max = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i];
//        if (hash.count(v[i]))
//        {
//            Max = max(Max, i - hash[v[i]] - 1);
//        }
//        else hash.insert({ v[i], i });
//    }
//    cout << Max;
//    return 0;
//}
//
//
//


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int N = 1e9 + 10;
int S[N], H[N], D[N], C[N];

unordered_map<int, int> hs, hh, hd, hc;

int main()
{
    int t;
    cin >> t;
    int a, cnt, c;
    while (t--)
    {
        cin >> a >> cnt >> c;
        if (c == 'S')
        {
            S[a] += cnt;
            hs[a] = cnt;
        }
        else if (c == 'H')
        {
            H[a] += cnt;
            hh[a] = cnt;
        }
        else if (c == 'D')
        {
            D[a] += cnt;
            hd[a] = cnt;
        }
        else
        {
            C[a] += cnt;
            hc[a] = cnt;
        }
    }
    int sum = 0;
    for (auto& e : hs)
    {
        int a = e.first;
        if (hs.count(a + 1) && hs.count(a + 2) && hs.count(a + 3) && hs.count(a + 4))
        {
            sum++;
            hs[a]--, hs[a + 1]--, hs[a + 2]--, hs[a + 3]--, hs[a + 4]--;
        }
        if (hs.count(a - 1)) hs[a]--;
    }
    cout << sum << endl;
    return 0;
}