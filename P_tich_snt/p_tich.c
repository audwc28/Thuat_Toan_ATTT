#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int dem;
    
    for(long long i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            dem++;
            n /= i;
        }
        if(dem != 0){
            if(dem > 1) printf("%lld %d\n", i, dem);
            else printf("%lld 1\n", i);
        }
    }
    
}
//Mới được có 6/10