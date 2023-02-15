#include<stdio.h>
#include<string.h>

int checksnt(long long a)
{
    if( a < 2) return 0;
    for (long long i = 2; i*i <= a; i++)
    {
        if (a % i == 0) return 0;
    }
    return 1;
}
int main()
{
    char a[1001];
    scanf("%s", &a);
    long long len = strlen(a), max = 0;
    for (long long i = 0; i < len; i++)
    {
        long long temp = 0;
        for (long long j = i; j < len; j++)
        {
            if (a[j] >= '0' && a[j] <= '9')
            {
                temp = temp*10 + (a[j] - '0');
                if (checksnt(temp) == 1 && temp > max) max = temp;
            }

        }
    }
    printf("%lld", max);
    return 0;
}
