#include <stdio.h>

int main() {
  int dem = 0;
  long long n;
  scanf("%lld", &n);
  for (long long i = 1; i*i <= n; i++)
  {
    if (n % i == 0)
    {
      dem++;
      long long j = n/i;
      if(i != j) dem++;
    }
  }
  if(dem == 2) printf("YES");
  else printf("NO");
}
// 6/10