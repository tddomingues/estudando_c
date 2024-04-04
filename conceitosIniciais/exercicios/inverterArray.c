#include <stdio.h>
#define TAM 6

int main()
{

  int i, z, ft, esq, dir, ref;
  int seqNumb[TAM] = {1, 2, 3, 4, 5, 6};

  printf("Array original: ");
  for (z = 0; z < TAM; z++)
  {
    printf("%d ", seqNumb[z]);
  }

  printf("\n");

  if (TAM % 2 == 0)
  {
    ft = TAM / 2;
  }
  else
  {
    ft = (TAM - 1) / 2;
  }

  for (i = 0; i < ft; i++)
  {
    esq = seqNumb[i];
    dir = seqNumb[TAM - 1 - i];
    ref = esq;
    seqNumb[i] = dir;
    seqNumb[TAM - 1 - i] = ref;
  }

  printf("Array invertido: ");
  for (z = 0; z < TAM; z++)
  {
    printf("%d ", seqNumb[z]);
  }

  return 0;
}