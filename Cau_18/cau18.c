#include<stdio.h>
#include<math.h>

int main()
{
    int p = 2147483647, w = 8;
    int t = (log2(p) + 0.5)/w +0.5;
    int a, b, A[t], B[t];
    scanf("%d %d", &a, &b);
    for (int i = t-1; i >= 0; i--)
    {
        A[i] = a/pow(2, i*w);
        a = a - A[i]* pow(2, i*w);
        B[i] = b/pow(2, i*w);
        b = b - B[i]*pow(2, i*w);
    }
    printf("A[");
    for (int i = t-1; i >= 0; i--) printf("%d ", A[i]);
    printf("]\n");
    printf("B[");
    for (int i = t-1; i >= 0; i--) printf("%d ", B[i]);
    printf("]\n");
    int C[t], epsilon = 0;
    C[0] = (A[0] + B[0]) % (int)pow(2, 8);
    if (A[0] + B[0] > pow(2, 8)) epsilon = 1;
    for (int i = 1; i <= t-1; i++)
    {
        C[i] = A[i] + B[i] + epsilon;
        if (C[i] >= 256) 
        {
            C[i] =  C[i] % (int)pow(2, 8);
            epsilon = 1;
        }else {
            epsilon = 0;
        }
    }
    printf("%d, [", epsilon);
    for (int i = t-1; i >= 0; i--) printf("%d ", C[i]);
    printf("]\n");
    return 0;
}
