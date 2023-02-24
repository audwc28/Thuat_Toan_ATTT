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

int main()
{
    int N, tong = 0;
    scanf("%d", &N);
    for (int i = 2; i <= N; i++)
    {
        if (check(i) == 1) tong += i;
    }
    printf("%d", tong);
    return 0;
}
