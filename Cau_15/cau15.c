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
    int N, A[1000], k = 0;
    scanf("%d", &N);
    for (int i = 2; i <= N; i++)
    {
        if (check(i) == 1)
        {
            A[k] = i;
            k++;
        }
        
    }
    for (int i = 0; i < k-1; i++)
    {
        if (A[i+1] - A[i] == 2) printf("%d %d\n", A[i], A[i+1]);
    }
    
    return 0;
}
