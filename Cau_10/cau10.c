#include<stdio.h>

int check(int a)
{
    if (a == 1) return 0;
    if (a == 2) return 1;
    for (int i = 2; i*i <= a; i++)
    {
        if (a % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int N;
    scanf("%d", &N);
    int uoc = 0, ngto = 0;
    for (int i = 1; i*i <= N; i++)
    {
        if (N % i == 0)
        {
            uoc++;
            if (check(i) == 1) ngto++;
            int j = N/i;
            if (i != j)
            {
                uoc++;
                if (check(j) == 1) ngto++;
            }
            
        }
        
    }
    printf("%d %d", uoc, ngto);
    return 0;
}
