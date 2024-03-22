#include <stdio.h>

typedef struct Pessoas
{
  int idade;
  float altura;
} Newpessoas;

void imprimirPessoa(Newpessoas P)
{
  printf("idade: %d \naltura: %f", P.idade, P.altura);
}

// o parâmetro P é um ponteiro para a strucy Newpessoas
void setPessoa(Newpessoas *P, int idade, float altura)
{

  (*P).idade = idade;
  P->altura = altura;
}

int main()
{
  Newpessoas p1 = {3, 2};
  setPessoa(&p1, 41, 1.7);
  imprimirPessoa(p1);

  return 0;
}