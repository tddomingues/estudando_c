#include <stdio.h>

int main () {

  int arr[] = {30, 21, 11, 83};

  //#incremento e decremento de ponteiros

  int *ptr = arr; //endereço da primeira posição do arr.

  printf("Valor inicial: %d\n", *ptr);
  getchar(); //dê um enter para avançar

  ptr++; //proximo endereço de memoria
  printf("Proximo: %d\n", *ptr);

  ptr++;
  printf("Proximo: %d\n", *ptr);

  ptr++;
  printf("Proximo: %d\n", *ptr);

  ptr--;
  printf("Proximo: %d\n", *ptr);
  getchar(); //dê um enter para avançar

  //#comparação de ponteiros

  int *ptr2 = arr + 1;

  if(ptr == ptr2) {
    printf("Iguais\n");
  } else {
    printf("Diferentes\n");
  }
  getchar(); //dê um enter para avançar

  //#acessando memoria fora do tamanho
  //ptr++ => ptr = ptr + 1

  int avanco = 20;

  ptr = avanco + ptr;

  printf("Conteudo: %d\n", *ptr);
  printf("Conteudo: %d\n", *(ptr - 1));

  return 0;
}