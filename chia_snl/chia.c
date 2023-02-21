#include<stdio.h>
#include<string.h>

int chuanHoa(char &A[255], char B[255])
{
    int a = strlen(A)-1;
    int b = strlen(B)-1;
    if (a > b)
    {
        int temp = a - b;
        for (int i = b + temp; i >= temp; i--)
        {
            B[i] = B[b];
        }
        
    }
    
}

void cong (char A[255], char B[255])
{
    char s[255];
    int tmp = 0;

}

int main()
{
    char A[255], B[255], c[255], kb[11];
    kb[0] = '0';
    for (int i = 1; i <= 10; i++) 
    return 0;
}
//Chưa xonng