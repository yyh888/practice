bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    //��
    int flag1 = 1;
    for (int i = 0; i < 9; i++)//����
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
    //��
    int flag2 = 1;
    for (int i = 0; i < 9; i++)//����
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
    //����
    int flag3 = 1;
    for (int i = 0; i < 9; i += 3)//һ����
    {
        for (int j = 0; j < 9; j += 3)//ÿ�������һ��λ��
        {
            for (int k = j; k < j + 3; k++)//��
            {
                for (int h = i; h < h + 3; h++)//��
                {
                    if ()
                }
            }
        }
    }
}