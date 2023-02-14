#include<stdio.h>

int check(long long a)
{
    int dem = 0;
    for (int i = 1; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            dem++;
            int j = a/i;
            if (i != j) dem++;
        }
    }
    return dem;
}


int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        printf("%d %d\n", i, check(i));
    }
    
    return 0;
}
// 10/10