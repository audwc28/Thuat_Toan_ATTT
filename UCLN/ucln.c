#include <stdio.h>
#include <math.h>

long long gcd(long long a, long long b) {
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main()
{
    long long a, b;
    scanf("%lld%lld",&a,&b);
    printf("%lld", gcd(a,b));
    return 0;
}