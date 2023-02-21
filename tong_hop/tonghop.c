#include<stdio.h>

int snt(int a)
{
    if (a < 2) return 0;
    for (int i = 2; i*i <= a; i++)
    {
        if (a % i == 0) return 0;
    }
    return 1;
}

void tongHop(int n)
{
    int k = 0, q = 0, p = 0, s = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            s++;
            p += i;
            if (snt(i) == 1)
            {
                k++;
                q += i;
            }
            int j = n/i;
            if (i != j)
            {
                s++;
                p += j;
                if (snt(j) == 1)
                {
                    k++;
                    q += j;
                }
            }
            
        }
        
    }
    printf("%d",n+p+s-q-k );
}

int main()
{
    int n;
    scanf("%d", &n);
    tongHop(n);
    return 0;
}
