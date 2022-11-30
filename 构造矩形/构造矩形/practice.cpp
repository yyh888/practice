class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> v;
        int w = sqrt(area);
        while (area % w)
        {
            w--;
        }
        v.push_back(area / w);
        v.push_back(w);
        return v;
    }
};