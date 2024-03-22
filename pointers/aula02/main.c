#include <stdio.h>
#include <stdlib.h>

// caso precise passar o vetor como parâmetros usar vetor é fácil
void imprimirVetor(int *v, int tam)
{
  int i;

  for (i = 0; i < tam; i++)
  {
    // aritmetica de ponteiros
    // percorrer o vetor sem usar o []
    printf("%d ", *(v + i));
  }
}

void imprimirLetras(char *v, int tam)
{
  int i;

  for (i = 0; i < tam; i++)
  {
    // aritmetica de ponteiros
    // percorrer o vetor sem usar o []
    printf("%c ", *(v + i));
  }
}

void preencherVetorInt(int *v, int tam)
{
  int i;

  for (i = 0; i < tam; i++)
  {
    printf("Digite um valor qualquer: ");
    // scanf("%d", &vet[i]); o & é para garantir o endereço em memória
    scanf("%d", v + i);
  }
}

int main()
{
  /*
  $passagem por valor é criado uma cópia do valor

  int copiar (int x) {
    //o 'x' é uma copia do int valor da função main
    printf("%d", x);
  }

  int main() {
    int valor;
    valor = 4;
    copiar(valor);
  }

  $passagem por referencia é passado um endereço do valor:
  isso permite a alteração da variável
  */

  int i, vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  char letras[5] = {'a', 'e', 'i', 'o', 'u'};

  // só o nome do vetor é o endereço do primeiro elemento: vet = &vet[0]
  // printf("%p\t%p\n", vet, &vet[0]);

  // na passagem de parametro por referencia é possível alterar o valor
  preencherVetorInt(vet, 10);

  for (i = 0; i < 10; i++)
  {
    // aritmetica de ponteiros
    // percorrer o vetor sem usar o []
    printf("%d ", *(vet + i));
  }

  printf("\n");

  for (i = 0; i < 10; i++)
  {
    printf("%d ", vet[i]);
  }

  printf("\n");

  for (i = 0; i < 10; i++)
  {
    // sem a aritmetica de ponteiros ele vai imprimir o primeiro elemento
    printf("%d ", *vet);
  }

  printf("\n");

  imprimirVetor(vet, 10);

  printf("\n");

  imprimirLetras(letras, 5);

  return 0;
}