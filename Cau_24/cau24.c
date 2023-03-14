#include<stdio.h>
#include<math.h>

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
    int s1[b], s2[b], id = sqrt(b), dem = 0;
    for (int i = 1; i <= id; i++)
    {
        s1[i] = i*i;
        s2[i] = i*i;
    }
    for (int i = a; i <= b; i++)
    {
        if (snt(i) == 1)
        {
            int check = i;
            for (int k = 1; k <= id; k++)
            {
                for (int j = 1; j <= id; j++)
                {
                    if (s1[k] + s2[j] == check) dem++;
                }
                
            }
            
        }
        
    }
    dem % 2 == 1 ? printf("%d", (dem+1)/2) : printf("%d", dem/2);
    return 0;
}
