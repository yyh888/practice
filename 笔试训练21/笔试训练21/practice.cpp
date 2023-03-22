// Ï´ÅÆ
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int n, k;
//        cin >> n >> k;
//        vector<int> v, tmp;
//        v.resize(2 * n);
//        tmp.resize(2 * n);
//        int mid = n - 1;
//        for (int i = 0; i < 2 * n; i++)
//        {
//            cin >> v[i];
//        }
//        while (k--)
//        {
//            int st1 = 0, ed1 = mid, st2 = mid + 1, ed2 = 2 * n - 1;
//            int end = 2 * n - 1;
//            while (ed2 >= st2)
//            {
//                tmp[end--] = v[ed2--];
//                tmp[end--] = v[ed1--];
//            }
//            v = tmp;
//        }
//        for (int i = 0; i < v.size(); i++)
//        {
//            cout << v[i] << " ";
//        }
//        cout << '\n';
//    }
//    return 0;
//}


// MP3¹â±êÎ»ÖÃ
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    string s;
//    cin >> n >> s;
//    int start, end;
//    int idx = 1;
//    // n <= 4
//    if (n <= 4)
//    {
//        start = 1, end = n;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] == 'U')
//            {
//                if (idx == start)
//                {
//                    idx = end;
//                }
//                else
//                {
//                    --idx;
//                }
//            }
//            if (s[i] == 'D')
//            {
//                if (idx == end)
//                {
//                    idx = start;
//                }
//                else
//                {
//                    ++idx;
//                }
//            }
//        }
//        for (int i = start; i <= end; i++)
//        {
//            cout << i << " ";
//        }
//        cout << '\n' << idx << endl;
//    }
//    else
//    {
//        start = 1, end = 4;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] == 'U')
//            {
//                if (start != 1)
//                {
//                    if (idx == start)
//                    {
//                        --start;
//                        --end;
//                    }
//                    --idx;
//                }
//                else
//                {
//                    if (idx == start)
//                    {
//                        start = n - 3;
//                        end = n;
//                        idx = end;
//                    }
//                    else
//                    {
//                        idx--;
//                    }
//                }
//            }
//            if (s[i] == 'D')
//            {
//                if (end != n)
//                {
//                    if (idx == end)
//                    {
//                        ++start;
//                        ++end;
//                    }
//                    ++idx;
//                }
//                else
//                {
//                    if (idx == end)
//                    {
//                        start = 1;
//                        end = 4;
//                        idx = 1;
//                    }
//                    else
//                    {
//                        ++idx;
//                    }
//                }
//            }
//        }
//        for (int i = start; i <= end; i++)
//        {
//            cout << i << " ";
//        }
//        cout << "\n" << idx;
//    }
//    return 0;
//}