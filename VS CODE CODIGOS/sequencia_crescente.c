
#include <stdio.h>
#include <stdlib.h>

int main() {
 int x, i;
  do {
  scanf("%d", &x);
  if (x > 0) {
  for (i = 1; i <= x; i++) {
 printf("%d", i);
 if (i < x) {
 printf(" ");
  }
  }
  printf("\n");
  }
  } while (x > 0);
    return 0;
}

 