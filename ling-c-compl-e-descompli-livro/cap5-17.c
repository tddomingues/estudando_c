#include <stdio.h>
#include <stdlib.h>

int main()
{

  int numb, l, i, j;

  numb = 1;

  printf("Quantas linhas ? \n");
  scanf("%d", &l);

  for (i = 0; i < l; i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf("%d ", numb);
      numb++;
    }

    printf("\n");
  }

  return 0;
}

/*
Usando o controlador para a coluna (int c)

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int numb, c, l, i, j;

  numb = 1;
  c = 1;

  printf("Quantas linhas ? \n");
  scanf("%d", &l);

  for (i = 0; i < l; i++)
  {

    for (j = 0; j < c; j++)
    {
      printf("%d ", numb);
      numb++;
    }

    printf("\n");
    c++;
  }

  return 0;
}
*/