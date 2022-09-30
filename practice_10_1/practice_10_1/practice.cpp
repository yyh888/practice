class Solution {
public:
    string reformatNumber(string number) {
        string s;
        for (char e : number)
        {
            if (isdigit(e))
            {
                s += e;
            }
        }

        string ret;
        int sz = s.size();
        int i = 0;
        while (sz)
        {
            if (sz > 4)
            {
                int tmp = 3;
                while (tmp--)
                {
                    ret += s[i++];
                }
                ret += '-';
                sz -= 3;
            }
            else
            {
                if (sz == 4)
                {
                    int tmp = 2;
                    while (tmp--)
                    {
                        ret += s[i++];
                    }
                    ret += '-';
                    tmp = 2;
                    while (tmp--)
                    {
                        ret += s[i++];
                    }
                    sz -= 4;
                }
                else
                {
                    while (sz--)
                    {
                        ret += s[i++];
                    }
                    break;
                }
            }
        }
        return ret;
    }
};

// 2
class Solution {
public:
    string reformatNumber(string number) {
        string s;
        for (char e : number)
        {
            if (isdigit(e))
            {
                s += e;
            }
        }

        string ret;
        int sz = s.size();
        int i = 0;
        while (sz)
        {
            if (sz > 4)
            {
                ret += s.substr(i, 3);
                i += 3;
                ret += '-';
                sz -= 3;
            }
            else
            {
                if (sz == 4)
                {
                    ret += s.substr(i, 2);
                    ret += '-';
                    i += 2;
                    ret += s.substr(i, 2);
                    sz -= 4;
                }
                else
                {
                    ret += s.substr(i);
                    break;
                }
            }
        }
        return ret;
    }
};