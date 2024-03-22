#include <stdio.h>
#include <stdlib.h>

// type cast (Modeladores de tipos): são uma forma explícita de conversão de tipo
// y = (int) (f/10)

int main () {
  float y, x, f = 23.2;

  //conversão de tipo
  y = (int) (f / 10);
  x = (f / 10);

  printf("y: %f\n", y);
  printf("y: %f\n", x);

  //2)malloc: A função malloc() serve para alocar memória durante a execução do
 // programa. É ela que faz o pedido de memória ao computador e
 // retorna um ponteiro com o endereço do início do espaço de
 // memória alocado

//declara um endereço de memoria p
 int *p, i;
//armazena no endereço de memoria p
 p = (int *) malloc(5*sizeof(int));

 //verifique se há memoria disponivel para a alocação
 //A função malloc() retorna um ponteiro NULL para
 //indicar que não há memória disponível no computador ou que
 //ocorreu algum outro erro que impediu a memória de ser alocada.
 if(p == NULL) {
  printf("Memória insuficiente!\n");
  system("pause");
  exit(1);
 }

 for(i = 0; i < 5; i++) {
  printf("Digite o valor da posicao %d: ", i);

  scanf("%d", &p[i]);
 }
 
  system("pause");
  return 0;


  return 0;

}