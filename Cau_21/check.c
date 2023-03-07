#include<stdio.h>

int snt(int a)
{
    if (a == 1) return 0;
    if (a == 2) return 1;
    for (int i = 2; i*i <= a; i++)
    {
        if (a % i == 0) return 0;
    }
    return 1;
}

int check(int a) 
{
    int dem = 0;
    for (int i = 1; i <= a; i++)
    {
        if (snt(i) == 1) dem++;
    }
    if (snt(dem) == 1) return 1;
    else return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (check(i) == 1) printf("%d ", i);
    }
    
    return 0;
}
