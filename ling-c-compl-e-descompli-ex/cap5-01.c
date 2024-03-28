#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro positivo N e
 imprima todos os números naturais de 0 até N em ordem
 crescente.
*/

// 3 maneiras de resolver
int main()
{
  int i, j;

  printf("Insira um numero inteiro: ");
  scanf("%d", &i);

  for (j = 0; j <= i; j++)
  {
    printf("%d\n", j);
  }

  // j = 0;

  // while (j <= i)
  // {
  //   printf("%d\n", j);
  //   j++;
  // }

  // do
  // {
  //   printf("%d\n", j);
  //   j++;
  // } while (j <= i);

  printf("O valor do j fora do escopo: %d", j);

  return 0;
}