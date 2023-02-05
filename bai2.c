#include<stdio.h>
#include<math.h>

void change2Array(int a, int A[])
{
    int t = 3;
    while (t >= 0)
    {
        A[t] = floor(a / pow(2, t*8));
        a -= A[t]*pow(2, t*8);
        t--;
    }
    
}

int main()
{
    int a, A[3], b, B[3], C[3], epsilon = 0, tmp;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    change2Array(a, A);
    change2Array(b, B);
    for (int i = 0; i <= 3; i++)
    {
        //Tính mảng C
        tmp = A[i] - B[i] - epsilon;
        if (tmp < 0)
        {
            C[i] = 256 + tmp;
        }else
        {
            C[i] = tmp % 256;
        }
        //Tính epsilonn
        if (0 <= tmp && tmp < 256)
        {
            epsilon = 0;
        }else
        {
            epsilon = 1;
        }
        
    }
    printf("(%d, ( ", epsilon);
    for (int i = 3; i >= 0; i--)
    {
        printf("%5d", C[i]);
    }
    printf("))");
}
