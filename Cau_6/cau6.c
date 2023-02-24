#include<stdio.h>

int tong(int a)
{
    int tong = 0;
    for (int i = 1; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            tong += i;
            int j = a/i;
            if (i != j && j < a) tong += j;
        }
    
    }
    return tong;
}

int main()
{
    int N;
    scanf("%d", &N);
    if (tong(N) < N) printf("YES");
    else printf("NO");
    return 0;
}
