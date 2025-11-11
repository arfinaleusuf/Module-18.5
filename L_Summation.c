#include <stdio.h>
void sum(int a[], int n, int i, long long int* p)
{
    if (i == n)
    {
        return;
    }
    sum(a, n, i + 1,p);
    *p = *p + a[i];
    
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
    long long int total = 0;
    sum(a, n, 0,&total);
    printf("%lld",total);
    return 0;
}