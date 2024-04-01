#include <stdio.h>
#include <stdlib.h>

// Para realizar cálculos precisos de ponto flutuante, use operandos de ponto flutuante

int main()
{

  float hn = 0.0;
  int n, i;

  /*
  1/1 + 1/2 + 1/3
  */

  printf("Defina o valor do enesimo termo: \n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    hn = hn + (1.0 / i);
    printf("%f\n", hn);
  }

  printf("Hn = %f", hn);

  return 0;
}