#include <stdio.h>
#include <stdlib.h>

// A função sizeof() é usada para se saber o tamanho em bytes de
// variáveis ou de tipos.

int main()
{
  printf("Tamanho char: %d\n", sizeof(char));
  printf("Tamanho int: %d\n", sizeof(int));
  printf("Tamanho float: %d\n", sizeof(float));
  printf("Tamanho double: %d\n", sizeof(double));
  //printf("Tamanho struct: %d\n", sizeof(struct <nome>));
}