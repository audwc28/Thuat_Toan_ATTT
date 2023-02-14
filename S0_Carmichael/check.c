#include <stdio.h>
int gcd(int a, int b)
{
    if (a < b)
        return gcd(b, a);
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}


int power(int x, int y, int mod)
{
    if (y == 0)
        return 1;
    int temp = power(x, y / 2, mod) % mod;
    temp = (temp * temp) % mod;
    if (y % 2 == 1)
        temp = (temp * x) % mod;
    return temp;
}


int isCarmichaelNumber(int n)
{
    for (int b = 2; b < n; b++) {
        // Nếu "b" là nguyên tố cùng nhau với n
        if (gcd(b, n) == 1)
            // Và pow(b, n-1)%n khác 1,
            // return false.
            if (power(b, n - 1, n) != 1)
                return 0;
    }
    return 1;
}


int main()
{
    int N;
    scanf("%d", &N);
    if (isCarmichaelNumber(N) == 1)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    
    return 0;
}

// 8/10