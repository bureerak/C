#include<stdio.h>
int main() {
    int n, count = 0, j = 0, state;
    char cinp;

    scanf("%d",&n);
    int label[n][2];
    for (int i = 0; i < n; i++ )
    {
        state = 1;
        scanf(" %c", &cinp);
        if (cinp >= 'A' && cinp <= 'Z') {cinp += 32;}
        for (j = 0; j < count; j++)
        {
            if (label[j][0] == cinp) 
            {
                label[j][1] += 1;
                state = 0;
            }
        }
        if (state) 
        {
            label[j][0] = cinp;
            label[j][1] = 1;
            count += 1;
        }
    }

    for (int k = 0; k < count; k++)
    {
        printf("%c: %d\n",label[k][0],label[k][1]);
    }
    return 0;
}