#include <stdio.h>
#include <stdlib.h>

/* lista encadeada: no início
NULL
12
32-12
65-32-12
*/

typedef struct No
{
  int valor;
  struct No *proximo;
} No;

No *inserirValor(No *lista, int valor)
{
  No *novo = malloc(sizeof(No));
  if (novo)
  {
    // inserir o valor e a lista no endereco de memoria criado com malloc
    novo->valor = valor;
    novo->proximo = lista;
  }

  return novo;
}

void mostrarLista(No *lista)
{
  if (lista)
  {
    printf("%d ", lista->valor);
    // lista = int valor = 22, proximo = int valor = 32, proximo = int valor = 232, proximo = NULL
    mostrarLista(lista->proximo);
  }
}

int main()
{

  // o inicio é nulo
  No *lista = NULL;

  // 1)retorno -> lista = int valor = 232, proximo = NULL
  lista = inserirValor(lista, 232);
  // 2)retorno -> lista = int valor = 32, proximo = int valor = 232, proximo = NULL
  lista = inserirValor(lista, 32);
  // 3)retorno -> lista = int valor = 22, proximo = int valor = 32, proximo = int valor = 232, proximo = NULL
  lista = inserirValor(lista, 22);

  mostrarLista(lista);

  return 0;
}
