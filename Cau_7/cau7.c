#include<stdio.h>

int check(int a)
{
    if (a == 1) return 0;
    if (a == 2) return 1;
    for (int i = 2; i*i <= a; i++)
    {
        if (a % i == 0) return 0;
    }
    return 1;
}

int daoNguoc(int a)
{
    int b = 0;
    while (a > 0)
    {
        b = b*10 + a%10;
        a /= 10;
    }
    return b;
}

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 2; i <= N; i++)
    {
        if (check(i) == 1 && check(daoNguoc(i)) == 1) printf("%d ", i);
    }
    
    return 0;
}
