#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i;
  float s = 0.0;

  for (i = 1; i <= 50; i++)
  {

    s += (float)((2 * i) - 1) / i;
  }

  printf("S = %f", s);

  return 0;
}

// int main()
// {

//   /*
//   numerado: 1 3 5 7 ... 99
//   denominador: 1 2 3 4 ... 55
//   */

//   int i, r = 50;
//   float d = 1.0, n = 1.0;
//   float s = 0.0;

//   for (i = 1; i <= r; i++)
//   {
//     s = s + (n / d);
//     n = n + 2.0;
//     d = d + 1.0;
//   }

//   printf("Resultado final: %f ", s);

//   return 0;
// }