#include<stdio.h>

int soUoc(int a) //8
{
    int dem = 0;
    for (int i = 1; i*i <= a; i++) //i = 1 2 
    {
        if (a % i == 0)
        {
            dem++; //1 3
            int j = a/i;//8 4
            if (i != j) dem++;//2 4
        }
        
    }
    return dem;
}

int main()
{
    int k, n, dem = 0;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <=n ; i++)
    {
        if (soUoc(i) == k) dem++;
    }
    printf("%d", dem);
    return 0;
}
