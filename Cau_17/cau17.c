// Không đủ đề nên xét là Ax^2 + Bx + C
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
    int N, A, B, C;
    scanf("%d %d %d %d", &N, &A, &B, &C);
    for (int i = 1; i <= N; i++)
    {
        if (check(A*i*i + B*i + C) == 1)
        {
            printf("%d", i);
            break;
        }
        
    }
    
    return 0;
}
