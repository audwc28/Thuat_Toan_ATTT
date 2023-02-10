#include<stdio.h>
#include<math.h>

long long max(long long a, long long b) //Trả về số lớn hơn trong a và b
{
    if (a > b) //Nếu a lớn hơn thì trả về a
    {
        return a;
    }
    return b; //Nếu b lớn hơn thì trả về b
}

void sangSNTtrendoan(long long l, long long r) //Giả sử l=10, r=20
{
    int dem = 0;
    //Thuật toán tìm được, đã solved được trên web qq của thầy
    long long SNT[r - l + 1]; //r-l+1 để lấy số phần tử trong khoảng r, l -> SNT[11]
    for(long long i = 0; i <= r-l+1; i++) //(i=0; i<=11; i++)
    {
        SNT[i] = 1; //Giả sử tất các số từ 0 đến 11 đều là snt nên gán snt[i] = 1
    }
    for(long long i = 2; i * i <= r; i++) 
    //i=2 -> 4<20 -> T
    //i = 2+1=3 -> 9 <= 20 -> T
    //i = 3 + 1 = 4 -> 16 <= 20 -> T
    {
        for(long long j = max(i*i,(l+i-1)/i*i); j <= r; j += i)
        //i = 2: j = max(4, 2) = 4 <= 20 -> T
        //i = 3; j = max(9, 1) = 9 <= 20 -> T
        //i = 4; j = max(16, 0) = 16 <= 20 -> T
        {
            SNT[j-l] = 0;
            //i = 2:SNT[4-10=-6]=0 -> j = 4 + 2 = 6 <= 20 -> T -> SNT[6-10=-4] = 0 -> j = 6 + 2 = 8 <= 20 -> SNT[8-10=-2] = 0
            //i = 2:-> j = 8 + 2 = 10 <= 20 -> SNT[10-10=0] = 0 -> j = 10 + 2 = 12 <= 20 -> SNT[12-10=8] = 0 
            //i = 2: Tương tự với i = 2 ta tổng hợp được SNT[0], SNT[2], SNT[4], SNT[6], SNT[8], SNT[10] bằng 0 -> Quay về vòng to
            //i = 3: SNT[9-10=-3]=0 -> j = 9 + 3 = 12 -> SNT[12-10=2] = 0 -> j = 12 = 3 = 15 -> SNT[15-10=5] = 0
            //i = 3: Tương tự ta có SNT[2], SNT[5], SNT[8] bằng 0 -> Quay về vòng to
            //i = 4: SNT[16-10=6]=0 -> j = 16 + 4 = 20 >= 20 -> SNT[20-10=10]=0 
            //Tổng hợp lại có <= 20 -> SNT[0], SNT[2], SNT[4], SNT[6], SNT[8], SNT[10], SNT[5] = 0
        }
    }

    for(long long i = max(l,2); i <= r; i++)
    //i=max(10, 2)=10<=20->T
    //i=10+1=11<=20->T
    {
        if(SNT[i-l]==1)//SNT[10-10=0]==1->F
        //SNT[11-10=1]==1->T
        {
            dem++;
        }
    }
    printf("%d", dem);
    //Cái thuật toán thật ảo ma -> Thuộc cho lành
    //Nếu thi trên web thì làm theo cái này ko thì mấy thuật toán ngắn ngắn trên gg
}

int main()
{
    long long l,r;
    scanf("%lld %lld",&l,&r);
    sangSNTtrendoan(l,r);
    return 0;
}