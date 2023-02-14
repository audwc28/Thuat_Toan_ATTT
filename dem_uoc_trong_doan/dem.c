#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        int dem = 1, k = 1;
        while (k < i)
        {
            if (i % k == 0) dem++;
            k++;
        }
        printf("%d %d\n", i, dem);
    }
    
    return 0;
}
// 9/10