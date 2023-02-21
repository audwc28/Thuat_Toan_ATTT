#include<stdio.h>
#include<string.h>
#include<ctype.h>

int checkSNT(long long n)
{
    long long dem = 0;
    for (long long i = 1; i*i <= n; i++)
    {
        if (n % i ==0)
        {
            dem++;
            long long j = n/i;
            if (j != i) dem++;
        }
        
    }
    return dem;
}

int main()
{
    char a[1001];
    scanf("%s", &a);
    int len = strlen(a), max = 0;
    for (int i = 0; i < len; i++)
    {
        long long temp = 0;
        for (int j = i; j < len; j++)
        {
            if (isdigit(a[j]))
            {
                temp = temp*10 + (a[j] - '0');
                if (checkSNT(temp) == 2 && temp > max) max = temp;
            }else
            {
                temp = 0;
            }
            

        }
    }
    printf("%lld", max);
    return 0;
}
//8/10