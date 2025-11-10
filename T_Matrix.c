#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i<n;i++)
    {
        for(int j =0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum_primary_dio = 0;
    int sum_secondary_dio = 0;
    // for primary diogonals
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i == j)
            {
                sum_primary_dio = sum_primary_dio + a[i][j];
            }
        }
    }
    // for secondry diogonals
    int secIndex = n-1; 
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i+j == secIndex)
            {
                sum_secondary_dio = sum_secondary_dio + a[i][j];
            }
        }
    }
    int difference = abs(sum_primary_dio - sum_secondary_dio);
    printf("%d", difference);
    return 0;
}