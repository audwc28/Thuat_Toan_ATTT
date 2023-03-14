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

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int mangSnt[n], index = 0;
    for (int i = 2; i <= n; i++)
    {
        if (snt(i) == 1)
        {
            mangSnt[index] = i;
            index++;
        }
    }
    
    for (int i = 0; i < index - 2; i++)
    {
        for (int j = i + 1; j < index - 1; j++)
        {
            for (int k = j + 1; k < index; k++)
            {
                if (mangSnt[i] + mangSnt[j] + mangSnt[k] == n)
                {
                    printf("%d %d %d\n", mangSnt[i], mangSnt[j], mangSnt[k]);
                }
                
            }
            
        }
        
    }
    
}