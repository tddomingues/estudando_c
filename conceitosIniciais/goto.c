#include <stdio.h>
#include <stdlib.h>

/*
goto é um salto condicional para um local especificado.
programação estuturada prova que goto não é necessária.
*/

// int main()
// {
//   int i = 0;

// inicio:
//   if (i < 5)
//   {
//     printf("Numero %d\n", i);
//     i++;
//     goto inicio;
//   }

//   return 0;
// }

// saindo de um laço aninhado: caso util
int main()
{
  int i, j, k;

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      for (k = 0; k < 4; k++)
      {
        if (i == 1 && j == 2 && k == 1)
        {
          goto fim;
        }
        else
        {
          printf("Posicao [%d, %d, %d]\n", i, j, k);
        }
      }
    }
  }

fim:
  printf("SAINDO DO LACO");

  return 0;
}
