#include <stdio.h>
#include <stdlib.h>

/*
lista encadeada: sequencia de objetos.
a inserção pode ser no início ou final.
*/

// nó
typedef struct No
{
  int valor;
  struct No *proximo; // ponteiro
} No;

// lista
typedef struct
{
  No *inicio;
  int tam;
} Lista;

//inserir no início da lista
void inserirInicio(Lista *lista, int valor) {
  No *novo = (No*)malloc(sizeof(No));
  novo->valor = valor;//(*novo).valor = valor
  novo->proximo = lista->inicio;
  lista->inicio = novo;
  lista->tam++;
}

//imprimir a lista
void imprimir(Lista *lista) {
  No *inicio = lista->inicio;
}

int main()
{
  Lista lista;

  // inicio a lista é vazia
  lista.inicio = NULL;
  lista.tam = 0;

  return 0;
}
