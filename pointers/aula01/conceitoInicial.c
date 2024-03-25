#include <stdio.h>
#include <stdlib.h>

// ponteiro é um apontador para um endereço de memória

/*
int main()
{

  int var = 15;
  int *ptr;

  // atribuimos a ptr o endereço de var
  ptr = &var;

  printf("Conteudo de var = %d\n", var);
  printf("Endereco de var = %p\n", &var);
  printf("Conteudo apontado por prt = %d\n", *ptr);
  printf("Endereco apontado por ptr = %p\n", ptr);
  printf("Endereco ptr = %p\n", &ptr);

  printf("\n\n");

  *ptr = 75;

  printf("Conteudo de var = %d\n", var);
  printf("Endereco de var = %p\n", &var);
  printf("Conteudo apontado por prt = %d\n", *ptr);
  printf("Endereco apontado por ptr = %p\n", ptr);
  printf("Endereco ptr = %p\n", &ptr);

  return 0;
}
*/

//*ptr = o conteudo do endereço da variavel que ptr aponta
// ptr = o endereço da variavel
//&ptr = o endereço do ponteiro

// usando passagem de parametro

void display(int var, int *ptr);
void update(int *p);

int main()
{
  int var = 15;
  int *ptr;

  ptr = &var;

  // ptr é um ponteiro
  display(var, ptr);

  printf("\n");

  //*ptr = 75;
  update(&var);

  display(var, ptr);

  return 0;
}

void display(int var, int *ptr)
{
  printf("Conteudo de var = %d\n", var);
  printf("Endereco de var = %p\n", &var);
  printf("Conteudo apontado por prt = %d\n", *ptr);
  printf("Endereco apontado por ptr = %p\n", ptr);
  printf("Endereco ptr = %p\n", &ptr);
}

void update(int *p)
{
  *p = *p + 1;
}