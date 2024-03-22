#include <stdio.h>

// criando o struct Pessoas e renomeando ele para Newpessoas
typedef struct Pessoas
{
  int idade;
  float altura;
} Newpessoas;

// imprimir
void imprimirPessoa(Newpessoas P)
{
  printf("idade: %d \naltura: %f", P.idade, P.altura);
}

// o parâmetro P é um ponteiro para a strucy Newpessoas
void setPessoa(Newpessoas *P, int idade, float altura)
{
  // 2 maneiras de acessar o campo
  (*P).idade = idade;
  P->altura = altura;
}

int main()
{
  // criando um variável com as caracteristicas do struct Newpessoas
  Newpessoas p1;
  setPessoa(&p1, 41, 1.7);
  imprimirPessoa(p1);

  return 0;
}