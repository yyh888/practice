#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string l, r;
    cin >> l;
    n--;
    bool flag1 = true, flag2 = true;
    while (n--)
    {
        cin >> r;
        if (r.size() < l.size())
        {
            flag1 = false;
        }
        if (r < l)
        {
            flag2 = false;
        }
        l = r;
    }
    if (flag1 && flag2) printf("both");
    else if (flag1) printf("lengths");
    else if (flag2) printf("lexicographically");
    else printf("none");
    return 0;
}



#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = max(a, b);
    while (c)
    {
        if (c % a == 0 && c % b == 0)
            break;
        c++;
    }
    cout << c;
    return 0;
}