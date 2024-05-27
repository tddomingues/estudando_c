#include <stdio.h>

int main() {

  int x;
  int *y;

  x = 10;
  y = &x;

  printf("conteudo de x e %d  \n", x);
  printf("endereco de x e %p \n", &x);
  printf("conteudo de y e %p  \n", y);
  printf("Endereço de y e %p  \n", &y);
  *y = 20;
  printf("conteudo na qual y aponta e %d  \n", *y);
  printf("conteudo de x e %d  \n", x);


  return 0;
}