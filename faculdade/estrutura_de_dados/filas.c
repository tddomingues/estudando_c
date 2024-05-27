#include <stdio.h>
#include <stdlib.h>

#define tamanho 4

typedef struct Fila
{
  int dados[tamanho];
  int ini;
  int fim;
} NewFila;

void enfileira(int elemento)
{

  NewFila fila;

  fila.fim = 0;

  if (fila.fim == tamanho)
  {
    printf("\nFila cheia.\n");
  }
  else
  {
    fila.dados[fila.fim] = elemento;
    fila.fim++;
  }
}

void desenfileira () {

  int elemento;

  NewFila fila;

  fila.ini = 0;
  fila.fim = tamanho;

  if(fila.fim == fila.ini) {
    printf("Fila vazia.");
  } else {
    elemento = fila.dados[fila.ini];

    for(int i = 0; i < tamanho; i++) {
      fila.dados[i] = fila.dados[i+1];
    }

    fila.dados[fila.fim] = 0;
    fila.fim--;
  }

 

}

int main()
{

  int elemento;

  printf("\nInsira um valor na fila\n");
  scanf("%d", &elemento);
  enfileira(elemento);

  desenfileira(elemento);

  return 0;
}