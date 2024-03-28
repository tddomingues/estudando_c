#include <stdio.h>

// fflush: usar depois de uma entrada de dados

int main()
{

  char str1[10];
  char str2[10];

  printf("Digite a primeira string:\n");
  scanf("%s", str1);
  // limpando a leitura de dados do teclado
  fflush(stdin);

  printf("Digite a segunda string:\n");
  // scanf("%s", str2);
  fgets(str2, 10, stdin);
  fflush(stdin);

  puts("Resultado:");
  puts(str1);
  puts(str2);

  return 0;
}