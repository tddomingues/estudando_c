#include <stdio.h>
#include <stdlib.h>

typedef struct numero
{
  int numero;
} Numero;

typedef struct no
{
  Numero numero;
  struct no *proximo;
} No;

Numero inserir_numero()
{
  Numero num;

  printf("\nInsira um numero na pilha ");
  scanf("%d", &num.numero);

  return num;
}

No *empilhar(No *topo)
{
  No *novo;
  novo = malloc(sizeof(No));

  if (novo)
  {
    novo->numero = inserir_numero();
    novo->proximo = topo;
    return novo;
  }
  else
  {
    printf("\nErro ao alocar memoria...\n");
  }
  return NULL;
}

int main()
{

  No *topo = NULL;

  int opcao;

  do
  {
    printf("Escolha 1 - empilhar ou qualquer numero para sair");
    scanf("%d", &opcao);
    topo = empilhar(topo);

    printf("------ PILHA ------");
    while (topo)
    {
      printf("%d ", topo->numero.numero);
      topo = topo->proximo;
    }
    printf("------ PILHA ------");
  } while (opcao == 1);

  return 0;
}
