#include <stdio.h>

int main(void) {
  char name[6] = {'D', 'a', 'n', 'i', 'l', 'o'};
  int i;
  for (i = 0; i < 6; i++) {
    printf("%c", name[i]);
  }
    printf("\n");
  //printando os caracteres no valores da tabela ascii
  char name2[6] = {'D', 'a', 'n', 'i', 'l', 'o'};
  int i2;
  for (i2 = 0; i2 < 6; i2++) {
    printf("%d ", name2[i2]);
  }
    printf("\n");
  // printando os numeros em caracteres 
  // 68  = D,  97 = a, 110 = n,  105 = i, 108 = l, 111= o.
  int name3[6] = {68, 97, 110, 105, 108, 111};
  int i3;
  for (i3 = 0; i3 < 6; i3++) {
    printf("%c", name3[i3]);
  }
    printf("\n");
 
}
