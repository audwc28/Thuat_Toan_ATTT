#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    
    if (n % 2 == 0)
    {
        int dem = 0;
        while (n % 2 == 0)
        {
            dem++;
            n /= 2;
        }
        printf ("2 %d\n", dem);
    }
    for (long long i = 3; i*i <= n; i = i+2)
    {
        int dem = 0;
        while (n % i == 0)
        {
            dem++;
            n /= i;
        }
        if (dem != 0) printf("%lld %d\n", i, dem);
    }
    if (n != 1) printf("%lld 1", n);
    
}
// 10/10