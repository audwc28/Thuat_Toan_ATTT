#include <stdio.h>
#include <math.h>

void sangSNT(long long n)
{
    long long SNT[n+1];
    for(long long i = 0; i <= n; i++)
    {
        SNT[i] = 1;
    }
    SNT[0] = 0;
    SNT[1] = 0;
    for(long long i = 2; i * i <= n; i++)
    {
        if(SNT[i] == 1)
        {
            for(long long j = i * i; j <= n; j += i)
                SNT[j] = 0;
        }
    }
    for(long long i = 2; i <= n; i++)
    {
        if(SNT[i] == 1)
        {
            printf("%lld ",i);
        }
    }
}

int main(int argc, char const *argv[])
{
    long long a;
    scanf("%lld", &a);
    sangSNT(a);
    return 0;
}
