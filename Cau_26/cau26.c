#include<stdio.h>

int snt(int a)
{
    if (a == 1) return 0;
    if (a == 2) return 1;
    for (int i = 2; i*i <= a; i++)
    {
        if (a % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    } while (n >= 10000);
    int dem = 0;
    for (int i = 2; i*i <= n; i++)
    {
        if (snt(i) == 1)
        {
            if (n % i == 0 && n % (i*i) == 0)
            {
                dem++;
            }
        }
        
    }
    dem == 0 ? printf("NO") : printf("YES");
}