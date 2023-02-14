#include<stdio.h>

int soPhongPhu(int a)
{
    int tong = 1;
    for (int i = 2; i <= a/2; i++)
    {
        if (a % i == 0) tong+=i;
    }
    if (tong > a) return 1;
    else return 0;
}

int main()
{
    int a, b, dem = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (soPhongPhu(i) == 1) dem++;
    }
    printf("%d", dem);
    return 0;
}
// 9/10