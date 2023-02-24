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
    int len = strlen(a), max = -1, temp = 0, s=0, e=0;
    for (int i = 0; i < len; i++)
    {
        if (isdigit(a[i]))
        {
            if (!isdigit(a[i-1])) s = i;
            temp = temp * 10 + (a[i] - '0');
            if (checkSNT(temp) == 2 && temp > max) max = temp;
        }else if (!isdigit(a[i]) || a[i] == ' ')
        {
            temp = 0;
            if (isdigit(a[i-1]))
            {
                e = i-1;
                for (int i = s+1; i <= e; i++)
                {
                    temp = 0;
                    for (int j = i; j <= e; j++)
                    {
                        temp = temp*10 + (a[j] - '0');
                        if (checkSNT(temp) == 2 && temp > max) max = temp;
                    } 
                }  
            }    
        }
    }
    printf("%d", max);
    return 0;
}
//8/10