#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
  int valor;
  struct no *proximo;
} No;

// No *: é um tipo de retorno da funcao, que é um ponteiro para um nó da lista
No *inserir(No *inicio, int x)
{
  No *novo = malloc(sizeof(No));
  if (novo)
  {
    novo->valor = x;
    novo->proximo = inicio;
  }

  return novo;
}

void imprimir(No *inicio)
{
  if (inicio)
  {
    printf("%d ", inicio->valor);
    imprimir(inicio->proximo);
  }
}

int main()
{

  No *lista = NULL;

  lista = inserir(lista, 10);
  lista = inserir(lista, 21);
  lista = inserir(lista, 33);

  imprimir(lista);
  return 0;
}