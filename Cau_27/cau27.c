#include<stdio.h>

int ucln(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

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

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i < b; i++)
    {
        for (int j = i+1; j <= b; j++)
        {
            if (snt(ucln(i, j)) == 1) printf("%d %d\n", i, j);
        }
        
    }
    
}