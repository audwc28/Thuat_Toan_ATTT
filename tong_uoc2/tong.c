#include<stdio.h>

int tongUoc(int a, int b)
{
    int tong = 0;
    for (int i = 1; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            if (b % i == 0) tong += i;
            int j = a/i;
            if (i != j && b % j == 0) tong += j;
        }
        
    }
    return tong;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", tongUoc(a, b));
    return 0;
}
// 0/10
