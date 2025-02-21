/*
  Esse programa lê um número n e imprime de 2 ^ 0 a 2 ^ n.
*/

#include <stdlib.h>
#include <stdio.h>

int main (void) {
  unsigned int n = 0;

  printf("Digite um número inteiro positivo: \n");

  if((scanf("%u", &n) != 1) || n <= 0) {
    printf("O número digitado é menor ou igual a 0!\nFIM!\n\n\n");
    return 1;
  } else {
    int ac = 1;
    for (int i = 0; i <= n; i++) {
      printf("2 ^ %d = %d", i, (2 *  ac));
      ac = ac * 2;
    }
  }
  return 0;
}