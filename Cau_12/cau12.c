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
    int k, N, A[1000], t = 0;
    scanf("%d %d", &N, &k);
    for (int i = 2; i <= N; i++)
    {
        if (check(i) == 1)
        {
            A[t] = i;
            t++;
        }
        
    }
    if (k > t-1) printf("NO");
    for (int i = 0; i < t; i++)
    {
        if (i + k <= t-1)
        {
            int tong = 0;
            for (int j = i; j < i+k; j++)
            {
                tong += A[j];
            }
            if (check(tong) == 1 && tong <= N)
            {
                for (int j = i; j < i+k; j++)
                {
                    printf("%d ", A[j]);
                }
                printf("\n");
            }
               
        } 
    }
    
    return 0;
}
