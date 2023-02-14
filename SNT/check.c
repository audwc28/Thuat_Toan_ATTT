#include <stdio.h>

int main() {
  long long N;
  scanf("%lld", &N);
  int check[N + 1];
  // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
  for (long long i = 2; i <= N; i++) {
    check[i] = 1;
  }

  // Thuật toán sàng nguyên tố
  // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
  for (long long i = 2; i <= N; i++) {
    if (check[i] == 1) {
      for (long long j = i * i; j <= N; j += i) {
        check[j] = 0;
      }
    }
  }
  if (check[N] == 1) printf("YES");
  else printf("NO");
}
// 1/10