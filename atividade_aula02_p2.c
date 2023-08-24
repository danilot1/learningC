#include <stdio.h>

int main(void) {
  int a = 3, b = 4, c;
  int *p = &a; // armazena o endereco de a na variavel *p
  int *q = &b; // armazena o endereco de b na variavel *q

  c = *p;
  *p = *q;
  *q = c;

  printf("%d\n", *p);
  printf("%d\n\n", *q);
  printf("%d\n", a);
  printf("%d\n", b);
  return 0;
}