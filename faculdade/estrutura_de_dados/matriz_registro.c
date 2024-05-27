#include <stdio.h>

typedef struct Informacao
  {
    int idade;
    char nome[20];
    float altura;
  } Informacao;
  

int main () {
  
  //matriz unidimensional
  int numeros[3] = {21, 32, 22};

  for(int i = 0; i < 3; i++) {
    printf("%d ", numeros[i]);
  }

  printf("\n=================\n");

  //matriz bidimensional
  /*
  int posicao[3][3];
  for(int l = 0; l < 3; l++) {    
    for(int c = 0; c < 3; c++) {
      printf("Insira um numero na posicao [%d %d]:\n", l,c);
      scanf("%d", &posicao[l][c]);
    }
  }

  for(int l = 0; l < 3; l++) {   
    for(int c = 0; c < 3; c++) {
      printf("%d ", posicao[l][c]);
    }
    printf("\n");
  }
  */

  printf("\n=================\n");

  Informacao info1 = {21, "Tiago", 1.5};

  printf("%s \n", info1.nome);
  printf("%d \n", info1.idade);
  printf("%f \n", info1.altura);

  return 0;
}