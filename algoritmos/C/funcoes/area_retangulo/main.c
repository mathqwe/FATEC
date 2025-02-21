/*
  Esse programa deve criar duas funções. Uma para Printar e Scanear uma número,
  E outra para calcular a área de um quadrilátero
*/
#include <stdio.h>

#include <stdlib.h>

int escreveLe(void) {
  int lado;
  printf("Digite o valor de um lado do quadrilátero: ");

  if ((scanf("%d", & lado) != 1) || (lado <= 0)) {
    printf("O valor digitado é inválido!\n\n\n");
    while (getchar() != "\n");

    return -1;
  }
  return lado;
}

int calculoArea(int x, int y) {
  return (x * y);
}

int main(void) {
  int area = calculoArea(escreveLe(), escreveLe());
  printf("A area é igual a %d", area);
  return 0;
}