#include<stdio.h>

int gcd(int a, int b) {
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int m, n, c;
    do
    {
        scanf("%d", &m);
    } while (m <= 0 || m >= 1000);
    do
    {
        scanf("%d", &n);
    } while (n <= 0 || n >= 1000);
    do
    {
        scanf("%d", &c);
    } while (c <= 0 || c >= 1000);
    for (int i = m; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (gcd(i, j) == c) printf("%d %d\n", i, j);
        }
        
    }
    
    return 0;
}
