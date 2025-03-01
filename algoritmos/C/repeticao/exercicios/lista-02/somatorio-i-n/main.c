/*
  Esse programa lê um número n e imprime seu somatório utilizando um loop
  indíce final = n
  indíce inicial = 1
  termo = i
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, somatorio = 0;

  printf("Digite um número inteiro n:\n");

  while(scanf("%d", &n) != 1) {
    printf("Valor inválido!\nDigite o valor de n: \n");
    while (getchar() != '\n');
  }

  for(int i = 1; i <= n; i++) {
    somatorio += i;
  }

  printf("Somatório de n = %d\ti = %d\tsomatório = %d\n\n\n", n, 1, somatorio);

  return 0;
}
