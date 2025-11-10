#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int num = n-1;
    for (int i = 0, j = num; i<=j; i++,j--)
    {
        if(j>i)
        {
            printf("%d ", a[i]);
        }
        if(i == j)
        {
            printf("%d", a[i]);
            break;
        }
        printf("%d ", a[j]);
    }
    return 0;
}