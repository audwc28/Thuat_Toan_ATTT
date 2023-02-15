#include<stdio.h>

int tongUoc(int a)
{
    int tong = 0;
    for (int i = 1; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            tong += i; 
            int j = a/i;
            if (i != j && j != a) tong += j;
        }
        
    }
    return tong;
}

int main()
{
    int a, b, dem = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (tongUoc(i) > i) dem++;
    }
    printf("%d", dem);
    return 0;
}
// 10/10