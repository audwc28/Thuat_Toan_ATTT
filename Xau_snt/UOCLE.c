#include <stdio.h>
#include <math.h>

long long uoc_so_le(long long n)
{
    if(n%2==0)
    {
            long long k = n;
            while(k%2==0)
            {
                k = k/2;
            }
        return k;
    }
    else
    {
        long long k = 3;
        while(n%k != 0 && k <= sqrt(n))     k+=2;
        if(k > sqrt(n))     return 1;
        else    return n/k;
    }
}

int main()
{
    long long n;
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld", &n);
        printf("%lld\n", uoc_so_le(n));
    }
    return 0;
}