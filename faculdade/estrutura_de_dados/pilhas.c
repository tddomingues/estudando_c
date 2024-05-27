#include <stdio.h>

#define tamanho 4

typedef struct Pilha {
  int inicio;
  int fim;
  int numeros[tamanho];
} NewPilha;

int main () {

  NewPilha pilha;
  pilha.fim = 0;
  pilha.inicio = 0;

  int elemento;

  //empilhar = push
  for(int i = 0; i < tamanho; i++) {

    if(pilha.fim == tamanho) {
      printf("Fim da fila\n");
      //system("pause");
    } else {

      printf("Insira um valor na fila: ");
      scanf("%d", &elemento);

      pilha.numeros[pilha.fim] = elemento;
      pilha.fim++;

      printf("Valor inserido: %d\n", elemento);
    }
  }

  printf("Pilha: ");
  for(int i = 0; i < tamanho; i++) {
    printf("%d ", pilha.numeros[i]);
  }

  //desempilhar = pop
  if(pilha.inicio == pilha.fim) {
    printf("Fim da fila\n");
  } else {
    pilha.fim--;
    elemento = pilha.numeros[pilha.fim];
    printf("Elemento removido %d ", elemento);
  }

  return 0;
}