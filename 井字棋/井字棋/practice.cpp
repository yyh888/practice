class Board {
public:
    bool checkWon(vector<vector<int> > board) {
        bool flag = false;
        // ��
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 0 && board[i][0] != -1)
                flag = true;
        }
        // ��
        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 0 && board[0][i] != -1)
                flag = true;
        }
        // б
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0 && board[0][0] != -1)
            flag = true;
        if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != 0 && board[1][1] != -1)
            flag = true;
        return flag;
    }
};