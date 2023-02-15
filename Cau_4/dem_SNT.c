#include<stdio.h>
#include<math.h>

long long max(long long a, long long b) //Trả về số lớn hơn trong a và b
{
    if (a > b) //Nếu a lớn hơn thì trả về a
    {
        return a;
    }
    return b; //Nếu b lớn hơn thì trả về b
}

void sangSNTtrendoan(long long l, long long r) 
{
    int dem = 0;
    long long SNT[r - l + 1]; 
    for(long long i = 0; i <= r-l+1; i++) 
    {
        SNT[i] = 1; 
    }
    for(long long i = 2; i * i <= r; i++) 
    {
        for(long long j = max(i*i,(l+i-1)/i*i); j <= r; j += i)
        {
            SNT[j-l] = 0;
        }
    }

    for(long long i = max(l,2); i <= r; i++)
    {
        if(SNT[i-l]==1)
        {
            dem++;
        }
    }
    printf("%d", dem);
}

int main()
{
    long long l,r;
    scanf("%lld %lld",&l,&r);
    sangSNTtrendoan(l,r);
    return 0;
}