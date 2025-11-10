#include <stdio.h>
#include <stdbool.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int A[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    bool wiil_take = true;

    int num = 0;
    scanf("%d", &num);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == num)
            {
                wiil_take = false;
            }
        }
    }
    if (wiil_take == true)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }
    return 0;
}