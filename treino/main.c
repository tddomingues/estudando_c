#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *p, *q, n;
  int seqNumb[3] = {1, 2, 3};

  n = 10;
  p = &n;

  q = &seqNumb[0];
  printf("%p\n", q);
  q = seqNumb;
  printf("%p\n", q);

  printf("valor de n %d\n", n);
  printf("endereço de n %p\n", &n);
  printf("valor apontado por p %d\n", *p);
  printf("endereço apontado por p %p\n", p);

  return 0;
}
