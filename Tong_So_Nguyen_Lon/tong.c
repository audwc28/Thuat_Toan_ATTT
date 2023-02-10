#include<stdio.h>
#include<string.h>

int main()
{
    char num1[255], num2[255], num3[256];
    int soDu = 0, k = 0;
    scanf("%s%s", &num1, &num2); //Nhập 2 số num1 và num2. Ví dụ nhập 98 và 12
    int S1 = strlen(num1) - 1; //strlen để lấy độ dài chuỗi, trừ 1 vì char bắt đầu từ 0 -> S1 = 1
    int S2 = strlen(num2) - 1; //S2 = 1;
    while (S1 >= 0 || S2 >= 0 || soDu > 0) //Lần 1: (1>=0 -> T) Lần 2: (0>=0 -> T) Lần 3:(-1>=0||-1>=0||1>0 ->T) Lần 4: (-2>=0||-2>=0||0>0 ->F->Dừng)
    {
        int a = S1 >= 0 ? num1[S1] - '0':0; // num[S1] ở dạng ký tự khi cộng trừ cho '0' thì biến thành số nguyên
        //Nếu S1 >= 0 thì a = num1[S1] - '0' còn không thì a = 0. 
        //1>=0 -> a=num1[1]=8; 0>=0 -> a=num1[0]=9;  -1>=0->a=0
        int b = S2 >= 0 ? num2[S2] - '0':0;
        //1>=0->b=num2[1]=2; 0>=0 -> b=num2[0]=1 ; -1>=0 -> b=0
        int tong = a + b + soDu; //Cộng từng cộng 2 phép tính
        //tong=8+2+0=10; tong=9+1+1=11; tong = 0+0+1=1
        num3[k] = tong % 10 + '0'; //Tính kết quả, tong/10 đang ở dạng int nên phải + '0' đển biến về ký tự vì num3[k] luôn ở dạng ký tự
        //num3[0]=10%10=0; num3[1]=11%10=1; num[3] = 1%10=1
        soDu = tong / 10; //Tính số nhớ
        //soDu=10/10=1; soDu=11/10=1; soDu=1/10=0
        S1--; //S1=1-1=0; S1=0-1=-1; S1=-1-1=-2; 
        S2--; //S2=1-1=0; S2=0-1=-1; S2=-1-1=-2
        k++; //k=0+1=1; k=1+1=2; k=2+1=3
        //Quay lại kiểm tra điều kiện ở while
    }
    
    //Sau khi chạy xong while ta có num3[0]=0, num3[1]=1, num3[2]=1 và k=3 nên chỉ chạy đảo ngược thì ra đáp án 98+12.
    for (int i = k-1; i >= 0; i--)
    {
        printf("%c", num3[i]);
    }
    
    return 0;
}
