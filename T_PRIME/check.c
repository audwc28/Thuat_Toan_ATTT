#include<stdio.h>

int check(long long a)
{
    int dem = 0;
    for (long long i = 2; i <= a/2; i++)
    {
        if (a % i == 0) dem++;
    }
    if (dem % 2 == 1)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int main()
{
    long long A[10000];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (check(A[i]) == 1)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}
// 1/10