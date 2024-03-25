#include <stdio.h>
#include <stdlib.h>

void descobrirValores(int *v, int *me, int *ma, int tam)
{
  int i;

  *ma = v[0];
  *me = v[0];

  for (i = 1; i < tam; i++)
  {
    if (v[i] < *me)
    {
      *me = v[i];
    }

    if (v[i] > *ma)
    {
      *ma = v[i];
    }
  }

  printf("Na funcao\nMenor: %d\tMaior: %d\n", *me, *ma);
  printf("End de menor: %p\tEnd de maior: %p\n", &me, &ma);
  printf("End de menor: %p\tEnd de maior: %p\n", me, ma);
}

int main()
{

  int valor = 10, menor, maior, vet[] = {50, 10, 250, 500, 25};
  int *p;
  // errado: p = 20;
  p = &valor;

  printf("Valor: %d\t%p\n", valor, &valor);
  printf("Endereco de p: %p\n", &p);
  printf("Conteudo guardado na variavel p: %p\n", p);
  printf("Conteudo apontando por p: %d\n", *p); // segundo caso em que se usa o *

  // todo vetor a variavel dele já é um ponteiro
  descobrirValores(vet, &menor, &maior, 5);

  printf("Em main\nMenor: %d\tMaior: %d\n", menor, maior);
  printf("End de menor: %p\tEnd de maior: %p\n", &menor, &maior);

  return 0;
}

// passagem de parametro por valor:
//  descobrirValores(vet, menor, maior, 5);
//  void descobrirValores(int *v, int me, int ma, int tam)
//  int me é uma copia de menor, vão ter endereços diferentes

// passagem de parametro por referencia: não tem na linguagem c, mas a ideia é parecida
// descobrirValores(vet, &menor, &maior, 5);
// void descobrirValores(int *v, int *me, int *ma, int tam)
// int *me = &menor
// 'me' aponta para o endereço de memória da variavel 'menor'
// a variavel 'me' irá alocar o endereço de memoria do 'menor', ou seja, esse é o valor recebido,
// por isso a ideia de parametro por referencia é diferente de outras linguagens