#include<stdio.h>
 
int main()
{
    long long n;
    scanf("%lld", &n);
    long long SNT[n+1];
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
    for (long long i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            if (SNT[i] == 1) k++;
            int j = n/i;
            if (i != j && SNT[j] == 1) k++;
        }
    }
    printf("%lld", k);
    
    return 0;
}
//3/10