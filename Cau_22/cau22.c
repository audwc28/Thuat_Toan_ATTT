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
    int l, r, tong = 0;
    do
    {
        scanf("%d", &l);
    } while (l <= 0 || l >= 10000);
    do
    {
        scanf("%d", &r);
    } while (r <= 0 || r >= 10000);
    for (int i = l; i < r; i++)
    {
        for (int j = i+1; j <= r; j++)
        {
            printf("F(%d)*F(%d) = ", i, j);
            int a = snt(i) == 1 ? i : 0;
            int b = snt(j) == 1 ? j : 0;
            printf("%d*%d = %d\n", a, b, a*b);
            tong += a*b;  
        }
        
    }
    printf("%d", tong);
    return 0;
}
