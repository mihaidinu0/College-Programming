#include <stdio.h>

int main() {

  int n, i, c = 0;
  printf("Introdu un numar: ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    c = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      c = 1;
      break;
    }
  }

  if (c == 0)
    printf("%d e numar prim.", n);
  else
    printf("%d nu e numar prim.", n);

  return 0;
}