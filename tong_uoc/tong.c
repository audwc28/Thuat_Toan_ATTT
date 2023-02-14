#include<stdio.h>

int giaiThua(int a)
{
    int b = 1;
    if (a == 2) return 2;
    for (int i = 2; i <= a; i++)
    {
        b *= i;
    }
    return b;
}

int main()
{
    int N, tong = 0;
    do
    {
        scanf("%d", &N);
    } while (N > 10);
    int m = giaiThua(N);
    for (int i = 1; i <= m/2; i++)
    {
        if (m % i == 0) tong += i;
    }
    printf("%d", tong + m);
    return 0;
}
