#include<stdio.h>
#include<math.h>

int main()
{
    int P = 2147483647, W = 8, a = 0, m = 31, t = 3, A[3];
    //Nhập mảng
    for (int i = 0; i <= 3; i++)
    {
        printf("A[%d] = ", i); scanf("%d", &A[i]);
    }
    //Tính a
    for (int i = 3; i >= 0; i--)
    {
        a += A[i]*pow(2, t*W);
        t--;
    }
    printf("a = %d", a);
    return 0;
}
