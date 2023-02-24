#include<stdio.h>

int check(int a)
{
    int dem = 0;
    for (int i = 1; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            dem++;
            int j = a/i;
            if (i != j) dem++;
        }
        
    }
    return dem;
}

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (check(i) == 3) printf("%d ", i);
    }
    
    return 0;
}
