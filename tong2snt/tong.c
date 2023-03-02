#include<stdio.h>
 
int main()
{
    long long n;
    scanf("%lld", &n);
    long long SNT[n+1];
    long long so1[n];
    long long so2[n];
    long long k = 0;
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
    for (long long i = 2; i <= n/2; i++)
    {
        if (SNT[i] == 1 && SNT[n-i] == 1 && i != n-i) {
            so1[k] = i;
            so2[k] = n-i;
            k++;
        }
    }
    printf("%lld\n", k);
    for (long long i = 0; i < k; i++)
    {
        printf("%lld %lld\n", so1[i], so2[i]);
    }
    
    return 0;
}
//10/10