bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    //行
    int flag1 = 1;
    for (int i = 0; i < 9; i++)//行数
    {
        for (int j = 0; j < 8; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (board[i][j] = board[i][k])
                {
                    flag1 = 0;
                }
            }
        }
    }
    //列
    int flag2 = 1;
    for (int i = 0; i < 9; i++)//行数
    {
        for (int j = 0; j < 8; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (board[j][i] = board[k][i])
                {
                    flag2 = 0;
                }
            }
        }
    }
    //区域
    int flag3 = 1;
    for (int i = 0; i < 9; i += 3)//一整行
    {
        for (int j = 0; j < 9; j += 3)//每个区域第一个位置
        {
            for (int k = j; k < j + 3; k++)//行
            {
                for (int h = i; h < h + 3; h++)//列
                {
                    if ()
                }
            }
        }
    }
}