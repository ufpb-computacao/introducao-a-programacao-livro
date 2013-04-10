#include <stdio.h>

void main() {
  int a, b;
  scanf("%i", &a);
  scanf("%i", &b);
  if (a > b)
    printf("A é maior que B");
  else if (b > a)
    printf("B é maior que A");
  else
    printf("A = B");
}

