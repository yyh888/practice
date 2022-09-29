class Solution {
public:
    bool isFlipedString(string s1, string s2) {
        if (s1.size() != s2.size())
        {
            return false;
        }
        if (s1.size() == 0)
        {
            return true;
        }
        for (int i = 0; i < s1.size(); i++)
        {
            bool flag = true;
            if (s1[i] == s2[0])
            {
                for (int j = 0; j < s2.size(); j++)
                {
                    if (s1[(i + j) % s1.size()] != s2[j])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    return true;
                }
            }
        }
        return false;
    }
};


