#include <stdio.h>
void sum(int a[], int n, int i, int total)
{
    int total = 0 ;
    if (i == 4)
    {
        return;
    }
    sum(a, n, i + 1,&total);
    int total = total + a[i];
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int total = 0;
    sum(a, n, 0,&total);
    printf("%d",total);
    return 0;
}