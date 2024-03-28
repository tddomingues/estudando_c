#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia um número positivo e imprima
 seus divisores. Exemplo: Os divisores do número 66 são: 1, 2,
 3, 6, 11, 22, 33 e 66.
*/

int main()
{

  int numero, divisor, heDivisor, i;

  printf("Insira um numero inteiro: ");
  scanf("%d", &numero);

  for (i = 1; i <= numero; i++)
  {
    heDivisor = numero % i;

    if (heDivisor == 0)
    {
      divisor = numero / i;
      printf("%d ", divisor);
    }
  }

  return 0;
}