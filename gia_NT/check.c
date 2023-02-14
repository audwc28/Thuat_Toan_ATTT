#include<stdio.h>

int check(long long a)
{
    int dem = 0;
    for (long long i = 1; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            dem++;
            long long j = a/i;
            if(i != j) dem++;
        }
    }
    return dem;
}

int main()
{
    long long a, b, dem = 0;
    scanf("%d %d", &a, &b);
    for (long long i = b; i >= a; i--)
    {
        if (check(i) <= 3)
        {
            printf("%lld ", i);
            dem++;
            break;
        }
    }
    if (dem == 0) printf("0");
    return 0;
}
