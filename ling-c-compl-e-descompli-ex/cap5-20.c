#include <stdio.h>
#include <stdlib.h>

/*
E = 1/(1!) + 1/(2!) + ... + 1/(2!)
*/

int fatoracao(int r)
{

  int resultado = 1;

  while (r > 0)
  {
    resultado = resultado * r;
    r = r - 1;
  }

  return resultado;
}

int main()
{

  int i, n, d;
  float e = 0.0;

  printf("Digite o valor do N: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {

    d = fatoracao(i);

    e = e + (1.0 / d);
  }

  printf("E = %f", e);

  return 0;
}