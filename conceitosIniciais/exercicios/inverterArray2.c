#include <stdio.h>
#define TAM 5

// usando ponteiro para inverter o array

int main()
{

  int z, ref, *p1, *p2;
  int seqNumb[TAM] = {3, 4, 5, 6, 7};

  printf("Array original: ");
  for (z = 0; z < TAM; z++)
  {
    printf("%d ", seqNumb[z]);
  }

  printf("\n");

  p1 = seqNumb;           // p1 aponta para o primeiro endereço do array
  p2 = seqNumb + TAM - 1; // p2 aponta para o ultimo endereço do array

  while (p1 < p2)
  {
    // p1 = &seqNumb[0]
    // p2 = &seqNumb[5]
    ref = *p1; // ref = 3
    *p1 = *p2; // valor de p1 = valor de p2 => valor de p1 = 8
    *p2 = ref; // valor de p2 = 1
    p1++;      // p1 = &seqNumb[1]
    p2--;      // p2 = &seqNumb[4]
  }

  printf("Array invertido: ");
  for (z = 0; z < TAM; z++)
  {
    printf("%d ", seqNumb[z]);
  }

  return 0;
}