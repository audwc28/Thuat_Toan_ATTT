#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char A[255], B[255], C[255];
    scanf("%s %s", &A, &B); //12 voi 125
    int nho = 0, k = 0;
    int s1 = strlen(A) - 1, s2 = strlen(B) - 1;
    while (s1 >= 0 || s2 >= 0)
        {
            int a = s1 >= 0 ? A[s1] - '0':0;
            int b = s2 >= 0 ? B[s2] - '0':0;
            int hieu = a - b - nho;
            if (hieu < 0)
            {
                hieu += 10;
                C[k] = hieu + '0';
                nho = 1;
            }else
            {
                C[k] = hieu + '0';
                nho = 0;
            }
            s1--;
            s2--;
            k++;
        }
        int check = 0;
        for (int i = k-1; i >= 0; i--)
        {
            if (C[i] - '0' == 0)
            {
                check++;
            }else
            {
                break;
            }
        }
        if (check == k) printf("0");
        for (int i = k-1-check; i >= 0; i--)
        {
            printf("%c", C[i]);
        }
    return 0;
}
