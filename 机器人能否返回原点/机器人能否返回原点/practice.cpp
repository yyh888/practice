class Solution {
public:
    bool judgeCircle(string moves) {
        int row = 0, col = 0;
        for (int i = 0; i < moves.size(); i++)
        {
            if (moves[i] == 'U') col += 1;
            else if (moves[i] == 'D') col -= 1;
            else if (moves[i] == 'R') row += 1;
            else row -= 1;
        }
        if (!row && !col) return true;
        return false;
    }
};