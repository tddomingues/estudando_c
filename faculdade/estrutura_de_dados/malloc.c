#include <stdlib.h>
#include <stdio.h>

typedef struct Data {
  int dia, mes, ano;
} Data;

int main () {

  Data *data;

  data = malloc(sizeof(data)); 

  data->dia = 12;
  data->mes = 2;
  data->ano = 2022;

  printf("%d/", data->dia);
  printf("%d/", data->mes);
  printf("%d/", data->ano);

  printf("\n===================\n");

  //declaro a variavél
  int *num;
  //malloc vai achar um espaço em memoria para alocar *num
  //malloc tem um endereço em memória e ele vai retornar um endereço para o ponteiro p
  num = (int *)malloc(sizeof(int));
  //ponteiro p vai ser alocado no endereço retornado pelo malloc

  if(num == NULL) {
    printf("NÃO FOI ENCONTRADO ESPAÇO EM MEMÓRIA.");
  } else {
    *num = 23;
    printf("valor: %d\n", *num);
    //limpando o endereço reservado pelo malloc
    free(num);
  }

  return 0;

};