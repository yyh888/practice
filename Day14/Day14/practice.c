int* masterMind(char* solution, char* guess, int* returnSize) {
    char s[4];
    char g[4];
    memcpy(s, solution, 4 * sizeof(char));
    memcpy(g, guess, 4 * sizeof(char));
    //²ÂÖÐ
    int Great = 0;
    for (int i = 0; i < 4; i++)
    {
        if (s[i] == g[i])
        {
            Great++;
            s[i] = g[i] = 'A';
        }
    }
    //Î±²ÂÖÐ
    int NoGreat = 0;
    for (int i = 0; (i < 4); i++)
    {
        if ((g[i] == 'A'))
            continue;
        for (int j = 0; (j < 4); j++)
        {
            if (s[j] == 'A')
                continue;
            if (g[i] == s[j])
            {
                NoGreat++;
                s[j] = 'A';
                break;
            }
        }
    }
    int* tmp = (int*)malloc(sizeof(int) * 2);
    tmp[0] = Great;
    tmp[1] = NoGreat;
    *returnSize = 2;
    return tmp;
}



