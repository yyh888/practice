class Solution {
public:
    int findString(vector<string>& words, string s) {
        int l = 0, r = words.size() - 1;
        while (l <= r)
        {
            while (l <= r && words[l] == "") ++l;
            while (l <= r && words[r] == "") --r;
            int mid = (l + r) >> 1;
            while (words[mid] == "")
            {
                ++mid;
                if (mid == r)
                {
                    r = (l + r) >> 1;
                    continue;
                }
            }
            if (words[mid] < s)
            {
                l = mid + 1;
            }
            else if (words[mid] > s)
            {
                r = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};