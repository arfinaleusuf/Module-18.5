#include <stdio.h>
#include <math.h>
int main()
{
    int a[5][5];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int ind_r = 0;
    int ind_c = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (a[i][j] == 1)
            {
                ind_r = i;
                ind_c = j;
            }
        }
    }
    int need_r = abs(ind_r - 3);
    int need_c = abs(ind_c - 3);
    int total_move = need_r + need_c;
    printf("%d",total_move);
    return 0;
}