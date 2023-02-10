#include<stdio.h>
#include<math.h>

void sangSNTtrendoan(long long a, long long b) //a=10, b =20
{
    long long tong = 0;
    //Sử dụng thuật toán sàng gì gì đó nguyên thủy
    long long SNT[b+1]; //Tạo mảng có b+1 phần tử
    for(long long i = 0; i <= b; i++) //Giả sử tất cả đều là SNT nên gán cho snt[i] = 1
    {
        SNT[i] = 1; //Tức là từ 0 đến 20 là snt
    }
    SNT[0] = 0; //0 ko là snt nên chuyển về 0
    SNT[1] = 0; //1 tương tự
    for(long long i = 2; i * i <= b; i++) //(i=2, 4<=20->T)
    {
        if(SNT[i] == 1) //SNT[2] ==1 ->T
        {
            for(long long j = i * i; j <= b; j += i)
            //j=4 <=20
                SNT[j] = 0;
                //SNT[4] = 0; <đúng 4 ko phải là nguyên tố luôn> -> j = 4 + 2 = 6 -> SNT[6] = 0; Tương tự vậy sẽ lọc hết mất thằng ko phải là số nguyên tố
        }
    }
    for (int i = 2; i <= b; i++)
    {
        if (SNT[i] == 1) tong += i;
    }
    printf("%lld", tong);
}

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    sangSNTtrendoan(a, b);
    return 0;
}
