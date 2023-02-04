#include<stdio.h>
#include<math.h>

int main(){
    int P = 2147483647, W = 8, a, m = 31, t = 4, A[3], j = 0, k = 1;
    printf("a = "); scanf("%d", &a);
    while (a > 0)
    {
        if (k != t)
        {
            A[j] = floor(a / pow(2, (t-k)*W));
            a = a - A[j]*pow(2, (t-k)*W);
            j++;
            k++;
        }else
        {
            A[j] = a;
            break;
        }
    }
    printf("A[");
    for (int i = j; i >= 0; i--)
    {
        printf("%5d", A[i]);
    }
    printf("  ]");
}